// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_Y_C2MPolyn4.h"


cEqAppui_Y_C2MPolyn4::cEqAppui_Y_C2MPolyn4():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr",0,27));
   AddIntRef (cIncIntervale("Orient",27,33));
   Close(false);
}



void cEqAppui_Y_C2MPolyn4::ComputeVal()
{
   double tmp0_ = mCompCoord[27];
   double tmp1_ = mCompCoord[29];
   double tmp2_ = cos(tmp0_);
   double tmp3_ = cos(tmp1_);
   double tmp4_ = sin(tmp0_);
   double tmp5_ = mCompCoord[28];
   double tmp6_ = sin(tmp5_);
   double tmp7_ = -(tmp6_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = -(tmp4_);
   double tmp10_ = tmp2_*tmp7_;
   double tmp11_ = mCompCoord[30];
   double tmp12_ = mLocXTer-tmp11_;
   double tmp13_ = -(tmp8_);
   double tmp14_ = tmp4_*tmp7_;
   double tmp15_ = mCompCoord[31];
   double tmp16_ = mLocYTer-tmp15_;
   double tmp17_ = cos(tmp5_);
   double tmp18_ = mCompCoord[32];
   double tmp19_ = mLocZTer-tmp18_;
   double tmp20_ = mLocXIm/mLocPolyn4_State_0_0;
   double tmp21_ = mLocYIm/mLocPolyn4_State_0_0;
   double tmp22_ = (tmp20_)*(tmp20_);
   double tmp23_ = (tmp21_)*(tmp21_);
   double tmp24_ = tmp22_*(tmp20_);
   double tmp25_ = (tmp21_)*(tmp20_);
   double tmp26_ = tmp25_*(tmp20_);
   double tmp27_ = tmp23_*(tmp20_);
   double tmp28_ = (tmp21_)*tmp23_;

  mVal[0] = (mCompCoord[2]+mCompCoord[0]*(((tmp9_*tmp3_+tmp10_*tmp8_)*(tmp12_)+(tmp2_*tmp3_+tmp14_*tmp8_)*(tmp16_)+tmp17_*tmp8_*(tmp19_))/((tmp9_*tmp13_+tmp10_*tmp3_)*(tmp12_)+(tmp2_*tmp13_+tmp14_*tmp3_)*(tmp16_)+tmp17_*tmp3_*(tmp19_))))-((((1-mCompCoord[3])*(tmp21_)+mCompCoord[4]*(tmp20_)+mCompCoord[5]*(tmp20_)*(tmp21_))-mCompCoord[6]*2*tmp23_+mCompCoord[8]*tmp22_)*mLocPolyn4_State_0_0+(mCompCoord[13]*tmp24_+mCompCoord[14]*tmp26_+mCompCoord[15]*tmp27_+mCompCoord[16]*tmp28_+mCompCoord[22]*tmp24_*(tmp20_)+mCompCoord[23]*tmp26_*(tmp20_)+mCompCoord[24]*tmp27_*(tmp20_)+mCompCoord[25]*tmp28_*(tmp20_)+mCompCoord[26]*(tmp21_)*tmp28_)*mLocPolyn4_State_0_0);

}


void cEqAppui_Y_C2MPolyn4::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[27];
   double tmp1_ = mCompCoord[29];
   double tmp2_ = cos(tmp0_);
   double tmp3_ = cos(tmp1_);
   double tmp4_ = sin(tmp0_);
   double tmp5_ = mCompCoord[28];
   double tmp6_ = sin(tmp5_);
   double tmp7_ = -(tmp6_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = -(tmp4_);
   double tmp10_ = tmp2_*tmp7_;
   double tmp11_ = mCompCoord[30];
   double tmp12_ = mLocXTer-tmp11_;
   double tmp13_ = -(tmp8_);
   double tmp14_ = tmp4_*tmp7_;
   double tmp15_ = mCompCoord[31];
   double tmp16_ = mLocYTer-tmp15_;
   double tmp17_ = cos(tmp5_);
   double tmp18_ = mCompCoord[32];
   double tmp19_ = mLocZTer-tmp18_;
   double tmp20_ = mLocXIm/mLocPolyn4_State_0_0;
   double tmp21_ = mLocYIm/mLocPolyn4_State_0_0;
   double tmp22_ = (tmp20_)*(tmp20_);
   double tmp23_ = (tmp21_)*(tmp21_);
   double tmp24_ = tmp22_*(tmp20_);
   double tmp25_ = (tmp21_)*(tmp20_);
   double tmp26_ = tmp25_*(tmp20_);
   double tmp27_ = tmp23_*(tmp20_);
   double tmp28_ = (tmp21_)*tmp23_;
   double tmp29_ = tmp9_*tmp3_;
   double tmp30_ = tmp10_*tmp8_;
   double tmp31_ = tmp29_+tmp30_;
   double tmp32_ = (tmp31_)*(tmp12_);
   double tmp33_ = tmp2_*tmp3_;
   double tmp34_ = tmp14_*tmp8_;
   double tmp35_ = tmp33_+tmp34_;
   double tmp36_ = (tmp35_)*(tmp16_);
   double tmp37_ = tmp32_+tmp36_;
   double tmp38_ = tmp17_*tmp8_;
   double tmp39_ = tmp38_*(tmp19_);
   double tmp40_ = tmp37_+tmp39_;
   double tmp41_ = tmp9_*tmp13_;
   double tmp42_ = tmp10_*tmp3_;
   double tmp43_ = tmp41_+tmp42_;
   double tmp44_ = (tmp43_)*(tmp12_);
   double tmp45_ = tmp2_*tmp13_;
   double tmp46_ = tmp14_*tmp3_;
   double tmp47_ = tmp45_+tmp46_;
   double tmp48_ = (tmp47_)*(tmp16_);
   double tmp49_ = tmp44_+tmp48_;
   double tmp50_ = tmp17_*tmp3_;
   double tmp51_ = tmp50_*(tmp19_);
   double tmp52_ = tmp49_+tmp51_;
   double tmp53_ = (tmp40_)/(tmp52_);
   double tmp54_ = (tmp20_)*(tmp21_);
   double tmp55_ = tmp24_*(tmp20_);
   double tmp56_ = tmp26_*(tmp20_);
   double tmp57_ = tmp27_*(tmp20_);
   double tmp58_ = tmp28_*(tmp20_);
   double tmp59_ = (tmp21_)*tmp28_;
   double tmp60_ = -(1);
   double tmp61_ = tmp60_*tmp4_;
   double tmp62_ = -(tmp2_);
   double tmp63_ = tmp61_*tmp7_;
   double tmp64_ = mCompCoord[0];
   double tmp65_ = -(tmp17_);
   double tmp66_ = tmp65_*tmp2_;
   double tmp67_ = tmp65_*tmp4_;
   double tmp68_ = tmp60_*tmp6_;
   double tmp69_ = ElSquare(tmp52_);
   double tmp70_ = tmp60_*tmp8_;
   double tmp71_ = -(tmp3_);

  mVal[0] = (mCompCoord[2]+tmp64_*(tmp53_))-((((1-mCompCoord[3])*(tmp21_)+mCompCoord[4]*(tmp20_)+mCompCoord[5]*tmp54_)-mCompCoord[6]*2*tmp23_+mCompCoord[8]*tmp22_)*mLocPolyn4_State_0_0+(mCompCoord[13]*tmp24_+mCompCoord[14]*tmp26_+mCompCoord[15]*tmp27_+mCompCoord[16]*tmp28_+mCompCoord[22]*tmp55_+mCompCoord[23]*tmp56_+mCompCoord[24]*tmp57_+mCompCoord[25]*tmp58_+mCompCoord[26]*tmp59_)*mLocPolyn4_State_0_0);

  mCompDer[0][0] = tmp53_;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = 1;
  mCompDer[0][3] = -(tmp60_*(tmp21_)*mLocPolyn4_State_0_0);
  mCompDer[0][4] = -((tmp20_)*mLocPolyn4_State_0_0);
  mCompDer[0][5] = -(tmp54_*mLocPolyn4_State_0_0);
  mCompDer[0][6] = -(-(2*tmp23_)*mLocPolyn4_State_0_0);
  mCompDer[0][7] = 0;
  mCompDer[0][8] = -(tmp22_*mLocPolyn4_State_0_0);
  mCompDer[0][9] = 0;
  mCompDer[0][10] = 0;
  mCompDer[0][11] = 0;
  mCompDer[0][12] = 0;
  mCompDer[0][13] = -(tmp24_*mLocPolyn4_State_0_0);
  mCompDer[0][14] = -(tmp26_*mLocPolyn4_State_0_0);
  mCompDer[0][15] = -(tmp27_*mLocPolyn4_State_0_0);
  mCompDer[0][16] = -(tmp28_*mLocPolyn4_State_0_0);
  mCompDer[0][17] = 0;
  mCompDer[0][18] = 0;
  mCompDer[0][19] = 0;
  mCompDer[0][20] = 0;
  mCompDer[0][21] = 0;
  mCompDer[0][22] = -(tmp55_*mLocPolyn4_State_0_0);
  mCompDer[0][23] = -(tmp56_*mLocPolyn4_State_0_0);
  mCompDer[0][24] = -(tmp57_*mLocPolyn4_State_0_0);
  mCompDer[0][25] = -(tmp58_*mLocPolyn4_State_0_0);
  mCompDer[0][26] = -(tmp59_*mLocPolyn4_State_0_0);
  mCompDer[0][27] = ((((tmp62_*tmp3_+tmp63_*tmp8_)*(tmp12_)+(tmp61_*tmp3_+tmp30_)*(tmp16_))*(tmp52_)-(tmp40_)*((tmp62_*tmp13_+tmp63_*tmp3_)*(tmp12_)+(tmp61_*tmp13_+tmp42_)*(tmp16_)))/tmp69_)*tmp64_;
  mCompDer[0][28] = (((tmp66_*tmp8_*(tmp12_)+tmp67_*tmp8_*(tmp16_)+tmp68_*tmp8_*(tmp19_))*(tmp52_)-(tmp40_)*(tmp66_*tmp3_*(tmp12_)+tmp67_*tmp3_*(tmp16_)+tmp68_*tmp3_*(tmp19_)))/tmp69_)*tmp64_;
  mCompDer[0][29] = ((((tmp70_*tmp9_+tmp3_*tmp10_)*(tmp12_)+(tmp70_*tmp2_+tmp3_*tmp14_)*(tmp16_)+tmp3_*tmp17_*(tmp19_))*(tmp52_)-(tmp40_)*((tmp71_*tmp9_+tmp70_*tmp10_)*(tmp12_)+(tmp71_*tmp2_+tmp70_*tmp14_)*(tmp16_)+tmp70_*tmp17_*(tmp19_)))/tmp69_)*tmp64_;
  mCompDer[0][30] = ((tmp60_*(tmp31_)*(tmp52_)-(tmp40_)*tmp60_*(tmp43_))/tmp69_)*tmp64_;
  mCompDer[0][31] = ((tmp60_*(tmp35_)*(tmp52_)-(tmp40_)*tmp60_*(tmp47_))/tmp69_)*tmp64_;
  mCompDer[0][32] = ((tmp60_*tmp38_*(tmp52_)-(tmp40_)*tmp60_*tmp50_)/tmp69_)*tmp64_;
}


void cEqAppui_Y_C2MPolyn4::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_Y_C2MPolyn4 Has no Der Sec");
}

