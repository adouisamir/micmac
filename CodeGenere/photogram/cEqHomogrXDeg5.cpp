// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqHomogrXDeg5.h"


cEqHomogrXDeg5::cEqHomogrXDeg5():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("DRF",16,23));
   AddIntRef (cIncIntervale("Hom1",0,8));
   AddIntRef (cIncIntervale("Hom2",8,16));
   Close(false);
}



void cEqHomogrXDeg5::ComputeVal()
{
   double tmp0_ = mCompCoord[16];
   double tmp1_ = mLocXL1-tmp0_;
   double tmp2_ = mCompCoord[17];
   double tmp3_ = mLocYL1-tmp2_;
   double tmp4_ = (tmp1_)*(tmp1_);
   double tmp5_ = (tmp3_)*(tmp3_);
   double tmp6_ = tmp4_+tmp5_;
   double tmp7_ = (tmp6_)*(tmp6_);
   double tmp8_ = tmp7_*(tmp6_);
   double tmp9_ = tmp8_*(tmp6_);
   double tmp10_ = mCompCoord[18];
   double tmp11_ = (tmp6_)*tmp10_;
   double tmp12_ = 1+tmp11_;
   double tmp13_ = mCompCoord[19];
   double tmp14_ = tmp7_*tmp13_;
   double tmp15_ = tmp12_+tmp14_;
   double tmp16_ = mCompCoord[20];
   double tmp17_ = tmp8_*tmp16_;
   double tmp18_ = tmp15_+tmp17_;
   double tmp19_ = mCompCoord[21];
   double tmp20_ = tmp9_*tmp19_;
   double tmp21_ = tmp18_+tmp20_;
   double tmp22_ = tmp9_*(tmp6_);
   double tmp23_ = mCompCoord[22];
   double tmp24_ = tmp22_*tmp23_;
   double tmp25_ = tmp21_+tmp24_;
   double tmp26_ = (tmp1_)*(tmp25_);
   double tmp27_ = tmp0_+tmp26_;
   double tmp28_ = (tmp3_)*(tmp25_);
   double tmp29_ = tmp2_+tmp28_;
   double tmp30_ = mLocXL2-tmp0_;
   double tmp31_ = mLocYL2-tmp2_;
   double tmp32_ = (tmp30_)*(tmp30_);
   double tmp33_ = (tmp31_)*(tmp31_);
   double tmp34_ = tmp32_+tmp33_;
   double tmp35_ = (tmp34_)*(tmp34_);
   double tmp36_ = tmp35_*(tmp34_);
   double tmp37_ = tmp36_*(tmp34_);
   double tmp38_ = (tmp34_)*tmp10_;
   double tmp39_ = 1+tmp38_;
   double tmp40_ = tmp35_*tmp13_;
   double tmp41_ = tmp39_+tmp40_;
   double tmp42_ = tmp36_*tmp16_;
   double tmp43_ = tmp41_+tmp42_;
   double tmp44_ = tmp37_*tmp19_;
   double tmp45_ = tmp43_+tmp44_;
   double tmp46_ = tmp37_*(tmp34_);
   double tmp47_ = tmp46_*tmp23_;
   double tmp48_ = tmp45_+tmp47_;
   double tmp49_ = (tmp30_)*(tmp48_);
   double tmp50_ = tmp0_+tmp49_;
   double tmp51_ = (tmp31_)*(tmp48_);
   double tmp52_ = tmp2_+tmp51_;

  mVal[0] = (mCompCoord[0]*(tmp27_)+mCompCoord[1]*(tmp29_)+mCompCoord[2])/(mCompCoord[6]*(tmp27_)+mCompCoord[7]*(tmp29_)+1)-(mCompCoord[8]*(tmp50_)+mCompCoord[9]*(tmp52_)+mCompCoord[10])/(mCompCoord[14]*(tmp50_)+mCompCoord[15]*(tmp52_)+1);

}


