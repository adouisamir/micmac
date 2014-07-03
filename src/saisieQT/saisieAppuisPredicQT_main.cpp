#include "saisieQT_main.h"
#include "../uti_phgrm/SaisiePts/cParamSaisiePts.h"
#include "QT_interface_Elise.h"
#include "private/files.h"

using namespace std;

int saisieAppuisPredicQT_main(QApplication &app, int argc, char *argv[])
{
    app.setApplicationName("SaisieAppuisPredicQT");
    app.setOrganizationName("Culture3D");

    QSettings settings(QApplication::organizationName(), QApplication::applicationName());

    if ((argc>0)&&(string(argv[0]).find("SaisieQT")!= string::npos))
    {
        argv++;
        argc--;
    }

    Pt2di aSzWin(800,800);
    Pt2di aNbFen(-1,-1);

    string aFullName, aDir, aName, aNamePt;   //mandatory arguments
    string aNameOri, aNameMesure;                       //named args
    string aTypePts="Pts";
    double aFlou=0.;

    bool aForceGray = false;

    if (argv[0][0] == 'v')
    {
        MMVisualMode = true;
        argv[0] = (char*) "SaisieAppuisPredicQT";
    }
    SaisieAppuisPredic(argc, argv, aSzWin, aNbFen, aFullName, aDir, aName, aNamePt, aNameOri, aNameMesure, aTypePts, aFlou, aForceGray);

    if (!checkNamePt( QString (aNamePt.c_str()))) return -1;

    QStringList filenames = getFilenames(aDir, aName);

    int aNbW = aNbFen.x * aNbFen.y;
    if (filenames.size() < aNbW)
    {
         aNbW = filenames.size();

         cVirtualInterface::ComputeNbFen(aNbFen, aNbW);
    }

    bool init = settings.contains("MainWindow/size");

    settings.beginGroup("MainWindow");
    if (aSzWin.x > 0)
        settings.setValue("size", QSize(aSzWin.x, aSzWin.y));
    else if (!init)
    {
        settings.setValue("size", QSize(800, 800));
        aSzWin.x = aSzWin.y = 800;
    }
    settings.setValue("NbFen", QPoint(aNbFen.x, aNbFen.y));
    settings.endGroup();

    QStringList input;
    input   << QString(MMDir().c_str()) + QString("bin/SaisiePts")
            << QString(MMDir().c_str()) + QString("include/XML_MicMac/SaisieAppuisPredic.xml")
            << QString("DirectoryChantier=") + QString(aDir.c_str())
            << QString("+Images=") +  QString(aName.c_str())
            << QString("+Ori=") + QString(aNameOri.c_str())
            << QString("+LargeurFlou=") + QString::number(aFlou)
            << QString("+Terrain=") + QString(aNamePt.c_str())
            << QString("+Sauv=") + QString(aNameMesure.c_str())
            << QString("+SzWx=") + QString::number(aSzWin.x)
            << QString("+SzWy=") + QString::number(aSzWin.y)
            << QString("+NbFx=") + QString::number(aNbFen.x)
            << QString("+NbFy=") + QString::number(aNbFen.y)
            << QString("+TypePts=") + QString(aTypePts.c_str());


    if (EAMIsInit(&aFlou))
        input << QString("+FlouSpecified=") + QString::number(aFlou);

    if (EAMIsInit(&aTypePts))
        input << QString("+TypeGlobEcras=") + QString(aTypePts.c_str());

    if (EAMIsInit(&aForceGray))
        input << QString("+ForceGray=") + QString(aForceGray ? "1" : "0");



    char **output;

    // Copy input to output
    output = new char*[input.size() + 1];
    for (int i = 0; i < input.size(); i++) {
        output[i] = new char[strlen(input.at(i).toStdString().c_str())+1];
        memcpy(output[i], input.at(i).toStdString().c_str(), strlen(input.at(i).toStdString().c_str())+1);
    }
    output[input.size()] = ((char*)NULL);


    cResultSubstAndStdGetFile<cParamSaisiePts> aP2(
            input.size()-2,output+2,
            output[1],
            StdGetFileXMLSpec("ParamSaisiePts.xml"),
            "ParamSaisiePts",
            "ParamSaisiePts",
            "DirectoryChantier",
            "FileChantierNameDescripteur" );

    cAppli_SaisiePts   anAppli (aP2,false);

    SaisieQtWindow w(POINT2D_PREDIC);

    new cQT_Interface(anAppli,&w);

    w.show();

    w.addFiles(filenames, false);

    return app.exec();
}

