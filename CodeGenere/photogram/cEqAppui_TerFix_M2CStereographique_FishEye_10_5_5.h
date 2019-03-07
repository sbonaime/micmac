// File Automatically generated by eLiSe
#include "StdAfx.h"


class cEqAppui_TerFix_M2CStereographique_FishEye_10_5_5: public cElCompiledFonc
{
   public :

      cEqAppui_TerFix_M2CStereographique_FishEye_10_5_5();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetScNorm(double);
      void SetStereographique_FishEye_10_5_5_State_0_0(double);
      void SetXIm(double);
      void SetXTer(double);
      void SetYIm(double);
      void SetYTer(double);
      void SetZTer(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocScNorm;
      double mLocStereographique_FishEye_10_5_5_State_0_0;
      double mLocXIm;
      double mLocXTer;
      double mLocYIm;
      double mLocYTer;
      double mLocZTer;
};
