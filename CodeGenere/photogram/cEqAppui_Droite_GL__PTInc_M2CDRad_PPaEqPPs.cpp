// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs.h"


cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr",0,8));
   AddIntRef (cIncIntervale("Orient",8,14));
   AddIntRef (cIncIntervale("Tmp_PTer",14,17));
   Close(false);
}



void cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::ComputeVal()
{
   double tmp0_ = mCompCoord[8];
   double tmp1_ = mCompCoord[9];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = cos(tmp0_);
   double tmp4_ = tmp3_*tmp2_;
   double tmp5_ = sin(tmp0_);
   double tmp6_ = tmp5_*tmp2_;
   double tmp7_ = sin(tmp1_);
   double tmp8_ = mCompCoord[10];
   double tmp9_ = sin(tmp8_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp7_);
   double tmp12_ = cos(tmp8_);
   double tmp13_ = mCompCoord[14];
   double tmp14_ = mCompCoord[11];
   double tmp15_ = tmp13_-tmp14_;
   double tmp16_ = -(tmp5_);
   double tmp17_ = tmp16_*tmp10_;
   double tmp18_ = tmp3_*tmp11_;
   double tmp19_ = tmp18_*tmp12_;
   double tmp20_ = tmp17_+tmp19_;
   double tmp21_ = tmp3_*tmp10_;
   double tmp22_ = tmp5_*tmp11_;
   double tmp23_ = tmp22_*tmp12_;
   double tmp24_ = tmp21_+tmp23_;
   double tmp25_ = tmp2_*tmp12_;
   double tmp26_ = mCompCoord[15];
   double tmp27_ = mCompCoord[12];
   double tmp28_ = tmp26_-tmp27_;
   double tmp29_ = mCompCoord[16];
   double tmp30_ = mCompCoord[13];
   double tmp31_ = tmp29_-tmp30_;
   double tmp32_ = tmp4_*mLocGL_0_0;
   double tmp33_ = tmp6_*mLocGL_1_0;
   double tmp34_ = tmp32_+tmp33_;
   double tmp35_ = tmp7_*mLocGL_2_0;
   double tmp36_ = tmp34_+tmp35_;
   double tmp37_ = (tmp36_)*(tmp15_);
   double tmp38_ = tmp4_*mLocGL_0_1;
   double tmp39_ = tmp6_*mLocGL_1_1;
   double tmp40_ = tmp38_+tmp39_;
   double tmp41_ = tmp7_*mLocGL_2_1;
   double tmp42_ = tmp40_+tmp41_;
   double tmp43_ = (tmp42_)*(tmp28_);
   double tmp44_ = tmp37_+tmp43_;
   double tmp45_ = tmp4_*mLocGL_0_2;
   double tmp46_ = tmp6_*mLocGL_1_2;
   double tmp47_ = tmp45_+tmp46_;
   double tmp48_ = tmp7_*mLocGL_2_2;
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp49_)*(tmp31_);
   double tmp51_ = tmp44_+tmp50_;
   double tmp52_ = mCompCoord[0];
   double tmp53_ = (tmp20_)*mLocGL_0_0;
   double tmp54_ = (tmp24_)*mLocGL_1_0;
   double tmp55_ = tmp53_+tmp54_;
   double tmp56_ = tmp25_*mLocGL_2_0;
   double tmp57_ = tmp55_+tmp56_;
   double tmp58_ = (tmp57_)*(tmp15_);
   double tmp59_ = (tmp20_)*mLocGL_0_1;
   double tmp60_ = (tmp24_)*mLocGL_1_1;
   double tmp61_ = tmp59_+tmp60_;
   double tmp62_ = tmp25_*mLocGL_2_1;
   double tmp63_ = tmp61_+tmp62_;
   double tmp64_ = (tmp63_)*(tmp28_);
   double tmp65_ = tmp58_+tmp64_;
   double tmp66_ = (tmp20_)*mLocGL_0_2;
   double tmp67_ = (tmp24_)*mLocGL_1_2;
   double tmp68_ = tmp66_+tmp67_;
   double tmp69_ = tmp25_*mLocGL_2_2;
   double tmp70_ = tmp68_+tmp69_;
   double tmp71_ = (tmp70_)*(tmp31_);
   double tmp72_ = tmp65_+tmp71_;
   double tmp73_ = tmp52_/(tmp72_);
   double tmp74_ = (tmp51_)*(tmp73_);
   double tmp75_ = mCompCoord[1];
   double tmp76_ = tmp74_+tmp75_;
   double tmp77_ = (tmp76_)-tmp75_;
   double tmp78_ = tmp16_*tmp12_;
   double tmp79_ = tmp18_*tmp9_;
   double tmp80_ = tmp78_+tmp79_;
   double tmp81_ = tmp3_*tmp12_;
   double tmp82_ = tmp22_*tmp9_;
   double tmp83_ = tmp81_+tmp82_;
   double tmp84_ = tmp2_*tmp9_;
   double tmp85_ = mCompCoord[2];
   double tmp86_ = (tmp80_)*mLocGL_0_0;
   double tmp87_ = (tmp83_)*mLocGL_1_0;
   double tmp88_ = tmp86_+tmp87_;
   double tmp89_ = tmp84_*mLocGL_2_0;
   double tmp90_ = tmp88_+tmp89_;
   double tmp91_ = (tmp90_)*(tmp15_);
   double tmp92_ = (tmp80_)*mLocGL_0_1;
   double tmp93_ = (tmp83_)*mLocGL_1_1;
   double tmp94_ = tmp92_+tmp93_;
   double tmp95_ = tmp84_*mLocGL_2_1;
   double tmp96_ = tmp94_+tmp95_;
   double tmp97_ = (tmp96_)*(tmp28_);
   double tmp98_ = tmp91_+tmp97_;
   double tmp99_ = (tmp80_)*mLocGL_0_2;
   double tmp100_ = (tmp83_)*mLocGL_1_2;
   double tmp101_ = tmp99_+tmp100_;
   double tmp102_ = tmp84_*mLocGL_2_2;
   double tmp103_ = tmp101_+tmp102_;
   double tmp104_ = (tmp103_)*(tmp31_);
   double tmp105_ = tmp98_+tmp104_;
   double tmp106_ = (tmp105_)*(tmp73_);
   double tmp107_ = tmp106_+tmp85_;
   double tmp108_ = (tmp107_)-tmp85_;
   double tmp109_ = (tmp77_)*(tmp77_);
   double tmp110_ = (tmp108_)*(tmp108_);
   double tmp111_ = tmp109_+tmp110_;
   double tmp112_ = (tmp111_)*(tmp111_);
   double tmp113_ = tmp112_*(tmp111_);
   double tmp114_ = tmp113_*(tmp111_);
   double tmp115_ = mCompCoord[3];
   double tmp116_ = tmp115_*(tmp111_);
   double tmp117_ = mCompCoord[4];
   double tmp118_ = tmp117_*tmp112_;
   double tmp119_ = tmp116_+tmp118_;
   double tmp120_ = mCompCoord[5];
   double tmp121_ = tmp120_*tmp113_;
   double tmp122_ = tmp119_+tmp121_;
   double tmp123_ = mCompCoord[6];
   double tmp124_ = tmp123_*tmp114_;
   double tmp125_ = tmp122_+tmp124_;
   double tmp126_ = mCompCoord[7];
   double tmp127_ = tmp114_*(tmp111_);
   double tmp128_ = tmp126_*tmp127_;
   double tmp129_ = tmp125_+tmp128_;

  mVal[0] = (mLocXIm-cos(mLocYIm)*(tmp76_+(tmp77_)*(tmp129_))-sin(mLocYIm)*(tmp107_+(tmp108_)*(tmp129_)))*mLocScNorm;

}


void cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[8];
   double tmp1_ = mCompCoord[9];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = cos(tmp0_);
   double tmp4_ = tmp3_*tmp2_;
   double tmp5_ = sin(tmp0_);
   double tmp6_ = tmp5_*tmp2_;
   double tmp7_ = sin(tmp1_);
   double tmp8_ = mCompCoord[10];
   double tmp9_ = sin(tmp8_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = -(tmp7_);
   double tmp12_ = cos(tmp8_);
   double tmp13_ = mCompCoord[14];
   double tmp14_ = mCompCoord[11];
   double tmp15_ = tmp13_-tmp14_;
   double tmp16_ = -(tmp5_);
   double tmp17_ = tmp16_*tmp10_;
   double tmp18_ = tmp3_*tmp11_;
   double tmp19_ = tmp18_*tmp12_;
   double tmp20_ = tmp17_+tmp19_;
   double tmp21_ = tmp3_*tmp10_;
   double tmp22_ = tmp5_*tmp11_;
   double tmp23_ = tmp22_*tmp12_;
   double tmp24_ = tmp21_+tmp23_;
   double tmp25_ = tmp2_*tmp12_;
   double tmp26_ = mCompCoord[15];
   double tmp27_ = mCompCoord[12];
   double tmp28_ = tmp26_-tmp27_;
   double tmp29_ = mCompCoord[16];
   double tmp30_ = mCompCoord[13];
   double tmp31_ = tmp29_-tmp30_;
   double tmp32_ = tmp4_*mLocGL_0_0;
   double tmp33_ = tmp6_*mLocGL_1_0;
   double tmp34_ = tmp32_+tmp33_;
   double tmp35_ = tmp7_*mLocGL_2_0;
   double tmp36_ = tmp34_+tmp35_;
   double tmp37_ = (tmp36_)*(tmp15_);
   double tmp38_ = tmp4_*mLocGL_0_1;
   double tmp39_ = tmp6_*mLocGL_1_1;
   double tmp40_ = tmp38_+tmp39_;
   double tmp41_ = tmp7_*mLocGL_2_1;
   double tmp42_ = tmp40_+tmp41_;
   double tmp43_ = (tmp42_)*(tmp28_);
   double tmp44_ = tmp37_+tmp43_;
   double tmp45_ = tmp4_*mLocGL_0_2;
   double tmp46_ = tmp6_*mLocGL_1_2;
   double tmp47_ = tmp45_+tmp46_;
   double tmp48_ = tmp7_*mLocGL_2_2;
   double tmp49_ = tmp47_+tmp48_;
   double tmp50_ = (tmp49_)*(tmp31_);
   double tmp51_ = tmp44_+tmp50_;
   double tmp52_ = mCompCoord[0];
   double tmp53_ = (tmp20_)*mLocGL_0_0;
   double tmp54_ = (tmp24_)*mLocGL_1_0;
   double tmp55_ = tmp53_+tmp54_;
   double tmp56_ = tmp25_*mLocGL_2_0;
   double tmp57_ = tmp55_+tmp56_;
   double tmp58_ = (tmp57_)*(tmp15_);
   double tmp59_ = (tmp20_)*mLocGL_0_1;
   double tmp60_ = (tmp24_)*mLocGL_1_1;
   double tmp61_ = tmp59_+tmp60_;
   double tmp62_ = tmp25_*mLocGL_2_1;
   double tmp63_ = tmp61_+tmp62_;
   double tmp64_ = (tmp63_)*(tmp28_);
   double tmp65_ = tmp58_+tmp64_;
   double tmp66_ = (tmp20_)*mLocGL_0_2;
   double tmp67_ = (tmp24_)*mLocGL_1_2;
   double tmp68_ = tmp66_+tmp67_;
   double tmp69_ = tmp25_*mLocGL_2_2;
   double tmp70_ = tmp68_+tmp69_;
   double tmp71_ = (tmp70_)*(tmp31_);
   double tmp72_ = tmp65_+tmp71_;
   double tmp73_ = tmp52_/(tmp72_);
   double tmp74_ = (tmp51_)*(tmp73_);
   double tmp75_ = mCompCoord[1];
   double tmp76_ = tmp74_+tmp75_;
   double tmp77_ = (tmp76_)-tmp75_;
   double tmp78_ = tmp16_*tmp12_;
   double tmp79_ = tmp18_*tmp9_;
   double tmp80_ = tmp78_+tmp79_;
   double tmp81_ = tmp3_*tmp12_;
   double tmp82_ = tmp22_*tmp9_;
   double tmp83_ = tmp81_+tmp82_;
   double tmp84_ = tmp2_*tmp9_;
   double tmp85_ = mCompCoord[2];
   double tmp86_ = (tmp80_)*mLocGL_0_0;
   double tmp87_ = (tmp83_)*mLocGL_1_0;
   double tmp88_ = tmp86_+tmp87_;
   double tmp89_ = tmp84_*mLocGL_2_0;
   double tmp90_ = tmp88_+tmp89_;
   double tmp91_ = (tmp90_)*(tmp15_);
   double tmp92_ = (tmp80_)*mLocGL_0_1;
   double tmp93_ = (tmp83_)*mLocGL_1_1;
   double tmp94_ = tmp92_+tmp93_;
   double tmp95_ = tmp84_*mLocGL_2_1;
   double tmp96_ = tmp94_+tmp95_;
   double tmp97_ = (tmp96_)*(tmp28_);
   double tmp98_ = tmp91_+tmp97_;
   double tmp99_ = (tmp80_)*mLocGL_0_2;
   double tmp100_ = (tmp83_)*mLocGL_1_2;
   double tmp101_ = tmp99_+tmp100_;
   double tmp102_ = tmp84_*mLocGL_2_2;
   double tmp103_ = tmp101_+tmp102_;
   double tmp104_ = (tmp103_)*(tmp31_);
   double tmp105_ = tmp98_+tmp104_;
   double tmp106_ = (tmp105_)*(tmp73_);
   double tmp107_ = tmp106_+tmp85_;
   double tmp108_ = (tmp107_)-tmp85_;
   double tmp109_ = (tmp77_)*(tmp77_);
   double tmp110_ = (tmp108_)*(tmp108_);
   double tmp111_ = tmp109_+tmp110_;
   double tmp112_ = (tmp111_)*(tmp111_);
   double tmp113_ = tmp112_*(tmp111_);
   double tmp114_ = tmp113_*(tmp111_);
   double tmp115_ = mCompCoord[3];
   double tmp116_ = tmp115_*(tmp111_);
   double tmp117_ = mCompCoord[4];
   double tmp118_ = tmp117_*tmp112_;
   double tmp119_ = tmp116_+tmp118_;
   double tmp120_ = mCompCoord[5];
   double tmp121_ = tmp120_*tmp113_;
   double tmp122_ = tmp119_+tmp121_;
   double tmp123_ = mCompCoord[6];
   double tmp124_ = tmp123_*tmp114_;
   double tmp125_ = tmp122_+tmp124_;
   double tmp126_ = mCompCoord[7];
   double tmp127_ = tmp114_*(tmp111_);
   double tmp128_ = tmp126_*tmp127_;
   double tmp129_ = tmp125_+tmp128_;
   double tmp130_ = ElSquare(tmp72_);
   double tmp131_ = (tmp72_)/tmp130_;
   double tmp132_ = (tmp131_)*(tmp51_);
   double tmp133_ = tmp132_*(tmp77_);
   double tmp134_ = (tmp131_)*(tmp105_);
   double tmp135_ = tmp134_*(tmp108_);
   double tmp136_ = tmp133_+tmp133_;
   double tmp137_ = tmp135_+tmp135_;
   double tmp138_ = tmp136_+tmp137_;
   double tmp139_ = (tmp138_)*(tmp111_);
   double tmp140_ = tmp139_+tmp139_;
   double tmp141_ = (tmp140_)*(tmp111_);
   double tmp142_ = (tmp138_)*tmp112_;
   double tmp143_ = tmp141_+tmp142_;
   double tmp144_ = (tmp143_)*(tmp111_);
   double tmp145_ = (tmp138_)*tmp113_;
   double tmp146_ = tmp144_+tmp145_;
   double tmp147_ = cos(mLocYIm);
   double tmp148_ = (tmp138_)*tmp115_;
   double tmp149_ = (tmp140_)*tmp117_;
   double tmp150_ = tmp148_+tmp149_;
   double tmp151_ = (tmp143_)*tmp120_;
   double tmp152_ = tmp150_+tmp151_;
   double tmp153_ = (tmp146_)*tmp123_;
   double tmp154_ = tmp152_+tmp153_;
   double tmp155_ = (tmp146_)*(tmp111_);
   double tmp156_ = (tmp138_)*tmp114_;
   double tmp157_ = tmp155_+tmp156_;
   double tmp158_ = (tmp157_)*tmp126_;
   double tmp159_ = tmp154_+tmp158_;
   double tmp160_ = sin(mLocYIm);
   double tmp161_ = -(1);
   double tmp162_ = tmp161_*tmp5_;
   double tmp163_ = tmp162_*tmp2_;
   double tmp164_ = -(tmp3_);
   double tmp165_ = tmp164_*tmp10_;
   double tmp166_ = tmp162_*tmp11_;
   double tmp167_ = tmp166_*tmp12_;
   double tmp168_ = tmp165_+tmp167_;
   double tmp169_ = tmp162_*tmp10_;
   double tmp170_ = tmp169_+tmp19_;
   double tmp171_ = tmp163_*mLocGL_0_0;
   double tmp172_ = tmp4_*mLocGL_1_0;
   double tmp173_ = tmp171_+tmp172_;
   double tmp174_ = (tmp173_)*(tmp15_);
   double tmp175_ = tmp163_*mLocGL_0_1;
   double tmp176_ = tmp4_*mLocGL_1_1;
   double tmp177_ = tmp175_+tmp176_;
   double tmp178_ = (tmp177_)*(tmp28_);
   double tmp179_ = tmp174_+tmp178_;
   double tmp180_ = tmp163_*mLocGL_0_2;
   double tmp181_ = tmp4_*mLocGL_1_2;
   double tmp182_ = tmp180_+tmp181_;
   double tmp183_ = (tmp182_)*(tmp31_);
   double tmp184_ = tmp179_+tmp183_;
   double tmp185_ = (tmp184_)*(tmp73_);
   double tmp186_ = (tmp168_)*mLocGL_0_0;
   double tmp187_ = (tmp170_)*mLocGL_1_0;
   double tmp188_ = tmp186_+tmp187_;
   double tmp189_ = (tmp188_)*(tmp15_);
   double tmp190_ = (tmp168_)*mLocGL_0_1;
   double tmp191_ = (tmp170_)*mLocGL_1_1;
   double tmp192_ = tmp190_+tmp191_;
   double tmp193_ = (tmp192_)*(tmp28_);
   double tmp194_ = tmp189_+tmp193_;
   double tmp195_ = (tmp168_)*mLocGL_0_2;
   double tmp196_ = (tmp170_)*mLocGL_1_2;
   double tmp197_ = tmp195_+tmp196_;
   double tmp198_ = (tmp197_)*(tmp31_);
   double tmp199_ = tmp194_+tmp198_;
   double tmp200_ = tmp52_*(tmp199_);
   double tmp201_ = -(tmp200_);
   double tmp202_ = tmp201_/tmp130_;
   double tmp203_ = (tmp202_)*(tmp51_);
   double tmp204_ = tmp185_+tmp203_;
   double tmp205_ = (tmp204_)*(tmp77_);
   double tmp206_ = tmp164_*tmp12_;
   double tmp207_ = tmp166_*tmp9_;
   double tmp208_ = tmp206_+tmp207_;
   double tmp209_ = tmp162_*tmp12_;
   double tmp210_ = tmp209_+tmp79_;
   double tmp211_ = (tmp208_)*mLocGL_0_0;
   double tmp212_ = (tmp210_)*mLocGL_1_0;
   double tmp213_ = tmp211_+tmp212_;
   double tmp214_ = (tmp213_)*(tmp15_);
   double tmp215_ = (tmp208_)*mLocGL_0_1;
   double tmp216_ = (tmp210_)*mLocGL_1_1;
   double tmp217_ = tmp215_+tmp216_;
   double tmp218_ = (tmp217_)*(tmp28_);
   double tmp219_ = tmp214_+tmp218_;
   double tmp220_ = (tmp208_)*mLocGL_0_2;
   double tmp221_ = (tmp210_)*mLocGL_1_2;
   double tmp222_ = tmp220_+tmp221_;
   double tmp223_ = (tmp222_)*(tmp31_);
   double tmp224_ = tmp219_+tmp223_;
   double tmp225_ = (tmp224_)*(tmp73_);
   double tmp226_ = (tmp202_)*(tmp105_);
   double tmp227_ = tmp225_+tmp226_;
   double tmp228_ = (tmp227_)*(tmp108_);
   double tmp229_ = tmp205_+tmp205_;
   double tmp230_ = tmp228_+tmp228_;
   double tmp231_ = tmp229_+tmp230_;
   double tmp232_ = (tmp231_)*(tmp111_);
   double tmp233_ = tmp232_+tmp232_;
   double tmp234_ = (tmp233_)*(tmp111_);
   double tmp235_ = (tmp231_)*tmp112_;
   double tmp236_ = tmp234_+tmp235_;
   double tmp237_ = (tmp236_)*(tmp111_);
   double tmp238_ = (tmp231_)*tmp113_;
   double tmp239_ = tmp237_+tmp238_;
   double tmp240_ = (tmp231_)*tmp115_;
   double tmp241_ = (tmp233_)*tmp117_;
   double tmp242_ = tmp240_+tmp241_;
   double tmp243_ = (tmp236_)*tmp120_;
   double tmp244_ = tmp242_+tmp243_;
   double tmp245_ = (tmp239_)*tmp123_;
   double tmp246_ = tmp244_+tmp245_;
   double tmp247_ = (tmp239_)*(tmp111_);
   double tmp248_ = (tmp231_)*tmp114_;
   double tmp249_ = tmp247_+tmp248_;
   double tmp250_ = (tmp249_)*tmp126_;
   double tmp251_ = tmp246_+tmp250_;
   double tmp252_ = tmp161_*tmp7_;
   double tmp253_ = tmp252_*tmp3_;
   double tmp254_ = tmp252_*tmp5_;
   double tmp255_ = -(tmp2_);
   double tmp256_ = tmp255_*tmp3_;
   double tmp257_ = tmp256_*tmp12_;
   double tmp258_ = tmp255_*tmp5_;
   double tmp259_ = tmp258_*tmp12_;
   double tmp260_ = tmp252_*tmp12_;
   double tmp261_ = tmp253_*mLocGL_0_0;
   double tmp262_ = tmp254_*mLocGL_1_0;
   double tmp263_ = tmp261_+tmp262_;
   double tmp264_ = tmp2_*mLocGL_2_0;
   double tmp265_ = tmp263_+tmp264_;
   double tmp266_ = (tmp265_)*(tmp15_);
   double tmp267_ = tmp253_*mLocGL_0_1;
   double tmp268_ = tmp254_*mLocGL_1_1;
   double tmp269_ = tmp267_+tmp268_;
   double tmp270_ = tmp2_*mLocGL_2_1;
   double tmp271_ = tmp269_+tmp270_;
   double tmp272_ = (tmp271_)*(tmp28_);
   double tmp273_ = tmp266_+tmp272_;
   double tmp274_ = tmp253_*mLocGL_0_2;
   double tmp275_ = tmp254_*mLocGL_1_2;
   double tmp276_ = tmp274_+tmp275_;
   double tmp277_ = tmp2_*mLocGL_2_2;
   double tmp278_ = tmp276_+tmp277_;
   double tmp279_ = (tmp278_)*(tmp31_);
   double tmp280_ = tmp273_+tmp279_;
   double tmp281_ = (tmp280_)*(tmp73_);
   double tmp282_ = tmp257_*mLocGL_0_0;
   double tmp283_ = tmp259_*mLocGL_1_0;
   double tmp284_ = tmp282_+tmp283_;
   double tmp285_ = tmp260_*mLocGL_2_0;
   double tmp286_ = tmp284_+tmp285_;
   double tmp287_ = (tmp286_)*(tmp15_);
   double tmp288_ = tmp257_*mLocGL_0_1;
   double tmp289_ = tmp259_*mLocGL_1_1;
   double tmp290_ = tmp288_+tmp289_;
   double tmp291_ = tmp260_*mLocGL_2_1;
   double tmp292_ = tmp290_+tmp291_;
   double tmp293_ = (tmp292_)*(tmp28_);
   double tmp294_ = tmp287_+tmp293_;
   double tmp295_ = tmp257_*mLocGL_0_2;
   double tmp296_ = tmp259_*mLocGL_1_2;
   double tmp297_ = tmp295_+tmp296_;
   double tmp298_ = tmp260_*mLocGL_2_2;
   double tmp299_ = tmp297_+tmp298_;
   double tmp300_ = (tmp299_)*(tmp31_);
   double tmp301_ = tmp294_+tmp300_;
   double tmp302_ = tmp52_*(tmp301_);
   double tmp303_ = -(tmp302_);
   double tmp304_ = tmp303_/tmp130_;
   double tmp305_ = (tmp304_)*(tmp51_);
   double tmp306_ = tmp281_+tmp305_;
   double tmp307_ = (tmp306_)*(tmp77_);
   double tmp308_ = tmp256_*tmp9_;
   double tmp309_ = tmp258_*tmp9_;
   double tmp310_ = tmp252_*tmp9_;
   double tmp311_ = tmp308_*mLocGL_0_0;
   double tmp312_ = tmp309_*mLocGL_1_0;
   double tmp313_ = tmp311_+tmp312_;
   double tmp314_ = tmp310_*mLocGL_2_0;
   double tmp315_ = tmp313_+tmp314_;
   double tmp316_ = (tmp315_)*(tmp15_);
   double tmp317_ = tmp308_*mLocGL_0_1;
   double tmp318_ = tmp309_*mLocGL_1_1;
   double tmp319_ = tmp317_+tmp318_;
   double tmp320_ = tmp310_*mLocGL_2_1;
   double tmp321_ = tmp319_+tmp320_;
   double tmp322_ = (tmp321_)*(tmp28_);
   double tmp323_ = tmp316_+tmp322_;
   double tmp324_ = tmp308_*mLocGL_0_2;
   double tmp325_ = tmp309_*mLocGL_1_2;
   double tmp326_ = tmp324_+tmp325_;
   double tmp327_ = tmp310_*mLocGL_2_2;
   double tmp328_ = tmp326_+tmp327_;
   double tmp329_ = (tmp328_)*(tmp31_);
   double tmp330_ = tmp323_+tmp329_;
   double tmp331_ = (tmp330_)*(tmp73_);
   double tmp332_ = (tmp304_)*(tmp105_);
   double tmp333_ = tmp331_+tmp332_;
   double tmp334_ = (tmp333_)*(tmp108_);
   double tmp335_ = tmp307_+tmp307_;
   double tmp336_ = tmp334_+tmp334_;
   double tmp337_ = tmp335_+tmp336_;
   double tmp338_ = (tmp337_)*(tmp111_);
   double tmp339_ = tmp338_+tmp338_;
   double tmp340_ = (tmp339_)*(tmp111_);
   double tmp341_ = (tmp337_)*tmp112_;
   double tmp342_ = tmp340_+tmp341_;
   double tmp343_ = (tmp342_)*(tmp111_);
   double tmp344_ = (tmp337_)*tmp113_;
   double tmp345_ = tmp343_+tmp344_;
   double tmp346_ = (tmp337_)*tmp115_;
   double tmp347_ = (tmp339_)*tmp117_;
   double tmp348_ = tmp346_+tmp347_;
   double tmp349_ = (tmp342_)*tmp120_;
   double tmp350_ = tmp348_+tmp349_;
   double tmp351_ = (tmp345_)*tmp123_;
   double tmp352_ = tmp350_+tmp351_;
   double tmp353_ = (tmp345_)*(tmp111_);
   double tmp354_ = (tmp337_)*tmp114_;
   double tmp355_ = tmp353_+tmp354_;
   double tmp356_ = (tmp355_)*tmp126_;
   double tmp357_ = tmp352_+tmp356_;
   double tmp358_ = -(tmp12_);
   double tmp359_ = tmp161_*tmp9_;
   double tmp360_ = tmp358_*tmp16_;
   double tmp361_ = tmp359_*tmp18_;
   double tmp362_ = tmp360_+tmp361_;
   double tmp363_ = tmp358_*tmp3_;
   double tmp364_ = tmp359_*tmp22_;
   double tmp365_ = tmp363_+tmp364_;
   double tmp366_ = tmp359_*tmp2_;
   double tmp367_ = (tmp362_)*mLocGL_0_0;
   double tmp368_ = (tmp365_)*mLocGL_1_0;
   double tmp369_ = tmp367_+tmp368_;
   double tmp370_ = tmp366_*mLocGL_2_0;
   double tmp371_ = tmp369_+tmp370_;
   double tmp372_ = (tmp371_)*(tmp15_);
   double tmp373_ = (tmp362_)*mLocGL_0_1;
   double tmp374_ = (tmp365_)*mLocGL_1_1;
   double tmp375_ = tmp373_+tmp374_;
   double tmp376_ = tmp366_*mLocGL_2_1;
   double tmp377_ = tmp375_+tmp376_;
   double tmp378_ = (tmp377_)*(tmp28_);
   double tmp379_ = tmp372_+tmp378_;
   double tmp380_ = (tmp362_)*mLocGL_0_2;
   double tmp381_ = (tmp365_)*mLocGL_1_2;
   double tmp382_ = tmp380_+tmp381_;
   double tmp383_ = tmp366_*mLocGL_2_2;
   double tmp384_ = tmp382_+tmp383_;
   double tmp385_ = (tmp384_)*(tmp31_);
   double tmp386_ = tmp379_+tmp385_;
   double tmp387_ = tmp52_*(tmp386_);
   double tmp388_ = -(tmp387_);
   double tmp389_ = tmp388_/tmp130_;
   double tmp390_ = (tmp389_)*(tmp51_);
   double tmp391_ = tmp390_*(tmp77_);
   double tmp392_ = tmp359_*tmp16_;
   double tmp393_ = tmp12_*tmp18_;
   double tmp394_ = tmp392_+tmp393_;
   double tmp395_ = tmp359_*tmp3_;
   double tmp396_ = tmp12_*tmp22_;
   double tmp397_ = tmp395_+tmp396_;
   double tmp398_ = tmp12_*tmp2_;
   double tmp399_ = (tmp394_)*mLocGL_0_0;
   double tmp400_ = (tmp397_)*mLocGL_1_0;
   double tmp401_ = tmp399_+tmp400_;
   double tmp402_ = tmp398_*mLocGL_2_0;
   double tmp403_ = tmp401_+tmp402_;
   double tmp404_ = (tmp403_)*(tmp15_);
   double tmp405_ = (tmp394_)*mLocGL_0_1;
   double tmp406_ = (tmp397_)*mLocGL_1_1;
   double tmp407_ = tmp405_+tmp406_;
   double tmp408_ = tmp398_*mLocGL_2_1;
   double tmp409_ = tmp407_+tmp408_;
   double tmp410_ = (tmp409_)*(tmp28_);
   double tmp411_ = tmp404_+tmp410_;
   double tmp412_ = (tmp394_)*mLocGL_0_2;
   double tmp413_ = (tmp397_)*mLocGL_1_2;
   double tmp414_ = tmp412_+tmp413_;
   double tmp415_ = tmp398_*mLocGL_2_2;
   double tmp416_ = tmp414_+tmp415_;
   double tmp417_ = (tmp416_)*(tmp31_);
   double tmp418_ = tmp411_+tmp417_;
   double tmp419_ = (tmp418_)*(tmp73_);
   double tmp420_ = (tmp389_)*(tmp105_);
   double tmp421_ = tmp419_+tmp420_;
   double tmp422_ = (tmp421_)*(tmp108_);
   double tmp423_ = tmp391_+tmp391_;
   double tmp424_ = tmp422_+tmp422_;
   double tmp425_ = tmp423_+tmp424_;
   double tmp426_ = (tmp425_)*(tmp111_);
   double tmp427_ = tmp426_+tmp426_;
   double tmp428_ = (tmp427_)*(tmp111_);
   double tmp429_ = (tmp425_)*tmp112_;
   double tmp430_ = tmp428_+tmp429_;
   double tmp431_ = (tmp430_)*(tmp111_);
   double tmp432_ = (tmp425_)*tmp113_;
   double tmp433_ = tmp431_+tmp432_;
   double tmp434_ = (tmp425_)*tmp115_;
   double tmp435_ = (tmp427_)*tmp117_;
   double tmp436_ = tmp434_+tmp435_;
   double tmp437_ = (tmp430_)*tmp120_;
   double tmp438_ = tmp436_+tmp437_;
   double tmp439_ = (tmp433_)*tmp123_;
   double tmp440_ = tmp438_+tmp439_;
   double tmp441_ = (tmp433_)*(tmp111_);
   double tmp442_ = (tmp425_)*tmp114_;
   double tmp443_ = tmp441_+tmp442_;
   double tmp444_ = (tmp443_)*tmp126_;
   double tmp445_ = tmp440_+tmp444_;
   double tmp446_ = tmp161_*(tmp36_);
   double tmp447_ = tmp446_*(tmp73_);
   double tmp448_ = tmp161_*(tmp57_);
   double tmp449_ = tmp52_*tmp448_;
   double tmp450_ = -(tmp449_);
   double tmp451_ = tmp450_/tmp130_;
   double tmp452_ = (tmp451_)*(tmp51_);
   double tmp453_ = tmp447_+tmp452_;
   double tmp454_ = (tmp453_)*(tmp77_);
   double tmp455_ = tmp161_*(tmp90_);
   double tmp456_ = tmp455_*(tmp73_);
   double tmp457_ = (tmp451_)*(tmp105_);
   double tmp458_ = tmp456_+tmp457_;
   double tmp459_ = (tmp458_)*(tmp108_);
   double tmp460_ = tmp454_+tmp454_;
   double tmp461_ = tmp459_+tmp459_;
   double tmp462_ = tmp460_+tmp461_;
   double tmp463_ = (tmp462_)*(tmp111_);
   double tmp464_ = tmp463_+tmp463_;
   double tmp465_ = (tmp464_)*(tmp111_);
   double tmp466_ = (tmp462_)*tmp112_;
   double tmp467_ = tmp465_+tmp466_;
   double tmp468_ = (tmp467_)*(tmp111_);
   double tmp469_ = (tmp462_)*tmp113_;
   double tmp470_ = tmp468_+tmp469_;
   double tmp471_ = (tmp462_)*tmp115_;
   double tmp472_ = (tmp464_)*tmp117_;
   double tmp473_ = tmp471_+tmp472_;
   double tmp474_ = (tmp467_)*tmp120_;
   double tmp475_ = tmp473_+tmp474_;
   double tmp476_ = (tmp470_)*tmp123_;
   double tmp477_ = tmp475_+tmp476_;
   double tmp478_ = (tmp470_)*(tmp111_);
   double tmp479_ = (tmp462_)*tmp114_;
   double tmp480_ = tmp478_+tmp479_;
   double tmp481_ = (tmp480_)*tmp126_;
   double tmp482_ = tmp477_+tmp481_;
   double tmp483_ = tmp161_*(tmp42_);
   double tmp484_ = tmp483_*(tmp73_);
   double tmp485_ = tmp161_*(tmp63_);
   double tmp486_ = tmp52_*tmp485_;
   double tmp487_ = -(tmp486_);
   double tmp488_ = tmp487_/tmp130_;
   double tmp489_ = (tmp488_)*(tmp51_);
   double tmp490_ = tmp484_+tmp489_;
   double tmp491_ = (tmp490_)*(tmp77_);
   double tmp492_ = tmp161_*(tmp96_);
   double tmp493_ = tmp492_*(tmp73_);
   double tmp494_ = (tmp488_)*(tmp105_);
   double tmp495_ = tmp493_+tmp494_;
   double tmp496_ = (tmp495_)*(tmp108_);
   double tmp497_ = tmp491_+tmp491_;
   double tmp498_ = tmp496_+tmp496_;
   double tmp499_ = tmp497_+tmp498_;
   double tmp500_ = (tmp499_)*(tmp111_);
   double tmp501_ = tmp500_+tmp500_;
   double tmp502_ = (tmp501_)*(tmp111_);
   double tmp503_ = (tmp499_)*tmp112_;
   double tmp504_ = tmp502_+tmp503_;
   double tmp505_ = (tmp504_)*(tmp111_);
   double tmp506_ = (tmp499_)*tmp113_;
   double tmp507_ = tmp505_+tmp506_;
   double tmp508_ = (tmp499_)*tmp115_;
   double tmp509_ = (tmp501_)*tmp117_;
   double tmp510_ = tmp508_+tmp509_;
   double tmp511_ = (tmp504_)*tmp120_;
   double tmp512_ = tmp510_+tmp511_;
   double tmp513_ = (tmp507_)*tmp123_;
   double tmp514_ = tmp512_+tmp513_;
   double tmp515_ = (tmp507_)*(tmp111_);
   double tmp516_ = (tmp499_)*tmp114_;
   double tmp517_ = tmp515_+tmp516_;
   double tmp518_ = (tmp517_)*tmp126_;
   double tmp519_ = tmp514_+tmp518_;
   double tmp520_ = tmp161_*(tmp49_);
   double tmp521_ = tmp520_*(tmp73_);
   double tmp522_ = tmp161_*(tmp70_);
   double tmp523_ = tmp52_*tmp522_;
   double tmp524_ = -(tmp523_);
   double tmp525_ = tmp524_/tmp130_;
   double tmp526_ = (tmp525_)*(tmp51_);
   double tmp527_ = tmp521_+tmp526_;
   double tmp528_ = (tmp527_)*(tmp77_);
   double tmp529_ = tmp161_*(tmp103_);
   double tmp530_ = tmp529_*(tmp73_);
   double tmp531_ = (tmp525_)*(tmp105_);
   double tmp532_ = tmp530_+tmp531_;
   double tmp533_ = (tmp532_)*(tmp108_);
   double tmp534_ = tmp528_+tmp528_;
   double tmp535_ = tmp533_+tmp533_;
   double tmp536_ = tmp534_+tmp535_;
   double tmp537_ = (tmp536_)*(tmp111_);
   double tmp538_ = tmp537_+tmp537_;
   double tmp539_ = (tmp538_)*(tmp111_);
   double tmp540_ = (tmp536_)*tmp112_;
   double tmp541_ = tmp539_+tmp540_;
   double tmp542_ = (tmp541_)*(tmp111_);
   double tmp543_ = (tmp536_)*tmp113_;
   double tmp544_ = tmp542_+tmp543_;
   double tmp545_ = (tmp536_)*tmp115_;
   double tmp546_ = (tmp538_)*tmp117_;
   double tmp547_ = tmp545_+tmp546_;
   double tmp548_ = (tmp541_)*tmp120_;
   double tmp549_ = tmp547_+tmp548_;
   double tmp550_ = (tmp544_)*tmp123_;
   double tmp551_ = tmp549_+tmp550_;
   double tmp552_ = (tmp544_)*(tmp111_);
   double tmp553_ = (tmp536_)*tmp114_;
   double tmp554_ = tmp552_+tmp553_;
   double tmp555_ = (tmp554_)*tmp126_;
   double tmp556_ = tmp551_+tmp555_;
   double tmp557_ = (tmp36_)*(tmp73_);
   double tmp558_ = tmp52_*(tmp57_);
   double tmp559_ = -(tmp558_);
   double tmp560_ = tmp559_/tmp130_;
   double tmp561_ = (tmp560_)*(tmp51_);
   double tmp562_ = tmp557_+tmp561_;
   double tmp563_ = (tmp562_)*(tmp77_);
   double tmp564_ = (tmp90_)*(tmp73_);
   double tmp565_ = (tmp560_)*(tmp105_);
   double tmp566_ = tmp564_+tmp565_;
   double tmp567_ = (tmp566_)*(tmp108_);
   double tmp568_ = tmp563_+tmp563_;
   double tmp569_ = tmp567_+tmp567_;
   double tmp570_ = tmp568_+tmp569_;
   double tmp571_ = (tmp570_)*(tmp111_);
   double tmp572_ = tmp571_+tmp571_;
   double tmp573_ = (tmp572_)*(tmp111_);
   double tmp574_ = (tmp570_)*tmp112_;
   double tmp575_ = tmp573_+tmp574_;
   double tmp576_ = (tmp575_)*(tmp111_);
   double tmp577_ = (tmp570_)*tmp113_;
   double tmp578_ = tmp576_+tmp577_;
   double tmp579_ = (tmp570_)*tmp115_;
   double tmp580_ = (tmp572_)*tmp117_;
   double tmp581_ = tmp579_+tmp580_;
   double tmp582_ = (tmp575_)*tmp120_;
   double tmp583_ = tmp581_+tmp582_;
   double tmp584_ = (tmp578_)*tmp123_;
   double tmp585_ = tmp583_+tmp584_;
   double tmp586_ = (tmp578_)*(tmp111_);
   double tmp587_ = (tmp570_)*tmp114_;
   double tmp588_ = tmp586_+tmp587_;
   double tmp589_ = (tmp588_)*tmp126_;
   double tmp590_ = tmp585_+tmp589_;
   double tmp591_ = (tmp42_)*(tmp73_);
   double tmp592_ = tmp52_*(tmp63_);
   double tmp593_ = -(tmp592_);
   double tmp594_ = tmp593_/tmp130_;
   double tmp595_ = (tmp594_)*(tmp51_);
   double tmp596_ = tmp591_+tmp595_;
   double tmp597_ = (tmp596_)*(tmp77_);
   double tmp598_ = (tmp96_)*(tmp73_);
   double tmp599_ = (tmp594_)*(tmp105_);
   double tmp600_ = tmp598_+tmp599_;
   double tmp601_ = (tmp600_)*(tmp108_);
   double tmp602_ = tmp597_+tmp597_;
   double tmp603_ = tmp601_+tmp601_;
   double tmp604_ = tmp602_+tmp603_;
   double tmp605_ = (tmp604_)*(tmp111_);
   double tmp606_ = tmp605_+tmp605_;
   double tmp607_ = (tmp606_)*(tmp111_);
   double tmp608_ = (tmp604_)*tmp112_;
   double tmp609_ = tmp607_+tmp608_;
   double tmp610_ = (tmp609_)*(tmp111_);
   double tmp611_ = (tmp604_)*tmp113_;
   double tmp612_ = tmp610_+tmp611_;
   double tmp613_ = (tmp604_)*tmp115_;
   double tmp614_ = (tmp606_)*tmp117_;
   double tmp615_ = tmp613_+tmp614_;
   double tmp616_ = (tmp609_)*tmp120_;
   double tmp617_ = tmp615_+tmp616_;
   double tmp618_ = (tmp612_)*tmp123_;
   double tmp619_ = tmp617_+tmp618_;
   double tmp620_ = (tmp612_)*(tmp111_);
   double tmp621_ = (tmp604_)*tmp114_;
   double tmp622_ = tmp620_+tmp621_;
   double tmp623_ = (tmp622_)*tmp126_;
   double tmp624_ = tmp619_+tmp623_;
   double tmp625_ = (tmp49_)*(tmp73_);
   double tmp626_ = tmp52_*(tmp70_);
   double tmp627_ = -(tmp626_);
   double tmp628_ = tmp627_/tmp130_;
   double tmp629_ = (tmp628_)*(tmp51_);
   double tmp630_ = tmp625_+tmp629_;
   double tmp631_ = (tmp630_)*(tmp77_);
   double tmp632_ = (tmp103_)*(tmp73_);
   double tmp633_ = (tmp628_)*(tmp105_);
   double tmp634_ = tmp632_+tmp633_;
   double tmp635_ = (tmp634_)*(tmp108_);
   double tmp636_ = tmp631_+tmp631_;
   double tmp637_ = tmp635_+tmp635_;
   double tmp638_ = tmp636_+tmp637_;
   double tmp639_ = (tmp638_)*(tmp111_);
   double tmp640_ = tmp639_+tmp639_;
   double tmp641_ = (tmp640_)*(tmp111_);
   double tmp642_ = (tmp638_)*tmp112_;
   double tmp643_ = tmp641_+tmp642_;
   double tmp644_ = (tmp643_)*(tmp111_);
   double tmp645_ = (tmp638_)*tmp113_;
   double tmp646_ = tmp644_+tmp645_;
   double tmp647_ = (tmp638_)*tmp115_;
   double tmp648_ = (tmp640_)*tmp117_;
   double tmp649_ = tmp647_+tmp648_;
   double tmp650_ = (tmp643_)*tmp120_;
   double tmp651_ = tmp649_+tmp650_;
   double tmp652_ = (tmp646_)*tmp123_;
   double tmp653_ = tmp651_+tmp652_;
   double tmp654_ = (tmp646_)*(tmp111_);
   double tmp655_ = (tmp638_)*tmp114_;
   double tmp656_ = tmp654_+tmp655_;
   double tmp657_ = (tmp656_)*tmp126_;
   double tmp658_ = tmp653_+tmp657_;

  mVal[0] = (mLocXIm-tmp147_*(tmp76_+(tmp77_)*(tmp129_))-tmp160_*(tmp107_+(tmp108_)*(tmp129_)))*mLocScNorm;

  mCompDer[0][0] = (-((tmp132_+tmp132_*(tmp129_)+(tmp159_)*(tmp77_))*tmp147_)-(tmp134_+tmp134_*(tmp129_)+(tmp159_)*(tmp108_))*tmp160_)*mLocScNorm;
  mCompDer[0][1] = -(tmp147_)*mLocScNorm;
  mCompDer[0][2] = -(tmp160_)*mLocScNorm;
  mCompDer[0][3] = (-((tmp111_)*(tmp77_)*tmp147_)-(tmp111_)*(tmp108_)*tmp160_)*mLocScNorm;
  mCompDer[0][4] = (-(tmp112_*(tmp77_)*tmp147_)-tmp112_*(tmp108_)*tmp160_)*mLocScNorm;
  mCompDer[0][5] = (-(tmp113_*(tmp77_)*tmp147_)-tmp113_*(tmp108_)*tmp160_)*mLocScNorm;
  mCompDer[0][6] = (-(tmp114_*(tmp77_)*tmp147_)-tmp114_*(tmp108_)*tmp160_)*mLocScNorm;
  mCompDer[0][7] = (-(tmp127_*(tmp77_)*tmp147_)-tmp127_*(tmp108_)*tmp160_)*mLocScNorm;
  mCompDer[0][8] = (-((tmp204_+(tmp204_)*(tmp129_)+(tmp251_)*(tmp77_))*tmp147_)-(tmp227_+(tmp227_)*(tmp129_)+(tmp251_)*(tmp108_))*tmp160_)*mLocScNorm;
  mCompDer[0][9] = (-((tmp306_+(tmp306_)*(tmp129_)+(tmp357_)*(tmp77_))*tmp147_)-(tmp333_+(tmp333_)*(tmp129_)+(tmp357_)*(tmp108_))*tmp160_)*mLocScNorm;
  mCompDer[0][10] = (-((tmp390_+tmp390_*(tmp129_)+(tmp445_)*(tmp77_))*tmp147_)-(tmp421_+(tmp421_)*(tmp129_)+(tmp445_)*(tmp108_))*tmp160_)*mLocScNorm;
  mCompDer[0][11] = (-((tmp453_+(tmp453_)*(tmp129_)+(tmp482_)*(tmp77_))*tmp147_)-(tmp458_+(tmp458_)*(tmp129_)+(tmp482_)*(tmp108_))*tmp160_)*mLocScNorm;
  mCompDer[0][12] = (-((tmp490_+(tmp490_)*(tmp129_)+(tmp519_)*(tmp77_))*tmp147_)-(tmp495_+(tmp495_)*(tmp129_)+(tmp519_)*(tmp108_))*tmp160_)*mLocScNorm;
  mCompDer[0][13] = (-((tmp527_+(tmp527_)*(tmp129_)+(tmp556_)*(tmp77_))*tmp147_)-(tmp532_+(tmp532_)*(tmp129_)+(tmp556_)*(tmp108_))*tmp160_)*mLocScNorm;
  mCompDer[0][14] = (-((tmp562_+(tmp562_)*(tmp129_)+(tmp590_)*(tmp77_))*tmp147_)-(tmp566_+(tmp566_)*(tmp129_)+(tmp590_)*(tmp108_))*tmp160_)*mLocScNorm;
  mCompDer[0][15] = (-((tmp596_+(tmp596_)*(tmp129_)+(tmp624_)*(tmp77_))*tmp147_)-(tmp600_+(tmp600_)*(tmp129_)+(tmp624_)*(tmp108_))*tmp160_)*mLocScNorm;
  mCompDer[0][16] = (-((tmp630_+(tmp630_)*(tmp129_)+(tmp658_)*(tmp77_))*tmp147_)-(tmp634_+(tmp634_)*(tmp129_)+(tmp658_)*(tmp108_))*tmp160_)*mLocScNorm;
}


void cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs Has no Der Sec");
}

void cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::SetGL_0_0(double aVal){ mLocGL_0_0 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::SetGL_0_1(double aVal){ mLocGL_0_1 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::SetGL_0_2(double aVal){ mLocGL_0_2 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::SetGL_1_0(double aVal){ mLocGL_1_0 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::SetGL_1_1(double aVal){ mLocGL_1_1 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::SetGL_1_2(double aVal){ mLocGL_1_2 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::SetGL_2_0(double aVal){ mLocGL_2_0 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::SetGL_2_1(double aVal){ mLocGL_2_1 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::SetGL_2_2(double aVal){ mLocGL_2_2 = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::SetScNorm(double aVal){ mLocScNorm = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::SetYIm(double aVal){ mLocYIm = aVal;}



double * cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "GL_0_0") return & mLocGL_0_0;
   if (aName == "GL_0_1") return & mLocGL_0_1;
   if (aName == "GL_0_2") return & mLocGL_0_2;
   if (aName == "GL_1_0") return & mLocGL_1_0;
   if (aName == "GL_1_1") return & mLocGL_1_1;
   if (aName == "GL_1_2") return & mLocGL_1_2;
   if (aName == "GL_2_0") return & mLocGL_2_0;
   if (aName == "GL_2_1") return & mLocGL_2_1;
   if (aName == "GL_2_2") return & mLocGL_2_2;
   if (aName == "ScNorm") return & mLocScNorm;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "YIm") return & mLocYIm;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::mTheAuto("cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs",cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::Alloc);


cElCompiledFonc *  cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs::Alloc()
{  return new cEqAppui_Droite_GL__PTInc_M2CDRad_PPaEqPPs();
}