void cEqHomogrXDeg5::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[16];
   double tmp1_ = mLocXL1-tmp0_;
   double tmp2_ = mCompCoord[17];
   double tmp3_ = mLocYL1-tmp2_;
   double tmp4_ = (tmp1_)*(tmp1_);
   double tmp5_ = (tmp3_)*(tmp3_);
   double tmp6_ = tmp4_+tmp5_;
   double tmp7_ = (tmp6_)*(tmp6_);
   double tmp8_ = tmp7_*(tmp6_);
   double tmp9_ = tmp8_*(tmp6_);
   double tmp10_ = mCompCoord[18];
   double tmp11_ = (tmp6_)*tmp10_;
   double tmp12_ = 1+tmp11_;
   double tmp13_ = mCompCoord[19];
   double tmp14_ = tmp7_*tmp13_;
   double tmp15_ = tmp12_+tmp14_;
   double tmp16_ = mCompCoord[20];
   double tmp17_ = tmp8_*tmp16_;
   double tmp18_ = tmp15_+tmp17_;
   double tmp19_ = mCompCoord[21];
   double tmp20_ = tmp9_*tmp19_;
   double tmp21_ = tmp18_+tmp20_;
   double tmp22_ = tmp9_*(tmp6_);
   double tmp23_ = mCompCoord[22];
   double tmp24_ = tmp22_*tmp23_;
   double tmp25_ = tmp21_+tmp24_;
   double tmp26_ = (tmp1_)*(tmp25_);
   double tmp27_ = tmp0_+tmp26_;
   double tmp28_ = (tmp3_)*(tmp25_);
   double tmp29_ = tmp2_+tmp28_;
   double tmp30_ = mLocXL2-tmp0_;
   double tmp31_ = mLocYL2-tmp2_;
   double tmp32_ = (tmp30_)*(tmp30_);
   double tmp33_ = (tmp31_)*(tmp31_);
   double tmp34_ = tmp32_+tmp33_;
   double tmp35_ = (tmp34_)*(tmp34_);
   double tmp36_ = tmp35_*(tmp34_);
   double tmp37_ = tmp36_*(tmp34_);
   double tmp38_ = (tmp34_)*tmp10_;
   double tmp39_ = 1+tmp38_;
   double tmp40_ = tmp35_*tmp13_;
   double tmp41_ = tmp39_+tmp40_;
   double tmp42_ = tmp36_*tmp16_;
   double tmp43_ = tmp41_+tmp42_;
   double tmp44_ = tmp37_*tmp19_;
   double tmp45_ = tmp43_+tmp44_;
   double tmp46_ = tmp37_*(tmp34_);
   double tmp47_ = tmp46_*tmp23_;
   double tmp48_ = tmp45_+tmp47_;
   double tmp49_ = (tmp30_)*(tmp48_);
   double tmp50_ = tmp0_+tmp49_;
   double tmp51_ = (tmp31_)*(tmp48_);
   double tmp52_ = tmp2_+tmp51_;
   double tmp53_ = mCompCoord[6];
   double tmp54_ = tmp53_*(tmp27_);
   double tmp55_ = mCompCoord[7];
   double tmp56_ = tmp55_*(tmp29_);
   double tmp57_ = tmp54_+tmp56_;
   double tmp58_ = tmp57_+1;
   double tmp59_ = ElSquare(tmp58_);
   double tmp60_ = mCompCoord[0];
   double tmp61_ = tmp60_*(tmp27_);
   double tmp62_ = mCompCoord[1];
   double tmp63_ = tmp62_*(tmp29_);
   double tmp64_ = tmp61_+tmp63_;
   double tmp65_ = mCompCoord[2];
   double tmp66_ = tmp64_+tmp65_;
   double tmp67_ = mCompCoord[14];
   double tmp68_ = tmp67_*(tmp50_);
   double tmp69_ = mCompCoord[15];
   double tmp70_ = tmp69_*(tmp52_);
   double tmp71_ = tmp68_+tmp70_;
   double tmp72_ = tmp71_+1;
   double tmp73_ = ElSquare(tmp72_);
   double tmp74_ = mCompCoord[8];
   double tmp75_ = tmp74_*(tmp50_);
   double tmp76_ = mCompCoord[9];
   double tmp77_ = tmp76_*(tmp52_);
   double tmp78_ = tmp75_+tmp77_;
   double tmp79_ = mCompCoord[10];
   double tmp80_ = tmp78_+tmp79_;
   double tmp81_ = -(1);
   double tmp82_ = tmp81_*(tmp1_);
   double tmp83_ = tmp82_+tmp82_;
   double tmp84_ = (tmp83_)*(tmp6_);
   double tmp85_ = tmp84_+tmp84_;
   double tmp86_ = (tmp85_)*(tmp6_);
   double tmp87_ = (tmp83_)*tmp7_;
   double tmp88_ = tmp86_+tmp87_;
   double tmp89_ = (tmp88_)*(tmp6_);
   double tmp90_ = (tmp83_)*tmp8_;
   double tmp91_ = tmp89_+tmp90_;
   double tmp92_ = (tmp83_)*tmp10_;
   double tmp93_ = (tmp85_)*tmp13_;
   double tmp94_ = tmp92_+tmp93_;
   double tmp95_ = (tmp88_)*tmp16_;
   double tmp96_ = tmp94_+tmp95_;
   double tmp97_ = (tmp91_)*tmp19_;
   double tmp98_ = tmp96_+tmp97_;
   double tmp99_ = (tmp91_)*(tmp6_);
   double tmp100_ = (tmp83_)*tmp9_;
   double tmp101_ = tmp99_+tmp100_;
   double tmp102_ = (tmp101_)*tmp23_;
   double tmp103_ = tmp98_+tmp102_;
   double tmp104_ = tmp81_*(tmp25_);
   double tmp105_ = (tmp103_)*(tmp1_);
   double tmp106_ = tmp104_+tmp105_;
   double tmp107_ = 1+tmp106_;
   double tmp108_ = (tmp103_)*(tmp3_);
   double tmp109_ = tmp81_*(tmp30_);
   double tmp110_ = tmp109_+tmp109_;
   double tmp111_ = (tmp110_)*(tmp34_);
   double tmp112_ = tmp111_+tmp111_;
   double tmp113_ = (tmp112_)*(tmp34_);
   double tmp114_ = (tmp110_)*tmp35_;
   double tmp115_ = tmp113_+tmp114_;
   double tmp116_ = (tmp115_)*(tmp34_);
   double tmp117_ = (tmp110_)*tmp36_;
   double tmp118_ = tmp116_+tmp117_;
   double tmp119_ = (tmp110_)*tmp10_;
   double tmp120_ = (tmp112_)*tmp13_;
   double tmp121_ = tmp119_+tmp120_;
   double tmp122_ = (tmp115_)*tmp16_;
   double tmp123_ = tmp121_+tmp122_;
   double tmp124_ = (tmp118_)*tmp19_;
   double tmp125_ = tmp123_+tmp124_;
   double tmp126_ = (tmp118_)*(tmp34_);
   double tmp127_ = (tmp110_)*tmp37_;
   double tmp128_ = tmp126_+tmp127_;
   double tmp129_ = (tmp128_)*tmp23_;
   double tmp130_ = tmp125_+tmp129_;
   double tmp131_ = tmp81_*(tmp48_);
   double tmp132_ = (tmp130_)*(tmp30_);
   double tmp133_ = tmp131_+tmp132_;
   double tmp134_ = 1+tmp133_;
   double tmp135_ = (tmp130_)*(tmp31_);
   double tmp136_ = tmp81_*(tmp3_);
   double tmp137_ = tmp136_+tmp136_;
   double tmp138_ = (tmp137_)*(tmp6_);
   double tmp139_ = tmp138_+tmp138_;
   double tmp140_ = (tmp139_)*(tmp6_);
   double tmp141_ = (tmp137_)*tmp7_;
   double tmp142_ = tmp140_+tmp141_;
   double tmp143_ = (tmp142_)*(tmp6_);
   double tmp144_ = (tmp137_)*tmp8_;
   double tmp145_ = tmp143_+tmp144_;
   double tmp146_ = (tmp137_)*tmp10_;
   double tmp147_ = (tmp139_)*tmp13_;
   double tmp148_ = tmp146_+tmp147_;
   double tmp149_ = (tmp142_)*tmp16_;
   double tmp150_ = tmp148_+tmp149_;
   double tmp151_ = (tmp145_)*tmp19_;
   double tmp152_ = tmp150_+tmp151_;
   double tmp153_ = (tmp145_)*(tmp6_);
   double tmp154_ = (tmp137_)*tmp9_;
   double tmp155_ = tmp153_+tmp154_;
   double tmp156_ = (tmp155_)*tmp23_;
   double tmp157_ = tmp152_+tmp156_;
   double tmp158_ = (tmp157_)*(tmp1_);
   double tmp159_ = (tmp157_)*(tmp3_);
   double tmp160_ = tmp104_+tmp159_;
   double tmp161_ = 1+tmp160_;
   double tmp162_ = tmp81_*(tmp31_);
   double tmp163_ = tmp162_+tmp162_;
   double tmp164_ = (tmp163_)*(tmp34_);
   double tmp165_ = tmp164_+tmp164_;
   double tmp166_ = (tmp165_)*(tmp34_);
   double tmp167_ = (tmp163_)*tmp35_;
   double tmp168_ = tmp166_+tmp167_;
   double tmp169_ = (tmp168_)*(tmp34_);
   double tmp170_ = (tmp163_)*tmp36_;
   double tmp171_ = tmp169_+tmp170_;
   double tmp172_ = (tmp163_)*tmp10_;
   double tmp173_ = (tmp165_)*tmp13_;
   double tmp174_ = tmp172_+tmp173_;
   double tmp175_ = (tmp168_)*tmp16_;
   double tmp176_ = tmp174_+tmp175_;
   double tmp177_ = (tmp171_)*tmp19_;
   double tmp178_ = tmp176_+tmp177_;
   double tmp179_ = (tmp171_)*(tmp34_);
   double tmp180_ = (tmp163_)*tmp37_;
   double tmp181_ = tmp179_+tmp180_;
   double tmp182_ = (tmp181_)*tmp23_;
   double tmp183_ = tmp178_+tmp182_;
   double tmp184_ = (tmp183_)*(tmp30_);
   double tmp185_ = (tmp183_)*(tmp31_);
   double tmp186_ = tmp131_+tmp185_;
   double tmp187_ = 1+tmp186_;
   double tmp188_ = (tmp6_)*(tmp1_);
   double tmp189_ = (tmp6_)*(tmp3_);
   double tmp190_ = (tmp34_)*(tmp30_);
   double tmp191_ = (tmp34_)*(tmp31_);
   double tmp192_ = tmp7_*(tmp1_);
   double tmp193_ = tmp7_*(tmp3_);
   double tmp194_ = tmp35_*(tmp30_);
   double tmp195_ = tmp35_*(tmp31_);
   double tmp196_ = tmp8_*(tmp1_);
   double tmp197_ = tmp8_*(tmp3_);
   double tmp198_ = tmp36_*(tmp30_);
   double tmp199_ = tmp36_*(tmp31_);
   double tmp200_ = tmp9_*(tmp1_);
   double tmp201_ = tmp9_*(tmp3_);
   double tmp202_ = tmp37_*(tmp30_);
   double tmp203_ = tmp37_*(tmp31_);
   double tmp204_ = tmp22_*(tmp1_);
   double tmp205_ = tmp22_*(tmp3_);
   double tmp206_ = tmp46_*(tmp30_);
   double tmp207_ = tmp46_*(tmp31_);

  mVal[0] = (tmp66_)/(tmp58_)-(tmp80_)/(tmp72_);

  mCompDer[0][0] = ((tmp27_)*(tmp58_))/tmp59_;
  mCompDer[0][1] = ((tmp29_)*(tmp58_))/tmp59_;
  mCompDer[0][2] = (tmp58_)/tmp59_;
  mCompDer[0][3] = 0;
  mCompDer[0][4] = 0;
  mCompDer[0][5] = 0;
  mCompDer[0][6] = -((tmp66_)*(tmp27_))/tmp59_;
  mCompDer[0][7] = -((tmp66_)*(tmp29_))/tmp59_;
  mCompDer[0][8] = -(((tmp50_)*(tmp72_))/tmp73_);
  mCompDer[0][9] = -(((tmp52_)*(tmp72_))/tmp73_);
  mCompDer[0][10] = -((tmp72_)/tmp73_);
  mCompDer[0][11] = 0;
  mCompDer[0][12] = 0;
  mCompDer[0][13] = 0;
  mCompDer[0][14] = -(-((tmp80_)*(tmp50_))/tmp73_);
  mCompDer[0][15] = -(-((tmp80_)*(tmp52_))/tmp73_);
  mCompDer[0][16] = (((tmp107_)*tmp60_+tmp108_*tmp62_)*(tmp58_)-(tmp66_)*((tmp107_)*tmp53_+tmp108_*tmp55_))/tmp59_-(((tmp134_)*tmp74_+tmp135_*tmp76_)*(tmp72_)-(tmp80_)*((tmp134_)*tmp67_+tmp135_*tmp69_))/tmp73_;
  mCompDer[0][17] = ((tmp158_*tmp60_+(tmp161_)*tmp62_)*(tmp58_)-(tmp66_)*(tmp158_*tmp53_+(tmp161_)*tmp55_))/tmp59_-((tmp184_*tmp74_+(tmp187_)*tmp76_)*(tmp72_)-(tmp80_)*(tmp184_*tmp67_+(tmp187_)*tmp69_))/tmp73_;
  mCompDer[0][18] = ((tmp188_*tmp60_+tmp189_*tmp62_)*(tmp58_)-(tmp66_)*(tmp188_*tmp53_+tmp189_*tmp55_))/tmp59_-((tmp190_*tmp74_+tmp191_*tmp76_)*(tmp72_)-(tmp80_)*(tmp190_*tmp67_+tmp191_*tmp69_))/tmp73_;
  mCompDer[0][19] = ((tmp192_*tmp60_+tmp193_*tmp62_)*(tmp58_)-(tmp66_)*(tmp192_*tmp53_+tmp193_*tmp55_))/tmp59_-((tmp194_*tmp74_+tmp195_*tmp76_)*(tmp72_)-(tmp80_)*(tmp194_*tmp67_+tmp195_*tmp69_))/tmp73_;
  mCompDer[0][20] = ((tmp196_*tmp60_+tmp197_*tmp62_)*(tmp58_)-(tmp66_)*(tmp196_*tmp53_+tmp197_*tmp55_))/tmp59_-((tmp198_*tmp74_+tmp199_*tmp76_)*(tmp72_)-(tmp80_)*(tmp198_*tmp67_+tmp199_*tmp69_))/tmp73_;
  mCompDer[0][21] = ((tmp200_*tmp60_+tmp201_*tmp62_)*(tmp58_)-(tmp66_)*(tmp200_*tmp53_+tmp201_*tmp55_))/tmp59_-((tmp202_*tmp74_+tmp203_*tmp76_)*(tmp72_)-(tmp80_)*(tmp202_*tmp67_+tmp203_*tmp69_))/tmp73_;
  mCompDer[0][22] = ((tmp204_*tmp60_+tmp205_*tmp62_)*(tmp58_)-(tmp66_)*(tmp204_*tmp53_+tmp205_*tmp55_))/tmp59_-((tmp206_*tmp74_+tmp207_*tmp76_)*(tmp72_)-(tmp80_)*(tmp206_*tmp67_+tmp207_*tmp69_))/tmp73_;
}


void cEqHomogrXDeg5::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqHomogrXDeg5 Has no Der Sec");
}

void cEqHomogrXDeg5::SetXL1(double aVal){ mLocXL1 = aVal;}
void cEqHomogrXDeg5::SetXL2(double aVal){ mLocXL2 = aVal;}
void cEqHomogrXDeg5::SetYL1(double aVal){ mLocYL1 = aVal;}
void cEqHomogrXDeg5::SetYL2(double aVal){ mLocYL2 = aVal;}



double * cEqHomogrXDeg5::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "XL1") return & mLocXL1;
   if (aName == "XL2") return & mLocXL2;
   if (aName == "YL1") return & mLocYL1;
   if (aName == "YL2") return & mLocYL2;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqHomogrXDeg5::mTheAuto("cEqHomogrXDeg5",cEqHomogrXDeg5::Alloc);


cElCompiledFonc *  cEqHomogrXDeg5::Alloc()
{  return new cEqHomogrXDeg5();
}