void cEqAppui_Y_C2MPolyn4::SetPolyn4_State_0_0(double aVal){ mLocPolyn4_State_0_0 = aVal;}
void cEqAppui_Y_C2MPolyn4::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_Y_C2MPolyn4::SetXTer(double aVal){ mLocXTer = aVal;}
void cEqAppui_Y_C2MPolyn4::SetYIm(double aVal){ mLocYIm = aVal;}
void cEqAppui_Y_C2MPolyn4::SetYTer(double aVal){ mLocYTer = aVal;}
void cEqAppui_Y_C2MPolyn4::SetZTer(double aVal){ mLocZTer = aVal;}



double * cEqAppui_Y_C2MPolyn4::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Polyn4_State_0_0") return & mLocPolyn4_State_0_0;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "XTer") return & mLocXTer;
   if (aName == "YIm") return & mLocYIm;
   if (aName == "YTer") return & mLocYTer;
   if (aName == "ZTer") return & mLocZTer;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_Y_C2MPolyn4::mTheAuto("cEqAppui_Y_C2MPolyn4",cEqAppui_Y_C2MPolyn4::Alloc);


cElCompiledFonc *  cEqAppui_Y_C2MPolyn4::Alloc()
{  return new cEqAppui_Y_C2MPolyn4();
}

