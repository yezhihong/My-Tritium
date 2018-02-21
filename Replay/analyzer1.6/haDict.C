// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME haDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "src/THaFormula.h"
#include "src/THaVform.h"
#include "src/THaVhist.h"
#include "src/THaVar.h"
#include "src/THaVarList.h"
#include "src/THaCut.h"
#include "src/THaNamedList.h"
#include "src/THaCutList.h"
#include "src/THaInterface.h"
#include "src/THaRunBase.h"
#include "src/THaCodaRun.h"
#include "src/THaRun.h"
#include "src/THaRunParameters.h"
#include "src/THaDetMap.h"
#include "src/THaApparatus.h"
#include "src/THaDetector.h"
#include "src/THaSpectrometer.h"
#include "src/THaSpectrometerDetector.h"
#include "src/THaHRS.h"
#include "src/THaDecData.h"
#include "src/BdataLoc.h"
#include "src/THaOutput.h"
#include "src/THaString.h"
#include "src/THaTrackingDetector.h"
#include "src/THaNonTrackingDetector.h"
#include "src/THaPidDetector.h"
#include "src/THaSubDetector.h"
#include "src/THaAnalysisObject.h"
#include "src/THaDetectorBase.h"
#include "src/THaRTTI.h"
#include "src/THaPhysicsModule.h"
#include "src/THaVertexModule.h"
#include "src/THaTrackingModule.h"
#include "src/THaAnalyzer.h"
#include "src/THaPrintOption.h"
#include "src/THaBeam.h"
#include "src/THaIdealBeam.h"
#include "src/THaRasteredBeam.h"
#include "src/THaRaster.h"
#include "src/THaBeamDet.h"
#include "src/THaBPM.h"
#include "src/THaUnRasteredBeam.h"
#include "src/THaTrack.h"
#include "src/THaPIDinfo.h"
#include "src/THaParticleInfo.h"
#include "src/THaCluster.h"
#include "src/THaArrayString.h"
#include "src/THaScintillator.h"
#include "src/THaShower.h"
#include "src/THaTotalShower.h"
#include "src/THaCherenkov.h"
#include "src/THaEvent.h"
#include "src/THaTrackID.h"
#include "src/THaVDC.h"
#include "src/THaVDCPlane.h"
#include "src/THaVDCChamber.h"
#include "src/THaVDCPoint.h"
#include "src/THaVDCWire.h"
#include "src/THaVDCHit.h"
#include "src/THaVDCCluster.h"
#include "src/THaVDCTimeToDistConv.h"
#include "src/THaVDCTrackID.h"
#include "src/THaVDCAnalyticTTDConv.h"
#include "src/THaVDCPointPair.h"
#include "src/VDCeff.h"
#include "src/THaElectronKine.h"
#include "src/THaReactionPoint.h"
#include "src/THaReacPointFoil.h"
#include "src/THaTwoarmVertex.h"
#include "src/THaAvgVertex.h"
#include "src/THaExtTarCor.h"
#include "src/THaDebugModule.h"
#include "src/THaTrackInfo.h"
#include "src/THaGoldenTrack.h"
#include "src/THaPrimaryKine.h"
#include "src/THaSecondaryKine.h"
#include "src/THaCoincTime.h"
#include "src/THaS2CoincTime.h"
#include "src/THaTrackProj.h"
#include "src/THaPostProcess.h"
#include "src/THaFilter.h"
#include "src/THaElossCorrection.h"
#include "src/THaTrackEloss.h"
#include "src/THaBeamModule.h"
#include "src/THaBeamInfo.h"
#include "src/THaEpicsEbeam.h"
#include "src/THaBeamEloss.h"
#include "src/THaTrackOut.h"
#include "src/THaTriggerTime.h"
#include "src/THaHelicityDet.h"
#include "src/THaG0HelicityReader.h"
#include "src/THaG0Helicity.h"
#include "src/THaADCHelicity.h"
#include "src/THaHelicity.h"
#include "src/THaPhotoReaction.h"
#include "src/THaSAProtonEP.h"
#include "src/THaTextvars.h"
#include "src/THaQWEAKHelicity.h"
#include "src/THaQWEAKHelicityReader.h"
#include "src/THaEvtTypeHandler.h"
#include "src/THaScalerEvtHandler.h"
#include "src/THaEpicsEvtHandler.h"
#include "src/THaEvt125Handler.h"
#include "src/FileInclude.h"
#include "src/THaGlobals.h"

// Header files passed via #pragma extra_include

namespace VDC {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *VDC_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("VDC", 0 /*version*/, "THaVDCWire.h", 11,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &VDC_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *VDC_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace Podd {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *Podd_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("Podd", 0 /*version*/, "FileInclude.h", 16,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &Podd_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *Podd_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_THaFormula(void *p = 0);
   static void *newArray_THaFormula(Long_t size, void *p);
   static void delete_THaFormula(void *p);
   static void deleteArray_THaFormula(void *p);
   static void destruct_THaFormula(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaFormula*)
   {
      ::THaFormula *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaFormula >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaFormula", ::THaFormula::Class_Version(), "THaFormula.h", 30,
                  typeid(::THaFormula), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaFormula::Dictionary, isa_proxy, 4,
                  sizeof(::THaFormula) );
      instance.SetNew(&new_THaFormula);
      instance.SetNewArray(&newArray_THaFormula);
      instance.SetDelete(&delete_THaFormula);
      instance.SetDeleteArray(&deleteArray_THaFormula);
      instance.SetDestructor(&destruct_THaFormula);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaFormula*)
   {
      return GenerateInitInstanceLocal((::THaFormula*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaFormula*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaOutput(void *p = 0);
   static void *newArray_THaOutput(Long_t size, void *p);
   static void delete_THaOutput(void *p);
   static void deleteArray_THaOutput(void *p);
   static void destruct_THaOutput(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaOutput*)
   {
      ::THaOutput *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaOutput >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaOutput", ::THaOutput::Class_Version(), "THaOutput.h", 70,
                  typeid(::THaOutput), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaOutput::Dictionary, isa_proxy, 4,
                  sizeof(::THaOutput) );
      instance.SetNew(&new_THaOutput);
      instance.SetNewArray(&newArray_THaOutput);
      instance.SetDelete(&delete_THaOutput);
      instance.SetDeleteArray(&deleteArray_THaOutput);
      instance.SetDestructor(&destruct_THaOutput);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaOutput*)
   {
      return GenerateInitInstanceLocal((::THaOutput*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaOutput*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaVform(void *p = 0);
   static void *newArray_THaVform(Long_t size, void *p);
   static void delete_THaVform(void *p);
   static void deleteArray_THaVform(void *p);
   static void destruct_THaVform(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaVform*)
   {
      ::THaVform *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaVform >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaVform", ::THaVform::Class_Version(), "THaVform.h", 23,
                  typeid(::THaVform), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaVform::Dictionary, isa_proxy, 4,
                  sizeof(::THaVform) );
      instance.SetNew(&new_THaVform);
      instance.SetNewArray(&newArray_THaVform);
      instance.SetDelete(&delete_THaVform);
      instance.SetDeleteArray(&deleteArray_THaVform);
      instance.SetDestructor(&destruct_THaVform);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaVform*)
   {
      return GenerateInitInstanceLocal((::THaVform*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaVform*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaVhist(void *p);
   static void deleteArray_THaVhist(void *p);
   static void destruct_THaVhist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaVhist*)
   {
      ::THaVhist *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaVhist >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaVhist", ::THaVhist::Class_Version(), "THaVhist.h", 22,
                  typeid(::THaVhist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaVhist::Dictionary, isa_proxy, 4,
                  sizeof(::THaVhist) );
      instance.SetDelete(&delete_THaVhist);
      instance.SetDeleteArray(&deleteArray_THaVhist);
      instance.SetDestructor(&destruct_THaVhist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaVhist*)
   {
      return GenerateInitInstanceLocal((::THaVhist*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaVhist*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaArrayString(void *p = 0);
   static void *newArray_THaArrayString(Long_t size, void *p);
   static void delete_THaArrayString(void *p);
   static void deleteArray_THaArrayString(void *p);
   static void destruct_THaArrayString(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaArrayString*)
   {
      ::THaArrayString *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaArrayString >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaArrayString", ::THaArrayString::Class_Version(), "THaArrayString.h", 13,
                  typeid(::THaArrayString), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaArrayString::Dictionary, isa_proxy, 4,
                  sizeof(::THaArrayString) );
      instance.SetNew(&new_THaArrayString);
      instance.SetNewArray(&newArray_THaArrayString);
      instance.SetDelete(&delete_THaArrayString);
      instance.SetDeleteArray(&deleteArray_THaArrayString);
      instance.SetDestructor(&destruct_THaArrayString);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaArrayString*)
   {
      return GenerateInitInstanceLocal((::THaArrayString*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaArrayString*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaVar(void *p = 0);
   static void *newArray_THaVar(Long_t size, void *p);
   static void delete_THaVar(void *p);
   static void deleteArray_THaVar(void *p);
   static void destruct_THaVar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaVar*)
   {
      ::THaVar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaVar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaVar", ::THaVar::Class_Version(), "THaVar.h", 17,
                  typeid(::THaVar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaVar::Dictionary, isa_proxy, 4,
                  sizeof(::THaVar) );
      instance.SetNew(&new_THaVar);
      instance.SetNewArray(&newArray_THaVar);
      instance.SetDelete(&delete_THaVar);
      instance.SetDeleteArray(&deleteArray_THaVar);
      instance.SetDestructor(&destruct_THaVar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaVar*)
   {
      return GenerateInitInstanceLocal((::THaVar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaVar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaVarList(void *p = 0);
   static void *newArray_THaVarList(Long_t size, void *p);
   static void delete_THaVarList(void *p);
   static void deleteArray_THaVarList(void *p);
   static void destruct_THaVarList(void *p);
   static Long64_t merge_THaVarList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaVarList*)
   {
      ::THaVarList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaVarList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaVarList", ::THaVarList::Class_Version(), "THaVarList.h", 16,
                  typeid(::THaVarList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaVarList::Dictionary, isa_proxy, 4,
                  sizeof(::THaVarList) );
      instance.SetNew(&new_THaVarList);
      instance.SetNewArray(&newArray_THaVarList);
      instance.SetDelete(&delete_THaVarList);
      instance.SetDeleteArray(&deleteArray_THaVarList);
      instance.SetDestructor(&destruct_THaVarList);
      instance.SetMerge(&merge_THaVarList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaVarList*)
   {
      return GenerateInitInstanceLocal((::THaVarList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaVarList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaCut(void *p = 0);
   static void *newArray_THaCut(Long_t size, void *p);
   static void delete_THaCut(void *p);
   static void deleteArray_THaCut(void *p);
   static void destruct_THaCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaCut*)
   {
      ::THaCut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaCut >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaCut", ::THaCut::Class_Version(), "THaCut.h", 12,
                  typeid(::THaCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaCut::Dictionary, isa_proxy, 4,
                  sizeof(::THaCut) );
      instance.SetNew(&new_THaCut);
      instance.SetNewArray(&newArray_THaCut);
      instance.SetDelete(&delete_THaCut);
      instance.SetDeleteArray(&deleteArray_THaCut);
      instance.SetDestructor(&destruct_THaCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaCut*)
   {
      return GenerateInitInstanceLocal((::THaCut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaCut*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaNamedList(void *p = 0);
   static void *newArray_THaNamedList(Long_t size, void *p);
   static void delete_THaNamedList(void *p);
   static void deleteArray_THaNamedList(void *p);
   static void destruct_THaNamedList(void *p);
   static Long64_t merge_THaNamedList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaNamedList*)
   {
      ::THaNamedList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaNamedList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaNamedList", ::THaNamedList::Class_Version(), "THaNamedList.h", 16,
                  typeid(::THaNamedList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaNamedList::Dictionary, isa_proxy, 4,
                  sizeof(::THaNamedList) );
      instance.SetNew(&new_THaNamedList);
      instance.SetNewArray(&newArray_THaNamedList);
      instance.SetDelete(&delete_THaNamedList);
      instance.SetDeleteArray(&deleteArray_THaNamedList);
      instance.SetDestructor(&destruct_THaNamedList);
      instance.SetMerge(&merge_THaNamedList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaNamedList*)
   {
      return GenerateInitInstanceLocal((::THaNamedList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaNamedList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaHashList(void *p = 0);
   static void *newArray_THaHashList(Long_t size, void *p);
   static void delete_THaHashList(void *p);
   static void deleteArray_THaHashList(void *p);
   static void destruct_THaHashList(void *p);
   static Long64_t merge_THaHashList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaHashList*)
   {
      ::THaHashList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaHashList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaHashList", ::THaHashList::Class_Version(), "THaCutList.h", 19,
                  typeid(::THaHashList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaHashList::Dictionary, isa_proxy, 4,
                  sizeof(::THaHashList) );
      instance.SetNew(&new_THaHashList);
      instance.SetNewArray(&newArray_THaHashList);
      instance.SetDelete(&delete_THaHashList);
      instance.SetDeleteArray(&deleteArray_THaHashList);
      instance.SetDestructor(&destruct_THaHashList);
      instance.SetMerge(&merge_THaHashList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaHashList*)
   {
      return GenerateInitInstanceLocal((::THaHashList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaHashList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaCutList(void *p = 0);
   static void *newArray_THaCutList(Long_t size, void *p);
   static void delete_THaCutList(void *p);
   static void deleteArray_THaCutList(void *p);
   static void destruct_THaCutList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaCutList*)
   {
      ::THaCutList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaCutList >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaCutList", ::THaCutList::Class_Version(), "THaCutList.h", 32,
                  typeid(::THaCutList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaCutList::Dictionary, isa_proxy, 4,
                  sizeof(::THaCutList) );
      instance.SetNew(&new_THaCutList);
      instance.SetNewArray(&newArray_THaCutList);
      instance.SetDelete(&delete_THaCutList);
      instance.SetDeleteArray(&deleteArray_THaCutList);
      instance.SetDestructor(&destruct_THaCutList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaCutList*)
   {
      return GenerateInitInstanceLocal((::THaCutList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaCutList*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaInterface(void *p);
   static void deleteArray_THaInterface(void *p);
   static void destruct_THaInterface(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaInterface*)
   {
      ::THaInterface *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaInterface >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaInterface", ::THaInterface::Class_Version(), "THaInterface.h", 15,
                  typeid(::THaInterface), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaInterface::Dictionary, isa_proxy, 4,
                  sizeof(::THaInterface) );
      instance.SetDelete(&delete_THaInterface);
      instance.SetDeleteArray(&deleteArray_THaInterface);
      instance.SetDestructor(&destruct_THaInterface);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaInterface*)
   {
      return GenerateInitInstanceLocal((::THaInterface*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaInterface*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaRunBase(void *p);
   static void deleteArray_THaRunBase(void *p);
   static void destruct_THaRunBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaRunBase*)
   {
      ::THaRunBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaRunBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaRunBase", ::THaRunBase::Class_Version(), "THaRunBase.h", 17,
                  typeid(::THaRunBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaRunBase::Dictionary, isa_proxy, 4,
                  sizeof(::THaRunBase) );
      instance.SetDelete(&delete_THaRunBase);
      instance.SetDeleteArray(&deleteArray_THaRunBase);
      instance.SetDestructor(&destruct_THaRunBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaRunBase*)
   {
      return GenerateInitInstanceLocal((::THaRunBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaRunBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaCodaRun(void *p);
   static void deleteArray_THaCodaRun(void *p);
   static void destruct_THaCodaRun(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaCodaRun*)
   {
      ::THaCodaRun *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaCodaRun >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaCodaRun", ::THaCodaRun::Class_Version(), "THaCodaRun.h", 13,
                  typeid(::THaCodaRun), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaCodaRun::Dictionary, isa_proxy, 4,
                  sizeof(::THaCodaRun) );
      instance.SetDelete(&delete_THaCodaRun);
      instance.SetDeleteArray(&deleteArray_THaCodaRun);
      instance.SetDestructor(&destruct_THaCodaRun);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaCodaRun*)
   {
      return GenerateInitInstanceLocal((::THaCodaRun*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaCodaRun*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaRun(void *p = 0);
   static void *newArray_THaRun(Long_t size, void *p);
   static void delete_THaRun(void *p);
   static void deleteArray_THaRun(void *p);
   static void destruct_THaRun(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaRun*)
   {
      ::THaRun *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaRun >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaRun", ::THaRun::Class_Version(), "THaRun.h", 14,
                  typeid(::THaRun), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaRun::Dictionary, isa_proxy, 4,
                  sizeof(::THaRun) );
      instance.SetNew(&new_THaRun);
      instance.SetNewArray(&newArray_THaRun);
      instance.SetDelete(&delete_THaRun);
      instance.SetDeleteArray(&deleteArray_THaRun);
      instance.SetDestructor(&destruct_THaRun);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaRun*)
   {
      return GenerateInitInstanceLocal((::THaRun*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaRun*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaRunParameters(void *p = 0);
   static void *newArray_THaRunParameters(Long_t size, void *p);
   static void delete_THaRunParameters(void *p);
   static void deleteArray_THaRunParameters(void *p);
   static void destruct_THaRunParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaRunParameters*)
   {
      ::THaRunParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaRunParameters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaRunParameters", ::THaRunParameters::Class_Version(), "THaRunParameters.h", 16,
                  typeid(::THaRunParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaRunParameters::Dictionary, isa_proxy, 4,
                  sizeof(::THaRunParameters) );
      instance.SetNew(&new_THaRunParameters);
      instance.SetNewArray(&newArray_THaRunParameters);
      instance.SetDelete(&delete_THaRunParameters);
      instance.SetDeleteArray(&deleteArray_THaRunParameters);
      instance.SetDestructor(&destruct_THaRunParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaRunParameters*)
   {
      return GenerateInitInstanceLocal((::THaRunParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaRunParameters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaDetMap(void *p = 0);
   static void *newArray_THaDetMap(Long_t size, void *p);
   static void delete_THaDetMap(void *p);
   static void deleteArray_THaDetMap(void *p);
   static void destruct_THaDetMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaDetMap*)
   {
      ::THaDetMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaDetMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaDetMap", ::THaDetMap::Class_Version(), "THaDetMap.h", 25,
                  typeid(::THaDetMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaDetMap::Dictionary, isa_proxy, 4,
                  sizeof(::THaDetMap) );
      instance.SetNew(&new_THaDetMap);
      instance.SetNewArray(&newArray_THaDetMap);
      instance.SetDelete(&delete_THaDetMap);
      instance.SetDeleteArray(&deleteArray_THaDetMap);
      instance.SetDestructor(&destruct_THaDetMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaDetMap*)
   {
      return GenerateInitInstanceLocal((::THaDetMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaDetMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *THaDetMapcLcLModule_Dictionary();
   static void THaDetMapcLcLModule_TClassManip(TClass*);
   static void *new_THaDetMapcLcLModule(void *p = 0);
   static void *newArray_THaDetMapcLcLModule(Long_t size, void *p);
   static void delete_THaDetMapcLcLModule(void *p);
   static void deleteArray_THaDetMapcLcLModule(void *p);
   static void destruct_THaDetMapcLcLModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaDetMap::Module*)
   {
      ::THaDetMap::Module *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::THaDetMap::Module));
      static ::ROOT::TGenericClassInfo 
         instance("THaDetMap::Module", "THaDetMap.h", 34,
                  typeid(::THaDetMap::Module), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THaDetMapcLcLModule_Dictionary, isa_proxy, 4,
                  sizeof(::THaDetMap::Module) );
      instance.SetNew(&new_THaDetMapcLcLModule);
      instance.SetNewArray(&newArray_THaDetMapcLcLModule);
      instance.SetDelete(&delete_THaDetMapcLcLModule);
      instance.SetDeleteArray(&deleteArray_THaDetMapcLcLModule);
      instance.SetDestructor(&destruct_THaDetMapcLcLModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaDetMap::Module*)
   {
      return GenerateInitInstanceLocal((::THaDetMap::Module*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaDetMap::Module*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THaDetMapcLcLModule_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::THaDetMap::Module*)0x0)->GetClass();
      THaDetMapcLcLModule_TClassManip(theClass);
   return theClass;
   }

   static void THaDetMapcLcLModule_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_THaAnalysisObject(void *p = 0);
   static void *newArray_THaAnalysisObject(Long_t size, void *p);
   static void delete_THaAnalysisObject(void *p);
   static void deleteArray_THaAnalysisObject(void *p);
   static void destruct_THaAnalysisObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaAnalysisObject*)
   {
      ::THaAnalysisObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaAnalysisObject >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaAnalysisObject", ::THaAnalysisObject::Class_Version(), "THaAnalysisObject.h", 29,
                  typeid(::THaAnalysisObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaAnalysisObject::Dictionary, isa_proxy, 4,
                  sizeof(::THaAnalysisObject) );
      instance.SetNew(&new_THaAnalysisObject);
      instance.SetNewArray(&newArray_THaAnalysisObject);
      instance.SetDelete(&delete_THaAnalysisObject);
      instance.SetDeleteArray(&deleteArray_THaAnalysisObject);
      instance.SetDestructor(&destruct_THaAnalysisObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaAnalysisObject*)
   {
      return GenerateInitInstanceLocal((::THaAnalysisObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaAnalysisObject*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaApparatus(void *p);
   static void deleteArray_THaApparatus(void *p);
   static void destruct_THaApparatus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaApparatus*)
   {
      ::THaApparatus *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaApparatus >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaApparatus", ::THaApparatus::Class_Version(), "THaApparatus.h", 16,
                  typeid(::THaApparatus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaApparatus::Dictionary, isa_proxy, 4,
                  sizeof(::THaApparatus) );
      instance.SetDelete(&delete_THaApparatus);
      instance.SetDeleteArray(&deleteArray_THaApparatus);
      instance.SetDestructor(&destruct_THaApparatus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaApparatus*)
   {
      return GenerateInitInstanceLocal((::THaApparatus*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaApparatus*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaDetectorBase(void *p);
   static void deleteArray_THaDetectorBase(void *p);
   static void destruct_THaDetectorBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaDetectorBase*)
   {
      ::THaDetectorBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaDetectorBase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaDetectorBase", ::THaDetectorBase::Class_Version(), "THaDetectorBase.h", 15,
                  typeid(::THaDetectorBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaDetectorBase::Dictionary, isa_proxy, 4,
                  sizeof(::THaDetectorBase) );
      instance.SetDelete(&delete_THaDetectorBase);
      instance.SetDeleteArray(&deleteArray_THaDetectorBase);
      instance.SetDestructor(&destruct_THaDetectorBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaDetectorBase*)
   {
      return GenerateInitInstanceLocal((::THaDetectorBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaDetectorBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaDetector(void *p);
   static void deleteArray_THaDetector(void *p);
   static void destruct_THaDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaDetector*)
   {
      ::THaDetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaDetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaDetector", ::THaDetector::Class_Version(), "THaDetector.h", 19,
                  typeid(::THaDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaDetector::Dictionary, isa_proxy, 4,
                  sizeof(::THaDetector) );
      instance.SetDelete(&delete_THaDetector);
      instance.SetDeleteArray(&deleteArray_THaDetector);
      instance.SetDestructor(&destruct_THaDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaDetector*)
   {
      return GenerateInitInstanceLocal((::THaDetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaDetector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaVertexModule(void *p);
   static void deleteArray_THaVertexModule(void *p);
   static void destruct_THaVertexModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaVertexModule*)
   {
      ::THaVertexModule *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaVertexModule >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaVertexModule", ::THaVertexModule::Class_Version(), "THaVertexModule.h", 14,
                  typeid(::THaVertexModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaVertexModule::Dictionary, isa_proxy, 4,
                  sizeof(::THaVertexModule) );
      instance.SetDelete(&delete_THaVertexModule);
      instance.SetDeleteArray(&deleteArray_THaVertexModule);
      instance.SetDestructor(&destruct_THaVertexModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaVertexModule*)
   {
      return GenerateInitInstanceLocal((::THaVertexModule*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaVertexModule*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaTrackInfo(void *p = 0);
   static void *newArray_THaTrackInfo(Long_t size, void *p);
   static void delete_THaTrackInfo(void *p);
   static void deleteArray_THaTrackInfo(void *p);
   static void destruct_THaTrackInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaTrackInfo*)
   {
      ::THaTrackInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaTrackInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaTrackInfo", ::THaTrackInfo::Class_Version(), "THaTrackInfo.h", 14,
                  typeid(::THaTrackInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaTrackInfo::Dictionary, isa_proxy, 4,
                  sizeof(::THaTrackInfo) );
      instance.SetNew(&new_THaTrackInfo);
      instance.SetNewArray(&newArray_THaTrackInfo);
      instance.SetDelete(&delete_THaTrackInfo);
      instance.SetDeleteArray(&deleteArray_THaTrackInfo);
      instance.SetDestructor(&destruct_THaTrackInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaTrackInfo*)
   {
      return GenerateInitInstanceLocal((::THaTrackInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaTrackInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaTrackingModule(void *p = 0);
   static void *newArray_THaTrackingModule(Long_t size, void *p);
   static void delete_THaTrackingModule(void *p);
   static void deleteArray_THaTrackingModule(void *p);
   static void destruct_THaTrackingModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaTrackingModule*)
   {
      ::THaTrackingModule *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaTrackingModule >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaTrackingModule", ::THaTrackingModule::Class_Version(), "THaTrackingModule.h", 15,
                  typeid(::THaTrackingModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaTrackingModule::Dictionary, isa_proxy, 4,
                  sizeof(::THaTrackingModule) );
      instance.SetNew(&new_THaTrackingModule);
      instance.SetNewArray(&newArray_THaTrackingModule);
      instance.SetDelete(&delete_THaTrackingModule);
      instance.SetDeleteArray(&deleteArray_THaTrackingModule);
      instance.SetDestructor(&destruct_THaTrackingModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaTrackingModule*)
   {
      return GenerateInitInstanceLocal((::THaTrackingModule*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaTrackingModule*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaParticleInfo(void *p = 0);
   static void *newArray_THaParticleInfo(Long_t size, void *p);
   static void delete_THaParticleInfo(void *p);
   static void deleteArray_THaParticleInfo(void *p);
   static void destruct_THaParticleInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaParticleInfo*)
   {
      ::THaParticleInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaParticleInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaParticleInfo", ::THaParticleInfo::Class_Version(), "THaParticleInfo.h", 12,
                  typeid(::THaParticleInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaParticleInfo::Dictionary, isa_proxy, 4,
                  sizeof(::THaParticleInfo) );
      instance.SetNew(&new_THaParticleInfo);
      instance.SetNewArray(&newArray_THaParticleInfo);
      instance.SetDelete(&delete_THaParticleInfo);
      instance.SetDeleteArray(&deleteArray_THaParticleInfo);
      instance.SetDestructor(&destruct_THaParticleInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaParticleInfo*)
   {
      return GenerateInitInstanceLocal((::THaParticleInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaParticleInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaSpectrometerDetector(void *p);
   static void deleteArray_THaSpectrometerDetector(void *p);
   static void destruct_THaSpectrometerDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaSpectrometerDetector*)
   {
      ::THaSpectrometerDetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaSpectrometerDetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaSpectrometerDetector", ::THaSpectrometerDetector::Class_Version(), "THaSpectrometerDetector.h", 20,
                  typeid(::THaSpectrometerDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaSpectrometerDetector::Dictionary, isa_proxy, 4,
                  sizeof(::THaSpectrometerDetector) );
      instance.SetDelete(&delete_THaSpectrometerDetector);
      instance.SetDeleteArray(&deleteArray_THaSpectrometerDetector);
      instance.SetDestructor(&destruct_THaSpectrometerDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaSpectrometerDetector*)
   {
      return GenerateInitInstanceLocal((::THaSpectrometerDetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaSpectrometerDetector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaNonTrackingDetector(void *p);
   static void deleteArray_THaNonTrackingDetector(void *p);
   static void destruct_THaNonTrackingDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaNonTrackingDetector*)
   {
      ::THaNonTrackingDetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaNonTrackingDetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaNonTrackingDetector", ::THaNonTrackingDetector::Class_Version(), "THaNonTrackingDetector.h", 14,
                  typeid(::THaNonTrackingDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaNonTrackingDetector::Dictionary, isa_proxy, 4,
                  sizeof(::THaNonTrackingDetector) );
      instance.SetDelete(&delete_THaNonTrackingDetector);
      instance.SetDeleteArray(&deleteArray_THaNonTrackingDetector);
      instance.SetDestructor(&destruct_THaNonTrackingDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaNonTrackingDetector*)
   {
      return GenerateInitInstanceLocal((::THaNonTrackingDetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaNonTrackingDetector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaPidDetector(void *p);
   static void deleteArray_THaPidDetector(void *p);
   static void destruct_THaPidDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaPidDetector*)
   {
      ::THaPidDetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaPidDetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaPidDetector", ::THaPidDetector::Class_Version(), "THaPidDetector.h", 19,
                  typeid(::THaPidDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaPidDetector::Dictionary, isa_proxy, 4,
                  sizeof(::THaPidDetector) );
      instance.SetDelete(&delete_THaPidDetector);
      instance.SetDeleteArray(&deleteArray_THaPidDetector);
      instance.SetDestructor(&destruct_THaPidDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaPidDetector*)
   {
      return GenerateInitInstanceLocal((::THaPidDetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaPidDetector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaSpectrometer(void *p);
   static void deleteArray_THaSpectrometer(void *p);
   static void destruct_THaSpectrometer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaSpectrometer*)
   {
      ::THaSpectrometer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaSpectrometer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaSpectrometer", ::THaSpectrometer::Class_Version(), "THaSpectrometer.h", 23,
                  typeid(::THaSpectrometer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaSpectrometer::Dictionary, isa_proxy, 4,
                  sizeof(::THaSpectrometer) );
      instance.SetDelete(&delete_THaSpectrometer);
      instance.SetDeleteArray(&deleteArray_THaSpectrometer);
      instance.SetDestructor(&destruct_THaSpectrometer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaSpectrometer*)
   {
      return GenerateInitInstanceLocal((::THaSpectrometer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaSpectrometer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaHRS(void *p);
   static void deleteArray_THaHRS(void *p);
   static void destruct_THaHRS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaHRS*)
   {
      ::THaHRS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaHRS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaHRS", ::THaHRS::Class_Version(), "THaHRS.h", 14,
                  typeid(::THaHRS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaHRS::Dictionary, isa_proxy, 4,
                  sizeof(::THaHRS) );
      instance.SetDelete(&delete_THaHRS);
      instance.SetDeleteArray(&deleteArray_THaHRS);
      instance.SetDestructor(&destruct_THaHRS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaHRS*)
   {
      return GenerateInitInstanceLocal((::THaHRS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaHRS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_BdataLoc(void *p);
   static void deleteArray_BdataLoc(void *p);
   static void destruct_BdataLoc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BdataLoc*)
   {
      ::BdataLoc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BdataLoc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("BdataLoc", ::BdataLoc::Class_Version(), "BdataLoc.h", 20,
                  typeid(::BdataLoc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BdataLoc::Dictionary, isa_proxy, 4,
                  sizeof(::BdataLoc) );
      instance.SetDelete(&delete_BdataLoc);
      instance.SetDeleteArray(&deleteArray_BdataLoc);
      instance.SetDestructor(&destruct_BdataLoc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BdataLoc*)
   {
      return GenerateInitInstanceLocal((::BdataLoc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BdataLoc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CrateLoc(void *p = 0);
   static void *newArray_CrateLoc(Long_t size, void *p);
   static void delete_CrateLoc(void *p);
   static void deleteArray_CrateLoc(void *p);
   static void destruct_CrateLoc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CrateLoc*)
   {
      ::CrateLoc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CrateLoc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CrateLoc", ::CrateLoc::Class_Version(), "BdataLoc.h", 97,
                  typeid(::CrateLoc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CrateLoc::Dictionary, isa_proxy, 4,
                  sizeof(::CrateLoc) );
      instance.SetNew(&new_CrateLoc);
      instance.SetNewArray(&newArray_CrateLoc);
      instance.SetDelete(&delete_CrateLoc);
      instance.SetDeleteArray(&deleteArray_CrateLoc);
      instance.SetDestructor(&destruct_CrateLoc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CrateLoc*)
   {
      return GenerateInitInstanceLocal((::CrateLoc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CrateLoc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CrateLocMulti(void *p = 0);
   static void *newArray_CrateLocMulti(Long_t size, void *p);
   static void delete_CrateLocMulti(void *p);
   static void deleteArray_CrateLocMulti(void *p);
   static void destruct_CrateLocMulti(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CrateLocMulti*)
   {
      ::CrateLocMulti *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CrateLocMulti >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CrateLocMulti", ::CrateLocMulti::Class_Version(), "BdataLoc.h", 126,
                  typeid(::CrateLocMulti), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CrateLocMulti::Dictionary, isa_proxy, 4,
                  sizeof(::CrateLocMulti) );
      instance.SetNew(&new_CrateLocMulti);
      instance.SetNewArray(&newArray_CrateLocMulti);
      instance.SetDelete(&delete_CrateLocMulti);
      instance.SetDeleteArray(&deleteArray_CrateLocMulti);
      instance.SetDestructor(&destruct_CrateLocMulti);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CrateLocMulti*)
   {
      return GenerateInitInstanceLocal((::CrateLocMulti*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CrateLocMulti*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_WordLoc(void *p = 0);
   static void *newArray_WordLoc(Long_t size, void *p);
   static void delete_WordLoc(void *p);
   static void deleteArray_WordLoc(void *p);
   static void destruct_WordLoc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::WordLoc*)
   {
      ::WordLoc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::WordLoc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("WordLoc", ::WordLoc::Class_Version(), "BdataLoc.h", 157,
                  typeid(::WordLoc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::WordLoc::Dictionary, isa_proxy, 4,
                  sizeof(::WordLoc) );
      instance.SetNew(&new_WordLoc);
      instance.SetNewArray(&newArray_WordLoc);
      instance.SetDelete(&delete_WordLoc);
      instance.SetDeleteArray(&deleteArray_WordLoc);
      instance.SetDestructor(&destruct_WordLoc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::WordLoc*)
   {
      return GenerateInitInstanceLocal((::WordLoc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::WordLoc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RoclenLoc(void *p = 0);
   static void *newArray_RoclenLoc(Long_t size, void *p);
   static void delete_RoclenLoc(void *p);
   static void deleteArray_RoclenLoc(void *p);
   static void destruct_RoclenLoc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RoclenLoc*)
   {
      ::RoclenLoc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RoclenLoc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RoclenLoc", ::RoclenLoc::Class_Version(), "BdataLoc.h", 186,
                  typeid(::RoclenLoc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RoclenLoc::Dictionary, isa_proxy, 4,
                  sizeof(::RoclenLoc) );
      instance.SetNew(&new_RoclenLoc);
      instance.SetNewArray(&newArray_RoclenLoc);
      instance.SetDelete(&delete_RoclenLoc);
      instance.SetDeleteArray(&deleteArray_RoclenLoc);
      instance.SetDestructor(&destruct_RoclenLoc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RoclenLoc*)
   {
      return GenerateInitInstanceLocal((::RoclenLoc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RoclenLoc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TrigBitLoc(void *p = 0);
   static void *newArray_TrigBitLoc(Long_t size, void *p);
   static void delete_TrigBitLoc(void *p);
   static void deleteArray_TrigBitLoc(void *p);
   static void destruct_TrigBitLoc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TrigBitLoc*)
   {
      ::TrigBitLoc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TrigBitLoc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TrigBitLoc", ::TrigBitLoc::Class_Version(), "BdataLoc.h", 205,
                  typeid(::TrigBitLoc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TrigBitLoc::Dictionary, isa_proxy, 4,
                  sizeof(::TrigBitLoc) );
      instance.SetNew(&new_TrigBitLoc);
      instance.SetNewArray(&newArray_TrigBitLoc);
      instance.SetDelete(&delete_TrigBitLoc);
      instance.SetDeleteArray(&deleteArray_TrigBitLoc);
      instance.SetDestructor(&destruct_TrigBitLoc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TrigBitLoc*)
   {
      return GenerateInitInstanceLocal((::TrigBitLoc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TrigBitLoc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaDecData(void *p = 0);
   static void *newArray_THaDecData(Long_t size, void *p);
   static void delete_THaDecData(void *p);
   static void deleteArray_THaDecData(void *p);
   static void destruct_THaDecData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaDecData*)
   {
      ::THaDecData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaDecData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaDecData", ::THaDecData::Class_Version(), "THaDecData.h", 16,
                  typeid(::THaDecData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaDecData::Dictionary, isa_proxy, 4,
                  sizeof(::THaDecData) );
      instance.SetNew(&new_THaDecData);
      instance.SetNewArray(&newArray_THaDecData);
      instance.SetDelete(&delete_THaDecData);
      instance.SetDeleteArray(&deleteArray_THaDecData);
      instance.SetDestructor(&destruct_THaDecData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaDecData*)
   {
      return GenerateInitInstanceLocal((::THaDecData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaDecData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaTrackingDetector(void *p);
   static void deleteArray_THaTrackingDetector(void *p);
   static void destruct_THaTrackingDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaTrackingDetector*)
   {
      ::THaTrackingDetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaTrackingDetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaTrackingDetector", ::THaTrackingDetector::Class_Version(), "THaTrackingDetector.h", 16,
                  typeid(::THaTrackingDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaTrackingDetector::Dictionary, isa_proxy, 4,
                  sizeof(::THaTrackingDetector) );
      instance.SetDelete(&delete_THaTrackingDetector);
      instance.SetDeleteArray(&deleteArray_THaTrackingDetector);
      instance.SetDestructor(&destruct_THaTrackingDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaTrackingDetector*)
   {
      return GenerateInitInstanceLocal((::THaTrackingDetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaTrackingDetector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaSubDetector(void *p);
   static void deleteArray_THaSubDetector(void *p);
   static void destruct_THaSubDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaSubDetector*)
   {
      ::THaSubDetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaSubDetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaSubDetector", ::THaSubDetector::Class_Version(), "THaSubDetector.h", 20,
                  typeid(::THaSubDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaSubDetector::Dictionary, isa_proxy, 4,
                  sizeof(::THaSubDetector) );
      instance.SetDelete(&delete_THaSubDetector);
      instance.SetDeleteArray(&deleteArray_THaSubDetector);
      instance.SetDestructor(&destruct_THaSubDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaSubDetector*)
   {
      return GenerateInitInstanceLocal((::THaSubDetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaSubDetector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaRTTI(void *p = 0);
   static void *newArray_THaRTTI(Long_t size, void *p);
   static void delete_THaRTTI(void *p);
   static void deleteArray_THaRTTI(void *p);
   static void destruct_THaRTTI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaRTTI*)
   {
      ::THaRTTI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaRTTI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaRTTI", ::THaRTTI::Class_Version(), "THaRTTI.h", 18,
                  typeid(::THaRTTI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaRTTI::Dictionary, isa_proxy, 4,
                  sizeof(::THaRTTI) );
      instance.SetNew(&new_THaRTTI);
      instance.SetNewArray(&newArray_THaRTTI);
      instance.SetDelete(&delete_THaRTTI);
      instance.SetDeleteArray(&deleteArray_THaRTTI);
      instance.SetDestructor(&destruct_THaRTTI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaRTTI*)
   {
      return GenerateInitInstanceLocal((::THaRTTI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaRTTI*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaPhysicsModule(void *p);
   static void deleteArray_THaPhysicsModule(void *p);
   static void destruct_THaPhysicsModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaPhysicsModule*)
   {
      ::THaPhysicsModule *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaPhysicsModule >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaPhysicsModule", ::THaPhysicsModule::Class_Version(), "THaPhysicsModule.h", 12,
                  typeid(::THaPhysicsModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaPhysicsModule::Dictionary, isa_proxy, 4,
                  sizeof(::THaPhysicsModule) );
      instance.SetDelete(&delete_THaPhysicsModule);
      instance.SetDeleteArray(&deleteArray_THaPhysicsModule);
      instance.SetDestructor(&destruct_THaPhysicsModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaPhysicsModule*)
   {
      return GenerateInitInstanceLocal((::THaPhysicsModule*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaPhysicsModule*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaAnalyzer(void *p = 0);
   static void *newArray_THaAnalyzer(Long_t size, void *p);
   static void delete_THaAnalyzer(void *p);
   static void deleteArray_THaAnalyzer(void *p);
   static void destruct_THaAnalyzer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaAnalyzer*)
   {
      ::THaAnalyzer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaAnalyzer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaAnalyzer", ::THaAnalyzer::Class_Version(), "THaAnalyzer.h", 27,
                  typeid(::THaAnalyzer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaAnalyzer::Dictionary, isa_proxy, 4,
                  sizeof(::THaAnalyzer) );
      instance.SetNew(&new_THaAnalyzer);
      instance.SetNewArray(&newArray_THaAnalyzer);
      instance.SetDelete(&delete_THaAnalyzer);
      instance.SetDeleteArray(&deleteArray_THaAnalyzer);
      instance.SetDestructor(&destruct_THaAnalyzer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaAnalyzer*)
   {
      return GenerateInitInstanceLocal((::THaAnalyzer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaAnalyzer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaPrintOption(void *p = 0);
   static void *newArray_THaPrintOption(Long_t size, void *p);
   static void delete_THaPrintOption(void *p);
   static void deleteArray_THaPrintOption(void *p);
   static void destruct_THaPrintOption(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaPrintOption*)
   {
      ::THaPrintOption *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaPrintOption >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaPrintOption", ::THaPrintOption::Class_Version(), "THaPrintOption.h", 15,
                  typeid(::THaPrintOption), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaPrintOption::Dictionary, isa_proxy, 4,
                  sizeof(::THaPrintOption) );
      instance.SetNew(&new_THaPrintOption);
      instance.SetNewArray(&newArray_THaPrintOption);
      instance.SetDelete(&delete_THaPrintOption);
      instance.SetDeleteArray(&deleteArray_THaPrintOption);
      instance.SetDestructor(&destruct_THaPrintOption);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaPrintOption*)
   {
      return GenerateInitInstanceLocal((::THaPrintOption*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaPrintOption*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaBeamInfo(void *p = 0);
   static void *newArray_THaBeamInfo(Long_t size, void *p);
   static void delete_THaBeamInfo(void *p);
   static void deleteArray_THaBeamInfo(void *p);
   static void destruct_THaBeamInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaBeamInfo*)
   {
      ::THaBeamInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaBeamInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaBeamInfo", ::THaBeamInfo::Class_Version(), "THaBeamInfo.h", 13,
                  typeid(::THaBeamInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaBeamInfo::Dictionary, isa_proxy, 4,
                  sizeof(::THaBeamInfo) );
      instance.SetNew(&new_THaBeamInfo);
      instance.SetNewArray(&newArray_THaBeamInfo);
      instance.SetDelete(&delete_THaBeamInfo);
      instance.SetDeleteArray(&deleteArray_THaBeamInfo);
      instance.SetDestructor(&destruct_THaBeamInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaBeamInfo*)
   {
      return GenerateInitInstanceLocal((::THaBeamInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaBeamInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaBeamModule(void *p = 0);
   static void *newArray_THaBeamModule(Long_t size, void *p);
   static void delete_THaBeamModule(void *p);
   static void deleteArray_THaBeamModule(void *p);
   static void destruct_THaBeamModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaBeamModule*)
   {
      ::THaBeamModule *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaBeamModule >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaBeamModule", ::THaBeamModule::Class_Version(), "THaBeamModule.h", 14,
                  typeid(::THaBeamModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaBeamModule::Dictionary, isa_proxy, 4,
                  sizeof(::THaBeamModule) );
      instance.SetNew(&new_THaBeamModule);
      instance.SetNewArray(&newArray_THaBeamModule);
      instance.SetDelete(&delete_THaBeamModule);
      instance.SetDeleteArray(&deleteArray_THaBeamModule);
      instance.SetDestructor(&destruct_THaBeamModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaBeamModule*)
   {
      return GenerateInitInstanceLocal((::THaBeamModule*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaBeamModule*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaBeam(void *p);
   static void deleteArray_THaBeam(void *p);
   static void destruct_THaBeam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaBeam*)
   {
      ::THaBeam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaBeam >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaBeam", ::THaBeam::Class_Version(), "THaBeam.h", 16,
                  typeid(::THaBeam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaBeam::Dictionary, isa_proxy, 4,
                  sizeof(::THaBeam) );
      instance.SetDelete(&delete_THaBeam);
      instance.SetDeleteArray(&deleteArray_THaBeam);
      instance.SetDestructor(&destruct_THaBeam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaBeam*)
   {
      return GenerateInitInstanceLocal((::THaBeam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaBeam*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaIdealBeam(void *p);
   static void deleteArray_THaIdealBeam(void *p);
   static void destruct_THaIdealBeam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaIdealBeam*)
   {
      ::THaIdealBeam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaIdealBeam >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaIdealBeam", ::THaIdealBeam::Class_Version(), "THaIdealBeam.h", 12,
                  typeid(::THaIdealBeam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaIdealBeam::Dictionary, isa_proxy, 4,
                  sizeof(::THaIdealBeam) );
      instance.SetDelete(&delete_THaIdealBeam);
      instance.SetDeleteArray(&deleteArray_THaIdealBeam);
      instance.SetDestructor(&destruct_THaIdealBeam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaIdealBeam*)
   {
      return GenerateInitInstanceLocal((::THaIdealBeam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaIdealBeam*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaRasteredBeam(void *p);
   static void deleteArray_THaRasteredBeam(void *p);
   static void destruct_THaRasteredBeam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaRasteredBeam*)
   {
      ::THaRasteredBeam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaRasteredBeam >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaRasteredBeam", ::THaRasteredBeam::Class_Version(), "THaRasteredBeam.h", 12,
                  typeid(::THaRasteredBeam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaRasteredBeam::Dictionary, isa_proxy, 4,
                  sizeof(::THaRasteredBeam) );
      instance.SetDelete(&delete_THaRasteredBeam);
      instance.SetDeleteArray(&deleteArray_THaRasteredBeam);
      instance.SetDestructor(&destruct_THaRasteredBeam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaRasteredBeam*)
   {
      return GenerateInitInstanceLocal((::THaRasteredBeam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaRasteredBeam*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaBeamDet(void *p);
   static void deleteArray_THaBeamDet(void *p);
   static void destruct_THaBeamDet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaBeamDet*)
   {
      ::THaBeamDet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaBeamDet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaBeamDet", ::THaBeamDet::Class_Version(), "THaBeamDet.h", 13,
                  typeid(::THaBeamDet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaBeamDet::Dictionary, isa_proxy, 4,
                  sizeof(::THaBeamDet) );
      instance.SetDelete(&delete_THaBeamDet);
      instance.SetDeleteArray(&deleteArray_THaBeamDet);
      instance.SetDestructor(&destruct_THaBeamDet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaBeamDet*)
   {
      return GenerateInitInstanceLocal((::THaBeamDet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaBeamDet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaRaster(void *p);
   static void deleteArray_THaRaster(void *p);
   static void destruct_THaRaster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaRaster*)
   {
      ::THaRaster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaRaster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaRaster", ::THaRaster::Class_Version(), "THaRaster.h", 13,
                  typeid(::THaRaster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaRaster::Dictionary, isa_proxy, 4,
                  sizeof(::THaRaster) );
      instance.SetDelete(&delete_THaRaster);
      instance.SetDeleteArray(&deleteArray_THaRaster);
      instance.SetDestructor(&destruct_THaRaster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaRaster*)
   {
      return GenerateInitInstanceLocal((::THaRaster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaRaster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaBPM(void *p);
   static void deleteArray_THaBPM(void *p);
   static void destruct_THaBPM(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaBPM*)
   {
      ::THaBPM *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaBPM >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaBPM", ::THaBPM::Class_Version(), "THaBPM.h", 13,
                  typeid(::THaBPM), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaBPM::Dictionary, isa_proxy, 4,
                  sizeof(::THaBPM) );
      instance.SetDelete(&delete_THaBPM);
      instance.SetDeleteArray(&deleteArray_THaBPM);
      instance.SetDestructor(&destruct_THaBPM);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaBPM*)
   {
      return GenerateInitInstanceLocal((::THaBPM*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaBPM*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaUnRasteredBeam(void *p);
   static void deleteArray_THaUnRasteredBeam(void *p);
   static void destruct_THaUnRasteredBeam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaUnRasteredBeam*)
   {
      ::THaUnRasteredBeam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaUnRasteredBeam >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaUnRasteredBeam", ::THaUnRasteredBeam::Class_Version(), "THaUnRasteredBeam.h", 13,
                  typeid(::THaUnRasteredBeam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaUnRasteredBeam::Dictionary, isa_proxy, 4,
                  sizeof(::THaUnRasteredBeam) );
      instance.SetDelete(&delete_THaUnRasteredBeam);
      instance.SetDeleteArray(&deleteArray_THaUnRasteredBeam);
      instance.SetDestructor(&destruct_THaUnRasteredBeam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaUnRasteredBeam*)
   {
      return GenerateInitInstanceLocal((::THaUnRasteredBeam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaUnRasteredBeam*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaPIDinfo(void *p = 0);
   static void *newArray_THaPIDinfo(Long_t size, void *p);
   static void delete_THaPIDinfo(void *p);
   static void deleteArray_THaPIDinfo(void *p);
   static void destruct_THaPIDinfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaPIDinfo*)
   {
      ::THaPIDinfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaPIDinfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaPIDinfo", ::THaPIDinfo::Class_Version(), "THaPIDinfo.h", 17,
                  typeid(::THaPIDinfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaPIDinfo::Dictionary, isa_proxy, 4,
                  sizeof(::THaPIDinfo) );
      instance.SetNew(&new_THaPIDinfo);
      instance.SetNewArray(&newArray_THaPIDinfo);
      instance.SetDelete(&delete_THaPIDinfo);
      instance.SetDeleteArray(&deleteArray_THaPIDinfo);
      instance.SetDestructor(&destruct_THaPIDinfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaPIDinfo*)
   {
      return GenerateInitInstanceLocal((::THaPIDinfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaPIDinfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaTrack(void *p = 0);
   static void *newArray_THaTrack(Long_t size, void *p);
   static void delete_THaTrack(void *p);
   static void deleteArray_THaTrack(void *p);
   static void destruct_THaTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaTrack*)
   {
      ::THaTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaTrack", ::THaTrack::Class_Version(), "THaTrack.h", 20,
                  typeid(::THaTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaTrack::Dictionary, isa_proxy, 4,
                  sizeof(::THaTrack) );
      instance.SetNew(&new_THaTrack);
      instance.SetNewArray(&newArray_THaTrack);
      instance.SetDelete(&delete_THaTrack);
      instance.SetDeleteArray(&deleteArray_THaTrack);
      instance.SetDestructor(&destruct_THaTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaTrack*)
   {
      return GenerateInitInstanceLocal((::THaTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaCluster(void *p = 0);
   static void *newArray_THaCluster(Long_t size, void *p);
   static void delete_THaCluster(void *p);
   static void deleteArray_THaCluster(void *p);
   static void destruct_THaCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaCluster*)
   {
      ::THaCluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaCluster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaCluster", ::THaCluster::Class_Version(), "THaCluster.h", 13,
                  typeid(::THaCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaCluster::Dictionary, isa_proxy, 4,
                  sizeof(::THaCluster) );
      instance.SetNew(&new_THaCluster);
      instance.SetNewArray(&newArray_THaCluster);
      instance.SetDelete(&delete_THaCluster);
      instance.SetDeleteArray(&deleteArray_THaCluster);
      instance.SetDestructor(&destruct_THaCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaCluster*)
   {
      return GenerateInitInstanceLocal((::THaCluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaCluster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaScintillator(void *p = 0);
   static void *newArray_THaScintillator(Long_t size, void *p);
   static void delete_THaScintillator(void *p);
   static void deleteArray_THaScintillator(void *p);
   static void destruct_THaScintillator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaScintillator*)
   {
      ::THaScintillator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaScintillator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaScintillator", ::THaScintillator::Class_Version(), "THaScintillator.h", 15,
                  typeid(::THaScintillator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaScintillator::Dictionary, isa_proxy, 4,
                  sizeof(::THaScintillator) );
      instance.SetNew(&new_THaScintillator);
      instance.SetNewArray(&newArray_THaScintillator);
      instance.SetDelete(&delete_THaScintillator);
      instance.SetDeleteArray(&deleteArray_THaScintillator);
      instance.SetDestructor(&destruct_THaScintillator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaScintillator*)
   {
      return GenerateInitInstanceLocal((::THaScintillator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaScintillator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *THaScintillatorcLcLDataDest_Dictionary();
   static void THaScintillatorcLcLDataDest_TClassManip(TClass*);
   static void *new_THaScintillatorcLcLDataDest(void *p = 0);
   static void *newArray_THaScintillatorcLcLDataDest(Long_t size, void *p);
   static void delete_THaScintillatorcLcLDataDest(void *p);
   static void deleteArray_THaScintillatorcLcLDataDest(void *p);
   static void destruct_THaScintillatorcLcLDataDest(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaScintillator::DataDest*)
   {
      ::THaScintillator::DataDest *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::THaScintillator::DataDest));
      static ::ROOT::TGenericClassInfo 
         instance("THaScintillator::DataDest", "THaScintillator.h", 42,
                  typeid(::THaScintillator::DataDest), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THaScintillatorcLcLDataDest_Dictionary, isa_proxy, 4,
                  sizeof(::THaScintillator::DataDest) );
      instance.SetNew(&new_THaScintillatorcLcLDataDest);
      instance.SetNewArray(&newArray_THaScintillatorcLcLDataDest);
      instance.SetDelete(&delete_THaScintillatorcLcLDataDest);
      instance.SetDeleteArray(&deleteArray_THaScintillatorcLcLDataDest);
      instance.SetDestructor(&destruct_THaScintillatorcLcLDataDest);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaScintillator::DataDest*)
   {
      return GenerateInitInstanceLocal((::THaScintillator::DataDest*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaScintillator::DataDest*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THaScintillatorcLcLDataDest_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::THaScintillator::DataDest*)0x0)->GetClass();
      THaScintillatorcLcLDataDest_TClassManip(theClass);
   return theClass;
   }

   static void THaScintillatorcLcLDataDest_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_THaShower(void *p = 0);
   static void *newArray_THaShower(Long_t size, void *p);
   static void delete_THaShower(void *p);
   static void deleteArray_THaShower(void *p);
   static void destruct_THaShower(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaShower*)
   {
      ::THaShower *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaShower >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaShower", ::THaShower::Class_Version(), "THaShower.h", 15,
                  typeid(::THaShower), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaShower::Dictionary, isa_proxy, 4,
                  sizeof(::THaShower) );
      instance.SetNew(&new_THaShower);
      instance.SetNewArray(&newArray_THaShower);
      instance.SetDelete(&delete_THaShower);
      instance.SetDeleteArray(&deleteArray_THaShower);
      instance.SetDestructor(&destruct_THaShower);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaShower*)
   {
      return GenerateInitInstanceLocal((::THaShower*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaShower*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaTotalShower(void *p);
   static void deleteArray_THaTotalShower(void *p);
   static void destruct_THaTotalShower(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaTotalShower*)
   {
      ::THaTotalShower *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaTotalShower >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaTotalShower", ::THaTotalShower::Class_Version(), "THaTotalShower.h", 14,
                  typeid(::THaTotalShower), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaTotalShower::Dictionary, isa_proxy, 4,
                  sizeof(::THaTotalShower) );
      instance.SetDelete(&delete_THaTotalShower);
      instance.SetDeleteArray(&deleteArray_THaTotalShower);
      instance.SetDestructor(&destruct_THaTotalShower);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaTotalShower*)
   {
      return GenerateInitInstanceLocal((::THaTotalShower*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaTotalShower*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaCherenkov(void *p = 0);
   static void *newArray_THaCherenkov(Long_t size, void *p);
   static void delete_THaCherenkov(void *p);
   static void deleteArray_THaCherenkov(void *p);
   static void destruct_THaCherenkov(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaCherenkov*)
   {
      ::THaCherenkov *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaCherenkov >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaCherenkov", ::THaCherenkov::Class_Version(), "THaCherenkov.h", 16,
                  typeid(::THaCherenkov), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaCherenkov::Dictionary, isa_proxy, 4,
                  sizeof(::THaCherenkov) );
      instance.SetNew(&new_THaCherenkov);
      instance.SetNewArray(&newArray_THaCherenkov);
      instance.SetDelete(&delete_THaCherenkov);
      instance.SetDeleteArray(&deleteArray_THaCherenkov);
      instance.SetDestructor(&destruct_THaCherenkov);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaCherenkov*)
   {
      return GenerateInitInstanceLocal((::THaCherenkov*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaCherenkov*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaEventHeader(void *p = 0);
   static void *newArray_THaEventHeader(Long_t size, void *p);
   static void delete_THaEventHeader(void *p);
   static void deleteArray_THaEventHeader(void *p);
   static void destruct_THaEventHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaEventHeader*)
   {
      ::THaEventHeader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaEventHeader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaEventHeader", ::THaEventHeader::Class_Version(), "THaEvent.h", 14,
                  typeid(::THaEventHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaEventHeader::Dictionary, isa_proxy, 4,
                  sizeof(::THaEventHeader) );
      instance.SetNew(&new_THaEventHeader);
      instance.SetNewArray(&newArray_THaEventHeader);
      instance.SetDelete(&delete_THaEventHeader);
      instance.SetDeleteArray(&deleteArray_THaEventHeader);
      instance.SetDestructor(&destruct_THaEventHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaEventHeader*)
   {
      return GenerateInitInstanceLocal((::THaEventHeader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaEventHeader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaEvent(void *p = 0);
   static void *newArray_THaEvent(Long_t size, void *p);
   static void delete_THaEvent(void *p);
   static void deleteArray_THaEvent(void *p);
   static void destruct_THaEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaEvent*)
   {
      ::THaEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaEvent", ::THaEvent::Class_Version(), "THaEvent.h", 60,
                  typeid(::THaEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaEvent::Dictionary, isa_proxy, 4,
                  sizeof(::THaEvent) );
      instance.SetNew(&new_THaEvent);
      instance.SetNewArray(&newArray_THaEvent);
      instance.SetDelete(&delete_THaEvent);
      instance.SetDeleteArray(&deleteArray_THaEvent);
      instance.SetDestructor(&destruct_THaEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaEvent*)
   {
      return GenerateInitInstanceLocal((::THaEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaTrackID(void *p);
   static void deleteArray_THaTrackID(void *p);
   static void destruct_THaTrackID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaTrackID*)
   {
      ::THaTrackID *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaTrackID >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaTrackID", ::THaTrackID::Class_Version(), "THaTrackID.h", 12,
                  typeid(::THaTrackID), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaTrackID::Dictionary, isa_proxy, 4,
                  sizeof(::THaTrackID) );
      instance.SetDelete(&delete_THaTrackID);
      instance.SetDeleteArray(&deleteArray_THaTrackID);
      instance.SetDestructor(&destruct_THaTrackID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaTrackID*)
   {
      return GenerateInitInstanceLocal((::THaTrackID*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaTrackID*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaVDC(void *p);
   static void deleteArray_THaVDC(void *p);
   static void destruct_THaVDC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaVDC*)
   {
      ::THaVDC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaVDC >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaVDC", ::THaVDC::Class_Version(), "THaVDC.h", 18,
                  typeid(::THaVDC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaVDC::Dictionary, isa_proxy, 4,
                  sizeof(::THaVDC) );
      instance.SetDelete(&delete_THaVDC);
      instance.SetDeleteArray(&deleteArray_THaVDC);
      instance.SetDestructor(&destruct_THaVDC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaVDC*)
   {
      return GenerateInitInstanceLocal((::THaVDC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaVDC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaVDCWire(void *p = 0);
   static void *newArray_THaVDCWire(Long_t size, void *p);
   static void delete_THaVDCWire(void *p);
   static void deleteArray_THaVDCWire(void *p);
   static void destruct_THaVDCWire(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaVDCWire*)
   {
      ::THaVDCWire *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaVDCWire >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaVDCWire", ::THaVDCWire::Class_Version(), "THaVDCWire.h", 15,
                  typeid(::THaVDCWire), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaVDCWire::Dictionary, isa_proxy, 4,
                  sizeof(::THaVDCWire) );
      instance.SetNew(&new_THaVDCWire);
      instance.SetNewArray(&newArray_THaVDCWire);
      instance.SetDelete(&delete_THaVDCWire);
      instance.SetDeleteArray(&deleteArray_THaVDCWire);
      instance.SetDestructor(&destruct_THaVDCWire);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaVDCWire*)
   {
      return GenerateInitInstanceLocal((::THaVDCWire*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaVDCWire*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaVDCCluster(void *p = 0);
   static void *newArray_THaVDCCluster(Long_t size, void *p);
   static void delete_THaVDCCluster(void *p);
   static void deleteArray_THaVDCCluster(void *p);
   static void destruct_THaVDCCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaVDCCluster*)
   {
      ::THaVDCCluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaVDCCluster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaVDCCluster", ::THaVDCCluster::Class_Version(), "THaVDCCluster.h", 40,
                  typeid(::THaVDCCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaVDCCluster::Dictionary, isa_proxy, 4,
                  sizeof(::THaVDCCluster) );
      instance.SetNew(&new_THaVDCCluster);
      instance.SetNewArray(&newArray_THaVDCCluster);
      instance.SetDelete(&delete_THaVDCCluster);
      instance.SetDeleteArray(&deleteArray_THaVDCCluster);
      instance.SetDestructor(&destruct_THaVDCCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaVDCCluster*)
   {
      return GenerateInitInstanceLocal((::THaVDCCluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaVDCCluster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaVDCHit(void *p = 0);
   static void *newArray_THaVDCHit(Long_t size, void *p);
   static void delete_THaVDCHit(void *p);
   static void deleteArray_THaVDCHit(void *p);
   static void destruct_THaVDCHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaVDCHit*)
   {
      ::THaVDCHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaVDCHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaVDCHit", ::THaVDCHit::Class_Version(), "THaVDCHit.h", 15,
                  typeid(::THaVDCHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaVDCHit::Dictionary, isa_proxy, 4,
                  sizeof(::THaVDCHit) );
      instance.SetNew(&new_THaVDCHit);
      instance.SetNewArray(&newArray_THaVDCHit);
      instance.SetDelete(&delete_THaVDCHit);
      instance.SetDeleteArray(&deleteArray_THaVDCHit);
      instance.SetDestructor(&destruct_THaVDCHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaVDCHit*)
   {
      return GenerateInitInstanceLocal((::THaVDCHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaVDCHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaVDCPlane(void *p = 0);
   static void *newArray_THaVDCPlane(Long_t size, void *p);
   static void delete_THaVDCPlane(void *p);
   static void deleteArray_THaVDCPlane(void *p);
   static void destruct_THaVDCPlane(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaVDCPlane*)
   {
      ::THaVDCPlane *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaVDCPlane >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaVDCPlane", ::THaVDCPlane::Class_Version(), "THaVDCPlane.h", 25,
                  typeid(::THaVDCPlane), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaVDCPlane::Dictionary, isa_proxy, 4,
                  sizeof(::THaVDCPlane) );
      instance.SetNew(&new_THaVDCPlane);
      instance.SetNewArray(&newArray_THaVDCPlane);
      instance.SetDelete(&delete_THaVDCPlane);
      instance.SetDeleteArray(&deleteArray_THaVDCPlane);
      instance.SetDestructor(&destruct_THaVDCPlane);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaVDCPlane*)
   {
      return GenerateInitInstanceLocal((::THaVDCPlane*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaVDCPlane*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaVDCPoint(void *p);
   static void deleteArray_THaVDCPoint(void *p);
   static void destruct_THaVDCPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaVDCPoint*)
   {
      ::THaVDCPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaVDCPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaVDCPoint", ::THaVDCPoint::Class_Version(), "THaVDCPoint.h", 18,
                  typeid(::THaVDCPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaVDCPoint::Dictionary, isa_proxy, 4,
                  sizeof(::THaVDCPoint) );
      instance.SetDelete(&delete_THaVDCPoint);
      instance.SetDeleteArray(&deleteArray_THaVDCPoint);
      instance.SetDestructor(&destruct_THaVDCPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaVDCPoint*)
   {
      return GenerateInitInstanceLocal((::THaVDCPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaVDCPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaVDCChamber(void *p = 0);
   static void *newArray_THaVDCChamber(Long_t size, void *p);
   static void delete_THaVDCChamber(void *p);
   static void deleteArray_THaVDCChamber(void *p);
   static void destruct_THaVDCChamber(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaVDCChamber*)
   {
      ::THaVDCChamber *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaVDCChamber >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaVDCChamber", ::THaVDCChamber::Class_Version(), "THaVDCChamber.h", 27,
                  typeid(::THaVDCChamber), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaVDCChamber::Dictionary, isa_proxy, 4,
                  sizeof(::THaVDCChamber) );
      instance.SetNew(&new_THaVDCChamber);
      instance.SetNewArray(&newArray_THaVDCChamber);
      instance.SetDelete(&delete_THaVDCChamber);
      instance.SetDeleteArray(&deleteArray_THaVDCChamber);
      instance.SetDestructor(&destruct_THaVDCChamber);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaVDCChamber*)
   {
      return GenerateInitInstanceLocal((::THaVDCChamber*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaVDCChamber*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_VDCcLcLTimeToDistConv(void *p);
   static void deleteArray_VDCcLcLTimeToDistConv(void *p);
   static void destruct_VDCcLcLTimeToDistConv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::VDC::TimeToDistConv*)
   {
      ::VDC::TimeToDistConv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::VDC::TimeToDistConv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("VDC::TimeToDistConv", ::VDC::TimeToDistConv::Class_Version(), "THaVDCTimeToDistConv.h", 20,
                  typeid(::VDC::TimeToDistConv), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::VDC::TimeToDistConv::Dictionary, isa_proxy, 4,
                  sizeof(::VDC::TimeToDistConv) );
      instance.SetDelete(&delete_VDCcLcLTimeToDistConv);
      instance.SetDeleteArray(&deleteArray_VDCcLcLTimeToDistConv);
      instance.SetDestructor(&destruct_VDCcLcLTimeToDistConv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::VDC::TimeToDistConv*)
   {
      return GenerateInitInstanceLocal((::VDC::TimeToDistConv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::VDC::TimeToDistConv*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaVDCTrackID(void *p = 0);
   static void *newArray_THaVDCTrackID(Long_t size, void *p);
   static void delete_THaVDCTrackID(void *p);
   static void deleteArray_THaVDCTrackID(void *p);
   static void destruct_THaVDCTrackID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaVDCTrackID*)
   {
      ::THaVDCTrackID *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaVDCTrackID >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaVDCTrackID", ::THaVDCTrackID::Class_Version(), "THaVDCTrackID.h", 13,
                  typeid(::THaVDCTrackID), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaVDCTrackID::Dictionary, isa_proxy, 4,
                  sizeof(::THaVDCTrackID) );
      instance.SetNew(&new_THaVDCTrackID);
      instance.SetNewArray(&newArray_THaVDCTrackID);
      instance.SetDelete(&delete_THaVDCTrackID);
      instance.SetDeleteArray(&deleteArray_THaVDCTrackID);
      instance.SetDestructor(&destruct_THaVDCTrackID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaVDCTrackID*)
   {
      return GenerateInitInstanceLocal((::THaVDCTrackID*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaVDCTrackID*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_VDCcLcLAnalyticTTDConv(void *p = 0);
   static void *newArray_VDCcLcLAnalyticTTDConv(Long_t size, void *p);
   static void delete_VDCcLcLAnalyticTTDConv(void *p);
   static void deleteArray_VDCcLcLAnalyticTTDConv(void *p);
   static void destruct_VDCcLcLAnalyticTTDConv(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::VDC::AnalyticTTDConv*)
   {
      ::VDC::AnalyticTTDConv *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::VDC::AnalyticTTDConv >(0);
      static ::ROOT::TGenericClassInfo 
         instance("VDC::AnalyticTTDConv", ::VDC::AnalyticTTDConv::Class_Version(), "THaVDCAnalyticTTDConv.h", 16,
                  typeid(::VDC::AnalyticTTDConv), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::VDC::AnalyticTTDConv::Dictionary, isa_proxy, 4,
                  sizeof(::VDC::AnalyticTTDConv) );
      instance.SetNew(&new_VDCcLcLAnalyticTTDConv);
      instance.SetNewArray(&newArray_VDCcLcLAnalyticTTDConv);
      instance.SetDelete(&delete_VDCcLcLAnalyticTTDConv);
      instance.SetDeleteArray(&deleteArray_VDCcLcLAnalyticTTDConv);
      instance.SetDestructor(&destruct_VDCcLcLAnalyticTTDConv);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::VDC::AnalyticTTDConv*)
   {
      return GenerateInitInstanceLocal((::VDC::AnalyticTTDConv*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::VDC::AnalyticTTDConv*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaVDCPointPair(void *p);
   static void deleteArray_THaVDCPointPair(void *p);
   static void destruct_THaVDCPointPair(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaVDCPointPair*)
   {
      ::THaVDCPointPair *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaVDCPointPair >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaVDCPointPair", ::THaVDCPointPair::Class_Version(), "THaVDCPointPair.h", 16,
                  typeid(::THaVDCPointPair), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaVDCPointPair::Dictionary, isa_proxy, 4,
                  sizeof(::THaVDCPointPair) );
      instance.SetDelete(&delete_THaVDCPointPair);
      instance.SetDeleteArray(&deleteArray_THaVDCPointPair);
      instance.SetDestructor(&destruct_THaVDCPointPair);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaVDCPointPair*)
   {
      return GenerateInitInstanceLocal((::THaVDCPointPair*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaVDCPointPair*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_VDCeff(void *p);
   static void deleteArray_VDCeff(void *p);
   static void destruct_VDCeff(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::VDCeff*)
   {
      ::VDCeff *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::VDCeff >(0);
      static ::ROOT::TGenericClassInfo 
         instance("VDCeff", ::VDCeff::Class_Version(), "VDCeff.h", 16,
                  typeid(::VDCeff), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::VDCeff::Dictionary, isa_proxy, 4,
                  sizeof(::VDCeff) );
      instance.SetDelete(&delete_VDCeff);
      instance.SetDeleteArray(&deleteArray_VDCeff);
      instance.SetDestructor(&destruct_VDCeff);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::VDCeff*)
   {
      return GenerateInitInstanceLocal((::VDCeff*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::VDCeff*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaPrimaryKine(void *p);
   static void deleteArray_THaPrimaryKine(void *p);
   static void destruct_THaPrimaryKine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaPrimaryKine*)
   {
      ::THaPrimaryKine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaPrimaryKine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaPrimaryKine", ::THaPrimaryKine::Class_Version(), "THaPrimaryKine.h", 18,
                  typeid(::THaPrimaryKine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaPrimaryKine::Dictionary, isa_proxy, 4,
                  sizeof(::THaPrimaryKine) );
      instance.SetDelete(&delete_THaPrimaryKine);
      instance.SetDeleteArray(&deleteArray_THaPrimaryKine);
      instance.SetDestructor(&destruct_THaPrimaryKine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaPrimaryKine*)
   {
      return GenerateInitInstanceLocal((::THaPrimaryKine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaPrimaryKine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaElectronKine(void *p);
   static void deleteArray_THaElectronKine(void *p);
   static void destruct_THaElectronKine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaElectronKine*)
   {
      ::THaElectronKine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaElectronKine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaElectronKine", ::THaElectronKine::Class_Version(), "THaElectronKine.h", 12,
                  typeid(::THaElectronKine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaElectronKine::Dictionary, isa_proxy, 4,
                  sizeof(::THaElectronKine) );
      instance.SetDelete(&delete_THaElectronKine);
      instance.SetDeleteArray(&deleteArray_THaElectronKine);
      instance.SetDestructor(&destruct_THaElectronKine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaElectronKine*)
   {
      return GenerateInitInstanceLocal((::THaElectronKine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaElectronKine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaReactionPoint(void *p);
   static void deleteArray_THaReactionPoint(void *p);
   static void destruct_THaReactionPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaReactionPoint*)
   {
      ::THaReactionPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaReactionPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaReactionPoint", ::THaReactionPoint::Class_Version(), "THaReactionPoint.h", 17,
                  typeid(::THaReactionPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaReactionPoint::Dictionary, isa_proxy, 4,
                  sizeof(::THaReactionPoint) );
      instance.SetDelete(&delete_THaReactionPoint);
      instance.SetDeleteArray(&deleteArray_THaReactionPoint);
      instance.SetDestructor(&destruct_THaReactionPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaReactionPoint*)
   {
      return GenerateInitInstanceLocal((::THaReactionPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaReactionPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaReacPointFoil(void *p);
   static void deleteArray_THaReacPointFoil(void *p);
   static void destruct_THaReacPointFoil(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaReacPointFoil*)
   {
      ::THaReacPointFoil *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaReacPointFoil >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaReacPointFoil", ::THaReacPointFoil::Class_Version(), "THaReacPointFoil.h", 17,
                  typeid(::THaReacPointFoil), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaReacPointFoil::Dictionary, isa_proxy, 4,
                  sizeof(::THaReacPointFoil) );
      instance.SetDelete(&delete_THaReacPointFoil);
      instance.SetDeleteArray(&deleteArray_THaReacPointFoil);
      instance.SetDestructor(&destruct_THaReacPointFoil);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaReacPointFoil*)
   {
      return GenerateInitInstanceLocal((::THaReacPointFoil*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaReacPointFoil*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaTwoarmVertex(void *p);
   static void deleteArray_THaTwoarmVertex(void *p);
   static void destruct_THaTwoarmVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaTwoarmVertex*)
   {
      ::THaTwoarmVertex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaTwoarmVertex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaTwoarmVertex", ::THaTwoarmVertex::Class_Version(), "THaTwoarmVertex.h", 16,
                  typeid(::THaTwoarmVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaTwoarmVertex::Dictionary, isa_proxy, 4,
                  sizeof(::THaTwoarmVertex) );
      instance.SetDelete(&delete_THaTwoarmVertex);
      instance.SetDeleteArray(&deleteArray_THaTwoarmVertex);
      instance.SetDestructor(&destruct_THaTwoarmVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaTwoarmVertex*)
   {
      return GenerateInitInstanceLocal((::THaTwoarmVertex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaTwoarmVertex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaAvgVertex(void *p);
   static void deleteArray_THaAvgVertex(void *p);
   static void destruct_THaAvgVertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaAvgVertex*)
   {
      ::THaAvgVertex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaAvgVertex >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaAvgVertex", ::THaAvgVertex::Class_Version(), "THaAvgVertex.h", 14,
                  typeid(::THaAvgVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaAvgVertex::Dictionary, isa_proxy, 4,
                  sizeof(::THaAvgVertex) );
      instance.SetDelete(&delete_THaAvgVertex);
      instance.SetDeleteArray(&deleteArray_THaAvgVertex);
      instance.SetDestructor(&destruct_THaAvgVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaAvgVertex*)
   {
      return GenerateInitInstanceLocal((::THaAvgVertex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaAvgVertex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaExtTarCor(void *p);
   static void deleteArray_THaExtTarCor(void *p);
   static void destruct_THaExtTarCor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaExtTarCor*)
   {
      ::THaExtTarCor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaExtTarCor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaExtTarCor", ::THaExtTarCor::Class_Version(), "THaExtTarCor.h", 16,
                  typeid(::THaExtTarCor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaExtTarCor::Dictionary, isa_proxy, 4,
                  sizeof(::THaExtTarCor) );
      instance.SetDelete(&delete_THaExtTarCor);
      instance.SetDeleteArray(&deleteArray_THaExtTarCor);
      instance.SetDestructor(&destruct_THaExtTarCor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaExtTarCor*)
   {
      return GenerateInitInstanceLocal((::THaExtTarCor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaExtTarCor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaDebugModule(void *p);
   static void deleteArray_THaDebugModule(void *p);
   static void destruct_THaDebugModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaDebugModule*)
   {
      ::THaDebugModule *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaDebugModule >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaDebugModule", ::THaDebugModule::Class_Version(), "THaDebugModule.h", 16,
                  typeid(::THaDebugModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaDebugModule::Dictionary, isa_proxy, 4,
                  sizeof(::THaDebugModule) );
      instance.SetDelete(&delete_THaDebugModule);
      instance.SetDeleteArray(&deleteArray_THaDebugModule);
      instance.SetDestructor(&destruct_THaDebugModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaDebugModule*)
   {
      return GenerateInitInstanceLocal((::THaDebugModule*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaDebugModule*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaGoldenTrack(void *p);
   static void deleteArray_THaGoldenTrack(void *p);
   static void destruct_THaGoldenTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaGoldenTrack*)
   {
      ::THaGoldenTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaGoldenTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaGoldenTrack", ::THaGoldenTrack::Class_Version(), "THaGoldenTrack.h", 17,
                  typeid(::THaGoldenTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaGoldenTrack::Dictionary, isa_proxy, 4,
                  sizeof(::THaGoldenTrack) );
      instance.SetDelete(&delete_THaGoldenTrack);
      instance.SetDeleteArray(&deleteArray_THaGoldenTrack);
      instance.SetDestructor(&destruct_THaGoldenTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaGoldenTrack*)
   {
      return GenerateInitInstanceLocal((::THaGoldenTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaGoldenTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaSecondaryKine(void *p);
   static void deleteArray_THaSecondaryKine(void *p);
   static void destruct_THaSecondaryKine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaSecondaryKine*)
   {
      ::THaSecondaryKine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaSecondaryKine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaSecondaryKine", ::THaSecondaryKine::Class_Version(), "THaSecondaryKine.h", 17,
                  typeid(::THaSecondaryKine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaSecondaryKine::Dictionary, isa_proxy, 4,
                  sizeof(::THaSecondaryKine) );
      instance.SetDelete(&delete_THaSecondaryKine);
      instance.SetDeleteArray(&deleteArray_THaSecondaryKine);
      instance.SetDestructor(&destruct_THaSecondaryKine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaSecondaryKine*)
   {
      return GenerateInitInstanceLocal((::THaSecondaryKine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaSecondaryKine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaCoincTime(void *p);
   static void deleteArray_THaCoincTime(void *p);
   static void destruct_THaCoincTime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaCoincTime*)
   {
      ::THaCoincTime *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaCoincTime >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaCoincTime", ::THaCoincTime::Class_Version(), "THaCoincTime.h", 21,
                  typeid(::THaCoincTime), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaCoincTime::Dictionary, isa_proxy, 4,
                  sizeof(::THaCoincTime) );
      instance.SetDelete(&delete_THaCoincTime);
      instance.SetDeleteArray(&deleteArray_THaCoincTime);
      instance.SetDestructor(&destruct_THaCoincTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaCoincTime*)
   {
      return GenerateInitInstanceLocal((::THaCoincTime*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaCoincTime*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaS2CoincTime(void *p);
   static void deleteArray_THaS2CoincTime(void *p);
   static void destruct_THaS2CoincTime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaS2CoincTime*)
   {
      ::THaS2CoincTime *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaS2CoincTime >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaS2CoincTime", ::THaS2CoincTime::Class_Version(), "THaS2CoincTime.h", 19,
                  typeid(::THaS2CoincTime), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaS2CoincTime::Dictionary, isa_proxy, 4,
                  sizeof(::THaS2CoincTime) );
      instance.SetDelete(&delete_THaS2CoincTime);
      instance.SetDeleteArray(&deleteArray_THaS2CoincTime);
      instance.SetDestructor(&destruct_THaS2CoincTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaS2CoincTime*)
   {
      return GenerateInitInstanceLocal((::THaS2CoincTime*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaS2CoincTime*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaTrackProj(void *p = 0);
   static void *newArray_THaTrackProj(Long_t size, void *p);
   static void delete_THaTrackProj(void *p);
   static void deleteArray_THaTrackProj(void *p);
   static void destruct_THaTrackProj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaTrackProj*)
   {
      ::THaTrackProj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaTrackProj >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaTrackProj", ::THaTrackProj::Class_Version(), "THaTrackProj.h", 12,
                  typeid(::THaTrackProj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaTrackProj::Dictionary, isa_proxy, 4,
                  sizeof(::THaTrackProj) );
      instance.SetNew(&new_THaTrackProj);
      instance.SetNewArray(&newArray_THaTrackProj);
      instance.SetDelete(&delete_THaTrackProj);
      instance.SetDeleteArray(&deleteArray_THaTrackProj);
      instance.SetDestructor(&destruct_THaTrackProj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaTrackProj*)
   {
      return GenerateInitInstanceLocal((::THaTrackProj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaTrackProj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaPostProcess(void *p);
   static void deleteArray_THaPostProcess(void *p);
   static void destruct_THaPostProcess(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaPostProcess*)
   {
      ::THaPostProcess *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaPostProcess >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaPostProcess", ::THaPostProcess::Class_Version(), "THaPostProcess.h", 11,
                  typeid(::THaPostProcess), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaPostProcess::Dictionary, isa_proxy, 4,
                  sizeof(::THaPostProcess) );
      instance.SetDelete(&delete_THaPostProcess);
      instance.SetDeleteArray(&deleteArray_THaPostProcess);
      instance.SetDestructor(&destruct_THaPostProcess);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaPostProcess*)
   {
      return GenerateInitInstanceLocal((::THaPostProcess*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaPostProcess*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaFilter(void *p);
   static void deleteArray_THaFilter(void *p);
   static void destruct_THaFilter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaFilter*)
   {
      ::THaFilter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaFilter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaFilter", ::THaFilter::Class_Version(), "THaFilter.h", 13,
                  typeid(::THaFilter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaFilter::Dictionary, isa_proxy, 4,
                  sizeof(::THaFilter) );
      instance.SetDelete(&delete_THaFilter);
      instance.SetDeleteArray(&deleteArray_THaFilter);
      instance.SetDestructor(&destruct_THaFilter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaFilter*)
   {
      return GenerateInitInstanceLocal((::THaFilter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaFilter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaElossCorrection(void *p);
   static void deleteArray_THaElossCorrection(void *p);
   static void destruct_THaElossCorrection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaElossCorrection*)
   {
      ::THaElossCorrection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaElossCorrection >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaElossCorrection", ::THaElossCorrection::Class_Version(), "THaElossCorrection.h", 15,
                  typeid(::THaElossCorrection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaElossCorrection::Dictionary, isa_proxy, 4,
                  sizeof(::THaElossCorrection) );
      instance.SetDelete(&delete_THaElossCorrection);
      instance.SetDeleteArray(&deleteArray_THaElossCorrection);
      instance.SetDestructor(&destruct_THaElossCorrection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaElossCorrection*)
   {
      return GenerateInitInstanceLocal((::THaElossCorrection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaElossCorrection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaTrackEloss(void *p);
   static void deleteArray_THaTrackEloss(void *p);
   static void destruct_THaTrackEloss(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaTrackEloss*)
   {
      ::THaTrackEloss *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaTrackEloss >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaTrackEloss", ::THaTrackEloss::Class_Version(), "THaTrackEloss.h", 13,
                  typeid(::THaTrackEloss), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaTrackEloss::Dictionary, isa_proxy, 4,
                  sizeof(::THaTrackEloss) );
      instance.SetDelete(&delete_THaTrackEloss);
      instance.SetDeleteArray(&deleteArray_THaTrackEloss);
      instance.SetDestructor(&destruct_THaTrackEloss);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaTrackEloss*)
   {
      return GenerateInitInstanceLocal((::THaTrackEloss*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaTrackEloss*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaEpicsEbeam(void *p);
   static void deleteArray_THaEpicsEbeam(void *p);
   static void destruct_THaEpicsEbeam(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaEpicsEbeam*)
   {
      ::THaEpicsEbeam *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaEpicsEbeam >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaEpicsEbeam", ::THaEpicsEbeam::Class_Version(), "THaEpicsEbeam.h", 14,
                  typeid(::THaEpicsEbeam), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaEpicsEbeam::Dictionary, isa_proxy, 4,
                  sizeof(::THaEpicsEbeam) );
      instance.SetDelete(&delete_THaEpicsEbeam);
      instance.SetDeleteArray(&deleteArray_THaEpicsEbeam);
      instance.SetDestructor(&destruct_THaEpicsEbeam);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaEpicsEbeam*)
   {
      return GenerateInitInstanceLocal((::THaEpicsEbeam*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaEpicsEbeam*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaBeamEloss(void *p);
   static void deleteArray_THaBeamEloss(void *p);
   static void destruct_THaBeamEloss(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaBeamEloss*)
   {
      ::THaBeamEloss *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaBeamEloss >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaBeamEloss", ::THaBeamEloss::Class_Version(), "THaBeamEloss.h", 13,
                  typeid(::THaBeamEloss), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaBeamEloss::Dictionary, isa_proxy, 4,
                  sizeof(::THaBeamEloss) );
      instance.SetDelete(&delete_THaBeamEloss);
      instance.SetDeleteArray(&deleteArray_THaBeamEloss);
      instance.SetDestructor(&destruct_THaBeamEloss);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaBeamEloss*)
   {
      return GenerateInitInstanceLocal((::THaBeamEloss*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaBeamEloss*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaTrackOut(void *p);
   static void deleteArray_THaTrackOut(void *p);
   static void destruct_THaTrackOut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaTrackOut*)
   {
      ::THaTrackOut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaTrackOut >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaTrackOut", ::THaTrackOut::Class_Version(), "THaTrackOut.h", 16,
                  typeid(::THaTrackOut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaTrackOut::Dictionary, isa_proxy, 4,
                  sizeof(::THaTrackOut) );
      instance.SetDelete(&delete_THaTrackOut);
      instance.SetDeleteArray(&deleteArray_THaTrackOut);
      instance.SetDestructor(&destruct_THaTrackOut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaTrackOut*)
   {
      return GenerateInitInstanceLocal((::THaTrackOut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaTrackOut*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaTriggerTime(void *p = 0);
   static void *newArray_THaTriggerTime(Long_t size, void *p);
   static void delete_THaTriggerTime(void *p);
   static void deleteArray_THaTriggerTime(void *p);
   static void destruct_THaTriggerTime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaTriggerTime*)
   {
      ::THaTriggerTime *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaTriggerTime >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaTriggerTime", ::THaTriggerTime::Class_Version(), "THaTriggerTime.h", 19,
                  typeid(::THaTriggerTime), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaTriggerTime::Dictionary, isa_proxy, 4,
                  sizeof(::THaTriggerTime) );
      instance.SetNew(&new_THaTriggerTime);
      instance.SetNewArray(&newArray_THaTriggerTime);
      instance.SetDelete(&delete_THaTriggerTime);
      instance.SetDeleteArray(&deleteArray_THaTriggerTime);
      instance.SetDestructor(&destruct_THaTriggerTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaTriggerTime*)
   {
      return GenerateInitInstanceLocal((::THaTriggerTime*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaTriggerTime*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaHelicityDet(void *p);
   static void deleteArray_THaHelicityDet(void *p);
   static void destruct_THaHelicityDet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaHelicityDet*)
   {
      ::THaHelicityDet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaHelicityDet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaHelicityDet", ::THaHelicityDet::Class_Version(), "THaHelicityDet.h", 18,
                  typeid(::THaHelicityDet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaHelicityDet::Dictionary, isa_proxy, 4,
                  sizeof(::THaHelicityDet) );
      instance.SetDelete(&delete_THaHelicityDet);
      instance.SetDeleteArray(&deleteArray_THaHelicityDet);
      instance.SetDestructor(&destruct_THaHelicityDet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaHelicityDet*)
   {
      return GenerateInitInstanceLocal((::THaHelicityDet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaHelicityDet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaG0HelicityReader(void *p = 0);
   static void *newArray_THaG0HelicityReader(Long_t size, void *p);
   static void delete_THaG0HelicityReader(void *p);
   static void deleteArray_THaG0HelicityReader(void *p);
   static void destruct_THaG0HelicityReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaG0HelicityReader*)
   {
      ::THaG0HelicityReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaG0HelicityReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaG0HelicityReader", ::THaG0HelicityReader::Class_Version(), "THaG0HelicityReader.h", 17,
                  typeid(::THaG0HelicityReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaG0HelicityReader::Dictionary, isa_proxy, 4,
                  sizeof(::THaG0HelicityReader) );
      instance.SetNew(&new_THaG0HelicityReader);
      instance.SetNewArray(&newArray_THaG0HelicityReader);
      instance.SetDelete(&delete_THaG0HelicityReader);
      instance.SetDeleteArray(&deleteArray_THaG0HelicityReader);
      instance.SetDestructor(&destruct_THaG0HelicityReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaG0HelicityReader*)
   {
      return GenerateInitInstanceLocal((::THaG0HelicityReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaG0HelicityReader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *THaG0HelicityReadercLcLROCinfo_Dictionary();
   static void THaG0HelicityReadercLcLROCinfo_TClassManip(TClass*);
   static void *new_THaG0HelicityReadercLcLROCinfo(void *p = 0);
   static void *newArray_THaG0HelicityReadercLcLROCinfo(Long_t size, void *p);
   static void delete_THaG0HelicityReadercLcLROCinfo(void *p);
   static void deleteArray_THaG0HelicityReadercLcLROCinfo(void *p);
   static void destruct_THaG0HelicityReadercLcLROCinfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaG0HelicityReader::ROCinfo*)
   {
      ::THaG0HelicityReader::ROCinfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::THaG0HelicityReader::ROCinfo));
      static ::ROOT::TGenericClassInfo 
         instance("THaG0HelicityReader::ROCinfo", "THaG0HelicityReader.h", 30,
                  typeid(::THaG0HelicityReader::ROCinfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THaG0HelicityReadercLcLROCinfo_Dictionary, isa_proxy, 4,
                  sizeof(::THaG0HelicityReader::ROCinfo) );
      instance.SetNew(&new_THaG0HelicityReadercLcLROCinfo);
      instance.SetNewArray(&newArray_THaG0HelicityReadercLcLROCinfo);
      instance.SetDelete(&delete_THaG0HelicityReadercLcLROCinfo);
      instance.SetDeleteArray(&deleteArray_THaG0HelicityReadercLcLROCinfo);
      instance.SetDestructor(&destruct_THaG0HelicityReadercLcLROCinfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaG0HelicityReader::ROCinfo*)
   {
      return GenerateInitInstanceLocal((::THaG0HelicityReader::ROCinfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaG0HelicityReader::ROCinfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THaG0HelicityReadercLcLROCinfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::THaG0HelicityReader::ROCinfo*)0x0)->GetClass();
      THaG0HelicityReadercLcLROCinfo_TClassManip(theClass);
   return theClass;
   }

   static void THaG0HelicityReadercLcLROCinfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_THaG0Helicity(void *p = 0);
   static void *newArray_THaG0Helicity(Long_t size, void *p);
   static void delete_THaG0Helicity(void *p);
   static void deleteArray_THaG0Helicity(void *p);
   static void destruct_THaG0Helicity(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaG0Helicity*)
   {
      ::THaG0Helicity *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaG0Helicity >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaG0Helicity", ::THaG0Helicity::Class_Version(), "THaG0Helicity.h", 17,
                  typeid(::THaG0Helicity), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaG0Helicity::Dictionary, isa_proxy, 4,
                  sizeof(::THaG0Helicity) );
      instance.SetNew(&new_THaG0Helicity);
      instance.SetNewArray(&newArray_THaG0Helicity);
      instance.SetDelete(&delete_THaG0Helicity);
      instance.SetDeleteArray(&deleteArray_THaG0Helicity);
      instance.SetDestructor(&destruct_THaG0Helicity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaG0Helicity*)
   {
      return GenerateInitInstanceLocal((::THaG0Helicity*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaG0Helicity*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaADCHelicity(void *p = 0);
   static void *newArray_THaADCHelicity(Long_t size, void *p);
   static void delete_THaADCHelicity(void *p);
   static void deleteArray_THaADCHelicity(void *p);
   static void destruct_THaADCHelicity(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaADCHelicity*)
   {
      ::THaADCHelicity *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaADCHelicity >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaADCHelicity", ::THaADCHelicity::Class_Version(), "THaADCHelicity.h", 15,
                  typeid(::THaADCHelicity), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaADCHelicity::Dictionary, isa_proxy, 4,
                  sizeof(::THaADCHelicity) );
      instance.SetNew(&new_THaADCHelicity);
      instance.SetNewArray(&newArray_THaADCHelicity);
      instance.SetDelete(&delete_THaADCHelicity);
      instance.SetDeleteArray(&deleteArray_THaADCHelicity);
      instance.SetDestructor(&destruct_THaADCHelicity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaADCHelicity*)
   {
      return GenerateInitInstanceLocal((::THaADCHelicity*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaADCHelicity*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *THaADCHelicitycLcLChanDef_t_Dictionary();
   static void THaADCHelicitycLcLChanDef_t_TClassManip(TClass*);
   static void *new_THaADCHelicitycLcLChanDef_t(void *p = 0);
   static void *newArray_THaADCHelicitycLcLChanDef_t(Long_t size, void *p);
   static void delete_THaADCHelicitycLcLChanDef_t(void *p);
   static void deleteArray_THaADCHelicitycLcLChanDef_t(void *p);
   static void destruct_THaADCHelicitycLcLChanDef_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaADCHelicity::ChanDef_t*)
   {
      ::THaADCHelicity::ChanDef_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::THaADCHelicity::ChanDef_t));
      static ::ROOT::TGenericClassInfo 
         instance("THaADCHelicity::ChanDef_t", "THaADCHelicity.h", 29,
                  typeid(::THaADCHelicity::ChanDef_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THaADCHelicitycLcLChanDef_t_Dictionary, isa_proxy, 4,
                  sizeof(::THaADCHelicity::ChanDef_t) );
      instance.SetNew(&new_THaADCHelicitycLcLChanDef_t);
      instance.SetNewArray(&newArray_THaADCHelicitycLcLChanDef_t);
      instance.SetDelete(&delete_THaADCHelicitycLcLChanDef_t);
      instance.SetDeleteArray(&deleteArray_THaADCHelicitycLcLChanDef_t);
      instance.SetDestructor(&destruct_THaADCHelicitycLcLChanDef_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaADCHelicity::ChanDef_t*)
   {
      return GenerateInitInstanceLocal((::THaADCHelicity::ChanDef_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaADCHelicity::ChanDef_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THaADCHelicitycLcLChanDef_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::THaADCHelicity::ChanDef_t*)0x0)->GetClass();
      THaADCHelicitycLcLChanDef_t_TClassManip(theClass);
   return theClass;
   }

   static void THaADCHelicitycLcLChanDef_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_THaHelicity(void *p = 0);
   static void *newArray_THaHelicity(Long_t size, void *p);
   static void delete_THaHelicity(void *p);
   static void deleteArray_THaHelicity(void *p);
   static void destruct_THaHelicity(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaHelicity*)
   {
      ::THaHelicity *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaHelicity >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaHelicity", ::THaHelicity::Class_Version(), "THaHelicity.h", 18,
                  typeid(::THaHelicity), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaHelicity::Dictionary, isa_proxy, 4,
                  sizeof(::THaHelicity) );
      instance.SetNew(&new_THaHelicity);
      instance.SetNewArray(&newArray_THaHelicity);
      instance.SetDelete(&delete_THaHelicity);
      instance.SetDeleteArray(&deleteArray_THaHelicity);
      instance.SetDestructor(&destruct_THaHelicity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaHelicity*)
   {
      return GenerateInitInstanceLocal((::THaHelicity*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaHelicity*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaPhotoReaction(void *p);
   static void deleteArray_THaPhotoReaction(void *p);
   static void destruct_THaPhotoReaction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaPhotoReaction*)
   {
      ::THaPhotoReaction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaPhotoReaction >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaPhotoReaction", ::THaPhotoReaction::Class_Version(), "THaPhotoReaction.h", 17,
                  typeid(::THaPhotoReaction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaPhotoReaction::Dictionary, isa_proxy, 4,
                  sizeof(::THaPhotoReaction) );
      instance.SetDelete(&delete_THaPhotoReaction);
      instance.SetDeleteArray(&deleteArray_THaPhotoReaction);
      instance.SetDestructor(&destruct_THaPhotoReaction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaPhotoReaction*)
   {
      return GenerateInitInstanceLocal((::THaPhotoReaction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaPhotoReaction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaSAProtonEP(void *p);
   static void deleteArray_THaSAProtonEP(void *p);
   static void destruct_THaSAProtonEP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaSAProtonEP*)
   {
      ::THaSAProtonEP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaSAProtonEP >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaSAProtonEP", ::THaSAProtonEP::Class_Version(), "THaSAProtonEP.h", 14,
                  typeid(::THaSAProtonEP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaSAProtonEP::Dictionary, isa_proxy, 4,
                  sizeof(::THaSAProtonEP) );
      instance.SetDelete(&delete_THaSAProtonEP);
      instance.SetDeleteArray(&deleteArray_THaSAProtonEP);
      instance.SetDestructor(&destruct_THaSAProtonEP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaSAProtonEP*)
   {
      return GenerateInitInstanceLocal((::THaSAProtonEP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaSAProtonEP*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaTextvars(void *p = 0);
   static void *newArray_THaTextvars(Long_t size, void *p);
   static void delete_THaTextvars(void *p);
   static void deleteArray_THaTextvars(void *p);
   static void destruct_THaTextvars(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaTextvars*)
   {
      ::THaTextvars *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaTextvars >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaTextvars", ::THaTextvars::Class_Version(), "THaTextvars.h", 15,
                  typeid(::THaTextvars), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaTextvars::Dictionary, isa_proxy, 4,
                  sizeof(::THaTextvars) );
      instance.SetNew(&new_THaTextvars);
      instance.SetNewArray(&newArray_THaTextvars);
      instance.SetDelete(&delete_THaTextvars);
      instance.SetDeleteArray(&deleteArray_THaTextvars);
      instance.SetDestructor(&destruct_THaTextvars);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaTextvars*)
   {
      return GenerateInitInstanceLocal((::THaTextvars*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaTextvars*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_THaQWEAKHelicityReader(void *p = 0);
   static void *newArray_THaQWEAKHelicityReader(Long_t size, void *p);
   static void delete_THaQWEAKHelicityReader(void *p);
   static void deleteArray_THaQWEAKHelicityReader(void *p);
   static void destruct_THaQWEAKHelicityReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaQWEAKHelicityReader*)
   {
      ::THaQWEAKHelicityReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaQWEAKHelicityReader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaQWEAKHelicityReader", ::THaQWEAKHelicityReader::Class_Version(), "THaQWEAKHelicityReader.h", 18,
                  typeid(::THaQWEAKHelicityReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaQWEAKHelicityReader::Dictionary, isa_proxy, 4,
                  sizeof(::THaQWEAKHelicityReader) );
      instance.SetNew(&new_THaQWEAKHelicityReader);
      instance.SetNewArray(&newArray_THaQWEAKHelicityReader);
      instance.SetDelete(&delete_THaQWEAKHelicityReader);
      instance.SetDeleteArray(&deleteArray_THaQWEAKHelicityReader);
      instance.SetDestructor(&destruct_THaQWEAKHelicityReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaQWEAKHelicityReader*)
   {
      return GenerateInitInstanceLocal((::THaQWEAKHelicityReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaQWEAKHelicityReader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *THaQWEAKHelicityReadercLcLROCinfo_Dictionary();
   static void THaQWEAKHelicityReadercLcLROCinfo_TClassManip(TClass*);
   static void *new_THaQWEAKHelicityReadercLcLROCinfo(void *p = 0);
   static void *newArray_THaQWEAKHelicityReadercLcLROCinfo(Long_t size, void *p);
   static void delete_THaQWEAKHelicityReadercLcLROCinfo(void *p);
   static void deleteArray_THaQWEAKHelicityReadercLcLROCinfo(void *p);
   static void destruct_THaQWEAKHelicityReadercLcLROCinfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaQWEAKHelicityReader::ROCinfo*)
   {
      ::THaQWEAKHelicityReader::ROCinfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::THaQWEAKHelicityReader::ROCinfo));
      static ::ROOT::TGenericClassInfo 
         instance("THaQWEAKHelicityReader::ROCinfo", "THaQWEAKHelicityReader.h", 37,
                  typeid(::THaQWEAKHelicityReader::ROCinfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &THaQWEAKHelicityReadercLcLROCinfo_Dictionary, isa_proxy, 4,
                  sizeof(::THaQWEAKHelicityReader::ROCinfo) );
      instance.SetNew(&new_THaQWEAKHelicityReadercLcLROCinfo);
      instance.SetNewArray(&newArray_THaQWEAKHelicityReadercLcLROCinfo);
      instance.SetDelete(&delete_THaQWEAKHelicityReadercLcLROCinfo);
      instance.SetDeleteArray(&deleteArray_THaQWEAKHelicityReadercLcLROCinfo);
      instance.SetDestructor(&destruct_THaQWEAKHelicityReadercLcLROCinfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaQWEAKHelicityReader::ROCinfo*)
   {
      return GenerateInitInstanceLocal((::THaQWEAKHelicityReader::ROCinfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaQWEAKHelicityReader::ROCinfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *THaQWEAKHelicityReadercLcLROCinfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::THaQWEAKHelicityReader::ROCinfo*)0x0)->GetClass();
      THaQWEAKHelicityReadercLcLROCinfo_TClassManip(theClass);
   return theClass;
   }

   static void THaQWEAKHelicityReadercLcLROCinfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_THaQWEAKHelicity(void *p = 0);
   static void *newArray_THaQWEAKHelicity(Long_t size, void *p);
   static void delete_THaQWEAKHelicity(void *p);
   static void deleteArray_THaQWEAKHelicity(void *p);
   static void destruct_THaQWEAKHelicity(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaQWEAKHelicity*)
   {
      ::THaQWEAKHelicity *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaQWEAKHelicity >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaQWEAKHelicity", ::THaQWEAKHelicity::Class_Version(), "THaQWEAKHelicity.h", 17,
                  typeid(::THaQWEAKHelicity), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaQWEAKHelicity::Dictionary, isa_proxy, 4,
                  sizeof(::THaQWEAKHelicity) );
      instance.SetNew(&new_THaQWEAKHelicity);
      instance.SetNewArray(&newArray_THaQWEAKHelicity);
      instance.SetDelete(&delete_THaQWEAKHelicity);
      instance.SetDeleteArray(&deleteArray_THaQWEAKHelicity);
      instance.SetDestructor(&destruct_THaQWEAKHelicity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaQWEAKHelicity*)
   {
      return GenerateInitInstanceLocal((::THaQWEAKHelicity*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaQWEAKHelicity*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaEvtTypeHandler(void *p);
   static void deleteArray_THaEvtTypeHandler(void *p);
   static void destruct_THaEvtTypeHandler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaEvtTypeHandler*)
   {
      ::THaEvtTypeHandler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaEvtTypeHandler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaEvtTypeHandler", ::THaEvtTypeHandler::Class_Version(), "THaEvtTypeHandler.h", 16,
                  typeid(::THaEvtTypeHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaEvtTypeHandler::Dictionary, isa_proxy, 4,
                  sizeof(::THaEvtTypeHandler) );
      instance.SetDelete(&delete_THaEvtTypeHandler);
      instance.SetDeleteArray(&deleteArray_THaEvtTypeHandler);
      instance.SetDestructor(&destruct_THaEvtTypeHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaEvtTypeHandler*)
   {
      return GenerateInitInstanceLocal((::THaEvtTypeHandler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaEvtTypeHandler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaScalerEvtHandler(void *p);
   static void deleteArray_THaScalerEvtHandler(void *p);
   static void destruct_THaScalerEvtHandler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaScalerEvtHandler*)
   {
      ::THaScalerEvtHandler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaScalerEvtHandler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaScalerEvtHandler", ::THaScalerEvtHandler::Class_Version(), "THaScalerEvtHandler.h", 28,
                  typeid(::THaScalerEvtHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaScalerEvtHandler::Dictionary, isa_proxy, 4,
                  sizeof(::THaScalerEvtHandler) );
      instance.SetDelete(&delete_THaScalerEvtHandler);
      instance.SetDeleteArray(&deleteArray_THaScalerEvtHandler);
      instance.SetDestructor(&destruct_THaScalerEvtHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaScalerEvtHandler*)
   {
      return GenerateInitInstanceLocal((::THaScalerEvtHandler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaScalerEvtHandler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaEpicsEvtHandler(void *p);
   static void deleteArray_THaEpicsEvtHandler(void *p);
   static void destruct_THaEpicsEvtHandler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaEpicsEvtHandler*)
   {
      ::THaEpicsEvtHandler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaEpicsEvtHandler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaEpicsEvtHandler", ::THaEpicsEvtHandler::Class_Version(), "THaEpicsEvtHandler.h", 21,
                  typeid(::THaEpicsEvtHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaEpicsEvtHandler::Dictionary, isa_proxy, 4,
                  sizeof(::THaEpicsEvtHandler) );
      instance.SetDelete(&delete_THaEpicsEvtHandler);
      instance.SetDeleteArray(&deleteArray_THaEpicsEvtHandler);
      instance.SetDestructor(&destruct_THaEpicsEvtHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaEpicsEvtHandler*)
   {
      return GenerateInitInstanceLocal((::THaEpicsEvtHandler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaEpicsEvtHandler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_THaEvt125Handler(void *p);
   static void deleteArray_THaEvt125Handler(void *p);
   static void destruct_THaEvt125Handler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::THaEvt125Handler*)
   {
      ::THaEvt125Handler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::THaEvt125Handler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("THaEvt125Handler", ::THaEvt125Handler::Class_Version(), "THaEvt125Handler.h", 18,
                  typeid(::THaEvt125Handler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::THaEvt125Handler::Dictionary, isa_proxy, 4,
                  sizeof(::THaEvt125Handler) );
      instance.SetDelete(&delete_THaEvt125Handler);
      instance.SetDeleteArray(&deleteArray_THaEvt125Handler);
      instance.SetDestructor(&destruct_THaEvt125Handler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::THaEvt125Handler*)
   {
      return GenerateInitInstanceLocal((::THaEvt125Handler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::THaEvt125Handler*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr THaFormula::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaFormula::Class_Name()
{
   return "THaFormula";
}

//______________________________________________________________________________
const char *THaFormula::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaFormula*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaFormula::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaFormula*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaFormula::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaFormula*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaFormula::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaFormula*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaOutput::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaOutput::Class_Name()
{
   return "THaOutput";
}

//______________________________________________________________________________
const char *THaOutput::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaOutput*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaOutput::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaOutput*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaOutput::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaOutput*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaOutput::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaOutput*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaVform::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaVform::Class_Name()
{
   return "THaVform";
}

//______________________________________________________________________________
const char *THaVform::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVform*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaVform::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVform*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaVform::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVform*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaVform::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVform*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaVhist::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaVhist::Class_Name()
{
   return "THaVhist";
}

//______________________________________________________________________________
const char *THaVhist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVhist*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaVhist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVhist*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaVhist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVhist*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaVhist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVhist*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaArrayString::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaArrayString::Class_Name()
{
   return "THaArrayString";
}

//______________________________________________________________________________
const char *THaArrayString::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaArrayString*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaArrayString::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaArrayString*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaArrayString::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaArrayString*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaArrayString::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaArrayString*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaVar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaVar::Class_Name()
{
   return "THaVar";
}

//______________________________________________________________________________
const char *THaVar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaVar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaVar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaVar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaVarList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaVarList::Class_Name()
{
   return "THaVarList";
}

//______________________________________________________________________________
const char *THaVarList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVarList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaVarList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVarList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaVarList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVarList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaVarList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVarList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaCut::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaCut::Class_Name()
{
   return "THaCut";
}

//______________________________________________________________________________
const char *THaCut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaCut*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaCut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaCut*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaCut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaCut*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaCut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaCut*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaNamedList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaNamedList::Class_Name()
{
   return "THaNamedList";
}

//______________________________________________________________________________
const char *THaNamedList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaNamedList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaNamedList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaNamedList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaNamedList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaNamedList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaNamedList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaNamedList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaHashList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaHashList::Class_Name()
{
   return "THaHashList";
}

//______________________________________________________________________________
const char *THaHashList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaHashList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaHashList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaHashList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaHashList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaHashList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaHashList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaHashList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaCutList::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaCutList::Class_Name()
{
   return "THaCutList";
}

//______________________________________________________________________________
const char *THaCutList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaCutList*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaCutList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaCutList*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaCutList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaCutList*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaCutList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaCutList*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaInterface::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaInterface::Class_Name()
{
   return "THaInterface";
}

//______________________________________________________________________________
const char *THaInterface::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaInterface*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaInterface::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaInterface*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaInterface::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaInterface*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaInterface::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaInterface*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaRunBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaRunBase::Class_Name()
{
   return "THaRunBase";
}

//______________________________________________________________________________
const char *THaRunBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaRunBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaRunBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaRunBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaRunBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaRunBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaRunBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaRunBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaCodaRun::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaCodaRun::Class_Name()
{
   return "THaCodaRun";
}

//______________________________________________________________________________
const char *THaCodaRun::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaCodaRun*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaCodaRun::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaCodaRun*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaCodaRun::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaCodaRun*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaCodaRun::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaCodaRun*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaRun::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaRun::Class_Name()
{
   return "THaRun";
}

//______________________________________________________________________________
const char *THaRun::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaRun*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaRun::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaRun*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaRun::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaRun*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaRun::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaRun*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaRunParameters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaRunParameters::Class_Name()
{
   return "THaRunParameters";
}

//______________________________________________________________________________
const char *THaRunParameters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaRunParameters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaRunParameters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaRunParameters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaRunParameters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaRunParameters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaRunParameters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaRunParameters*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaDetMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaDetMap::Class_Name()
{
   return "THaDetMap";
}

//______________________________________________________________________________
const char *THaDetMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaDetMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaDetMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaDetMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaDetMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaDetMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaDetMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaDetMap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaAnalysisObject::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaAnalysisObject::Class_Name()
{
   return "THaAnalysisObject";
}

//______________________________________________________________________________
const char *THaAnalysisObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaAnalysisObject*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaAnalysisObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaAnalysisObject*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaAnalysisObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaAnalysisObject*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaAnalysisObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaAnalysisObject*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaApparatus::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaApparatus::Class_Name()
{
   return "THaApparatus";
}

//______________________________________________________________________________
const char *THaApparatus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaApparatus*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaApparatus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaApparatus*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaApparatus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaApparatus*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaApparatus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaApparatus*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaDetectorBase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaDetectorBase::Class_Name()
{
   return "THaDetectorBase";
}

//______________________________________________________________________________
const char *THaDetectorBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaDetectorBase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaDetectorBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaDetectorBase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaDetectorBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaDetectorBase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaDetectorBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaDetectorBase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaDetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaDetector::Class_Name()
{
   return "THaDetector";
}

//______________________________________________________________________________
const char *THaDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaDetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaDetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaDetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaDetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaVertexModule::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaVertexModule::Class_Name()
{
   return "THaVertexModule";
}

//______________________________________________________________________________
const char *THaVertexModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVertexModule*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaVertexModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVertexModule*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaVertexModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVertexModule*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaVertexModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVertexModule*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaTrackInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaTrackInfo::Class_Name()
{
   return "THaTrackInfo";
}

//______________________________________________________________________________
const char *THaTrackInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTrackInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaTrackInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTrackInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaTrackInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTrackInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaTrackInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTrackInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaTrackingModule::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaTrackingModule::Class_Name()
{
   return "THaTrackingModule";
}

//______________________________________________________________________________
const char *THaTrackingModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTrackingModule*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaTrackingModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTrackingModule*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaTrackingModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTrackingModule*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaTrackingModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTrackingModule*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaParticleInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaParticleInfo::Class_Name()
{
   return "THaParticleInfo";
}

//______________________________________________________________________________
const char *THaParticleInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaParticleInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaParticleInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaParticleInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaParticleInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaParticleInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaParticleInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaParticleInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaSpectrometerDetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaSpectrometerDetector::Class_Name()
{
   return "THaSpectrometerDetector";
}

//______________________________________________________________________________
const char *THaSpectrometerDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaSpectrometerDetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaSpectrometerDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaSpectrometerDetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaSpectrometerDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaSpectrometerDetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaSpectrometerDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaSpectrometerDetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaNonTrackingDetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaNonTrackingDetector::Class_Name()
{
   return "THaNonTrackingDetector";
}

//______________________________________________________________________________
const char *THaNonTrackingDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaNonTrackingDetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaNonTrackingDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaNonTrackingDetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaNonTrackingDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaNonTrackingDetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaNonTrackingDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaNonTrackingDetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaPidDetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaPidDetector::Class_Name()
{
   return "THaPidDetector";
}

//______________________________________________________________________________
const char *THaPidDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaPidDetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaPidDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaPidDetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaPidDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaPidDetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaPidDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaPidDetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaSpectrometer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaSpectrometer::Class_Name()
{
   return "THaSpectrometer";
}

//______________________________________________________________________________
const char *THaSpectrometer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaSpectrometer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaSpectrometer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaSpectrometer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaSpectrometer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaSpectrometer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaSpectrometer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaSpectrometer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaHRS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaHRS::Class_Name()
{
   return "THaHRS";
}

//______________________________________________________________________________
const char *THaHRS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaHRS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaHRS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaHRS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaHRS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaHRS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaHRS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaHRS*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BdataLoc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *BdataLoc::Class_Name()
{
   return "BdataLoc";
}

//______________________________________________________________________________
const char *BdataLoc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BdataLoc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int BdataLoc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BdataLoc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BdataLoc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BdataLoc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BdataLoc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BdataLoc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CrateLoc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CrateLoc::Class_Name()
{
   return "CrateLoc";
}

//______________________________________________________________________________
const char *CrateLoc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CrateLoc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CrateLoc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CrateLoc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CrateLoc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CrateLoc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CrateLoc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CrateLoc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CrateLocMulti::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CrateLocMulti::Class_Name()
{
   return "CrateLocMulti";
}

//______________________________________________________________________________
const char *CrateLocMulti::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CrateLocMulti*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CrateLocMulti::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CrateLocMulti*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CrateLocMulti::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CrateLocMulti*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CrateLocMulti::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CrateLocMulti*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr WordLoc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *WordLoc::Class_Name()
{
   return "WordLoc";
}

//______________________________________________________________________________
const char *WordLoc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WordLoc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int WordLoc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::WordLoc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *WordLoc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WordLoc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *WordLoc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::WordLoc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RoclenLoc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RoclenLoc::Class_Name()
{
   return "RoclenLoc";
}

//______________________________________________________________________________
const char *RoclenLoc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RoclenLoc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RoclenLoc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RoclenLoc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RoclenLoc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RoclenLoc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RoclenLoc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RoclenLoc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TrigBitLoc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TrigBitLoc::Class_Name()
{
   return "TrigBitLoc";
}

//______________________________________________________________________________
const char *TrigBitLoc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TrigBitLoc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TrigBitLoc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TrigBitLoc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TrigBitLoc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TrigBitLoc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TrigBitLoc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TrigBitLoc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaDecData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaDecData::Class_Name()
{
   return "THaDecData";
}

//______________________________________________________________________________
const char *THaDecData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaDecData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaDecData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaDecData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaDecData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaDecData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaDecData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaDecData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaTrackingDetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaTrackingDetector::Class_Name()
{
   return "THaTrackingDetector";
}

//______________________________________________________________________________
const char *THaTrackingDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTrackingDetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaTrackingDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTrackingDetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaTrackingDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTrackingDetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaTrackingDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTrackingDetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaSubDetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaSubDetector::Class_Name()
{
   return "THaSubDetector";
}

//______________________________________________________________________________
const char *THaSubDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaSubDetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaSubDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaSubDetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaSubDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaSubDetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaSubDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaSubDetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaRTTI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaRTTI::Class_Name()
{
   return "THaRTTI";
}

//______________________________________________________________________________
const char *THaRTTI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaRTTI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaRTTI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaRTTI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaRTTI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaRTTI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaRTTI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaRTTI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaPhysicsModule::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaPhysicsModule::Class_Name()
{
   return "THaPhysicsModule";
}

//______________________________________________________________________________
const char *THaPhysicsModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaPhysicsModule*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaPhysicsModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaPhysicsModule*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaPhysicsModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaPhysicsModule*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaPhysicsModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaPhysicsModule*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaAnalyzer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaAnalyzer::Class_Name()
{
   return "THaAnalyzer";
}

//______________________________________________________________________________
const char *THaAnalyzer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaAnalyzer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaAnalyzer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaAnalyzer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaAnalyzer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaAnalyzer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaAnalyzer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaAnalyzer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaPrintOption::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaPrintOption::Class_Name()
{
   return "THaPrintOption";
}

//______________________________________________________________________________
const char *THaPrintOption::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaPrintOption*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaPrintOption::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaPrintOption*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaPrintOption::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaPrintOption*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaPrintOption::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaPrintOption*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaBeamInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaBeamInfo::Class_Name()
{
   return "THaBeamInfo";
}

//______________________________________________________________________________
const char *THaBeamInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaBeamInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaBeamInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaBeamInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaBeamInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaBeamInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaBeamInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaBeamInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaBeamModule::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaBeamModule::Class_Name()
{
   return "THaBeamModule";
}

//______________________________________________________________________________
const char *THaBeamModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaBeamModule*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaBeamModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaBeamModule*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaBeamModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaBeamModule*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaBeamModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaBeamModule*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaBeam::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaBeam::Class_Name()
{
   return "THaBeam";
}

//______________________________________________________________________________
const char *THaBeam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaBeam*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaBeam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaBeam*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaBeam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaBeam*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaBeam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaBeam*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaIdealBeam::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaIdealBeam::Class_Name()
{
   return "THaIdealBeam";
}

//______________________________________________________________________________
const char *THaIdealBeam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaIdealBeam*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaIdealBeam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaIdealBeam*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaIdealBeam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaIdealBeam*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaIdealBeam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaIdealBeam*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaRasteredBeam::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaRasteredBeam::Class_Name()
{
   return "THaRasteredBeam";
}

//______________________________________________________________________________
const char *THaRasteredBeam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaRasteredBeam*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaRasteredBeam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaRasteredBeam*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaRasteredBeam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaRasteredBeam*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaRasteredBeam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaRasteredBeam*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaBeamDet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaBeamDet::Class_Name()
{
   return "THaBeamDet";
}

//______________________________________________________________________________
const char *THaBeamDet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaBeamDet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaBeamDet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaBeamDet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaBeamDet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaBeamDet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaBeamDet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaBeamDet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaRaster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaRaster::Class_Name()
{
   return "THaRaster";
}

//______________________________________________________________________________
const char *THaRaster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaRaster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaRaster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaRaster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaRaster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaRaster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaRaster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaRaster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaBPM::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaBPM::Class_Name()
{
   return "THaBPM";
}

//______________________________________________________________________________
const char *THaBPM::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaBPM*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaBPM::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaBPM*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaBPM::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaBPM*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaBPM::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaBPM*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaUnRasteredBeam::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaUnRasteredBeam::Class_Name()
{
   return "THaUnRasteredBeam";
}

//______________________________________________________________________________
const char *THaUnRasteredBeam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaUnRasteredBeam*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaUnRasteredBeam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaUnRasteredBeam*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaUnRasteredBeam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaUnRasteredBeam*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaUnRasteredBeam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaUnRasteredBeam*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaPIDinfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaPIDinfo::Class_Name()
{
   return "THaPIDinfo";
}

//______________________________________________________________________________
const char *THaPIDinfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaPIDinfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaPIDinfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaPIDinfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaPIDinfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaPIDinfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaPIDinfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaPIDinfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaTrack::Class_Name()
{
   return "THaTrack";
}

//______________________________________________________________________________
const char *THaTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaCluster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaCluster::Class_Name()
{
   return "THaCluster";
}

//______________________________________________________________________________
const char *THaCluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaCluster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaCluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaCluster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaCluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaCluster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaCluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaCluster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaScintillator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaScintillator::Class_Name()
{
   return "THaScintillator";
}

//______________________________________________________________________________
const char *THaScintillator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaScintillator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaScintillator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaScintillator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaScintillator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaScintillator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaScintillator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaScintillator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaShower::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaShower::Class_Name()
{
   return "THaShower";
}

//______________________________________________________________________________
const char *THaShower::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaShower*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaShower::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaShower*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaShower::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaShower*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaShower::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaShower*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaTotalShower::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaTotalShower::Class_Name()
{
   return "THaTotalShower";
}

//______________________________________________________________________________
const char *THaTotalShower::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTotalShower*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaTotalShower::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTotalShower*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaTotalShower::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTotalShower*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaTotalShower::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTotalShower*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaCherenkov::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaCherenkov::Class_Name()
{
   return "THaCherenkov";
}

//______________________________________________________________________________
const char *THaCherenkov::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaCherenkov*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaCherenkov::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaCherenkov*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaCherenkov::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaCherenkov*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaCherenkov::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaCherenkov*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaEventHeader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaEventHeader::Class_Name()
{
   return "THaEventHeader";
}

//______________________________________________________________________________
const char *THaEventHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaEventHeader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaEventHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaEventHeader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaEventHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaEventHeader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaEventHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaEventHeader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaEvent::Class_Name()
{
   return "THaEvent";
}

//______________________________________________________________________________
const char *THaEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaTrackID::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaTrackID::Class_Name()
{
   return "THaTrackID";
}

//______________________________________________________________________________
const char *THaTrackID::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTrackID*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaTrackID::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTrackID*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaTrackID::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTrackID*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaTrackID::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTrackID*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaVDC::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaVDC::Class_Name()
{
   return "THaVDC";
}

//______________________________________________________________________________
const char *THaVDC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDC*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaVDC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDC*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaVDC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDC*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaVDC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDC*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaVDCWire::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaVDCWire::Class_Name()
{
   return "THaVDCWire";
}

//______________________________________________________________________________
const char *THaVDCWire::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDCWire*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaVDCWire::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDCWire*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaVDCWire::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDCWire*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaVDCWire::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDCWire*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaVDCCluster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaVDCCluster::Class_Name()
{
   return "THaVDCCluster";
}

//______________________________________________________________________________
const char *THaVDCCluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDCCluster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaVDCCluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDCCluster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaVDCCluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDCCluster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaVDCCluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDCCluster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaVDCHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaVDCHit::Class_Name()
{
   return "THaVDCHit";
}

//______________________________________________________________________________
const char *THaVDCHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDCHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaVDCHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDCHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaVDCHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDCHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaVDCHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDCHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaVDCPlane::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaVDCPlane::Class_Name()
{
   return "THaVDCPlane";
}

//______________________________________________________________________________
const char *THaVDCPlane::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDCPlane*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaVDCPlane::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDCPlane*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaVDCPlane::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDCPlane*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaVDCPlane::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDCPlane*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaVDCPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaVDCPoint::Class_Name()
{
   return "THaVDCPoint";
}

//______________________________________________________________________________
const char *THaVDCPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDCPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaVDCPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDCPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaVDCPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDCPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaVDCPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDCPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaVDCChamber::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaVDCChamber::Class_Name()
{
   return "THaVDCChamber";
}

//______________________________________________________________________________
const char *THaVDCChamber::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDCChamber*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaVDCChamber::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDCChamber*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaVDCChamber::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDCChamber*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaVDCChamber::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDCChamber*)0x0)->GetClass(); }
   return fgIsA;
}

namespace VDC {
//______________________________________________________________________________
atomic_TClass_ptr TimeToDistConv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TimeToDistConv::Class_Name()
{
   return "VDC::TimeToDistConv";
}

//______________________________________________________________________________
const char *TimeToDistConv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::VDC::TimeToDistConv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TimeToDistConv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::VDC::TimeToDistConv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TimeToDistConv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::VDC::TimeToDistConv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TimeToDistConv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::VDC::TimeToDistConv*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace VDC
//______________________________________________________________________________
atomic_TClass_ptr THaVDCTrackID::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaVDCTrackID::Class_Name()
{
   return "THaVDCTrackID";
}

//______________________________________________________________________________
const char *THaVDCTrackID::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDCTrackID*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaVDCTrackID::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDCTrackID*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaVDCTrackID::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDCTrackID*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaVDCTrackID::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDCTrackID*)0x0)->GetClass(); }
   return fgIsA;
}

namespace VDC {
//______________________________________________________________________________
atomic_TClass_ptr AnalyticTTDConv::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AnalyticTTDConv::Class_Name()
{
   return "VDC::AnalyticTTDConv";
}

//______________________________________________________________________________
const char *AnalyticTTDConv::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::VDC::AnalyticTTDConv*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AnalyticTTDConv::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::VDC::AnalyticTTDConv*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AnalyticTTDConv::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::VDC::AnalyticTTDConv*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AnalyticTTDConv::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::VDC::AnalyticTTDConv*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace VDC
//______________________________________________________________________________
atomic_TClass_ptr THaVDCPointPair::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaVDCPointPair::Class_Name()
{
   return "THaVDCPointPair";
}

//______________________________________________________________________________
const char *THaVDCPointPair::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDCPointPair*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaVDCPointPair::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaVDCPointPair*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaVDCPointPair::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDCPointPair*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaVDCPointPair::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaVDCPointPair*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr VDCeff::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *VDCeff::Class_Name()
{
   return "VDCeff";
}

//______________________________________________________________________________
const char *VDCeff::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::VDCeff*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int VDCeff::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::VDCeff*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *VDCeff::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::VDCeff*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *VDCeff::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::VDCeff*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaPrimaryKine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaPrimaryKine::Class_Name()
{
   return "THaPrimaryKine";
}

//______________________________________________________________________________
const char *THaPrimaryKine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaPrimaryKine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaPrimaryKine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaPrimaryKine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaPrimaryKine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaPrimaryKine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaPrimaryKine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaPrimaryKine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaElectronKine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaElectronKine::Class_Name()
{
   return "THaElectronKine";
}

//______________________________________________________________________________
const char *THaElectronKine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaElectronKine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaElectronKine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaElectronKine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaElectronKine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaElectronKine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaElectronKine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaElectronKine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaReactionPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaReactionPoint::Class_Name()
{
   return "THaReactionPoint";
}

//______________________________________________________________________________
const char *THaReactionPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaReactionPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaReactionPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaReactionPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaReactionPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaReactionPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaReactionPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaReactionPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaReacPointFoil::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaReacPointFoil::Class_Name()
{
   return "THaReacPointFoil";
}

//______________________________________________________________________________
const char *THaReacPointFoil::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaReacPointFoil*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaReacPointFoil::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaReacPointFoil*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaReacPointFoil::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaReacPointFoil*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaReacPointFoil::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaReacPointFoil*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaTwoarmVertex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaTwoarmVertex::Class_Name()
{
   return "THaTwoarmVertex";
}

//______________________________________________________________________________
const char *THaTwoarmVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTwoarmVertex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaTwoarmVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTwoarmVertex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaTwoarmVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTwoarmVertex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaTwoarmVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTwoarmVertex*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaAvgVertex::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaAvgVertex::Class_Name()
{
   return "THaAvgVertex";
}

//______________________________________________________________________________
const char *THaAvgVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaAvgVertex*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaAvgVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaAvgVertex*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaAvgVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaAvgVertex*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaAvgVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaAvgVertex*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaExtTarCor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaExtTarCor::Class_Name()
{
   return "THaExtTarCor";
}

//______________________________________________________________________________
const char *THaExtTarCor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaExtTarCor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaExtTarCor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaExtTarCor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaExtTarCor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaExtTarCor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaExtTarCor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaExtTarCor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaDebugModule::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaDebugModule::Class_Name()
{
   return "THaDebugModule";
}

//______________________________________________________________________________
const char *THaDebugModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaDebugModule*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaDebugModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaDebugModule*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaDebugModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaDebugModule*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaDebugModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaDebugModule*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaGoldenTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaGoldenTrack::Class_Name()
{
   return "THaGoldenTrack";
}

//______________________________________________________________________________
const char *THaGoldenTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaGoldenTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaGoldenTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaGoldenTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaGoldenTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaGoldenTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaGoldenTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaGoldenTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaSecondaryKine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaSecondaryKine::Class_Name()
{
   return "THaSecondaryKine";
}

//______________________________________________________________________________
const char *THaSecondaryKine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaSecondaryKine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaSecondaryKine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaSecondaryKine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaSecondaryKine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaSecondaryKine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaSecondaryKine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaSecondaryKine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaCoincTime::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaCoincTime::Class_Name()
{
   return "THaCoincTime";
}

//______________________________________________________________________________
const char *THaCoincTime::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaCoincTime*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaCoincTime::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaCoincTime*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaCoincTime::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaCoincTime*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaCoincTime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaCoincTime*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaS2CoincTime::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaS2CoincTime::Class_Name()
{
   return "THaS2CoincTime";
}

//______________________________________________________________________________
const char *THaS2CoincTime::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaS2CoincTime*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaS2CoincTime::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaS2CoincTime*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaS2CoincTime::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaS2CoincTime*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaS2CoincTime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaS2CoincTime*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaTrackProj::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaTrackProj::Class_Name()
{
   return "THaTrackProj";
}

//______________________________________________________________________________
const char *THaTrackProj::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTrackProj*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaTrackProj::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTrackProj*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaTrackProj::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTrackProj*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaTrackProj::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTrackProj*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaPostProcess::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaPostProcess::Class_Name()
{
   return "THaPostProcess";
}

//______________________________________________________________________________
const char *THaPostProcess::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaPostProcess*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaPostProcess::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaPostProcess*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaPostProcess::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaPostProcess*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaPostProcess::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaPostProcess*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaFilter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaFilter::Class_Name()
{
   return "THaFilter";
}

//______________________________________________________________________________
const char *THaFilter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaFilter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaFilter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaFilter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaFilter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaFilter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaFilter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaFilter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaElossCorrection::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaElossCorrection::Class_Name()
{
   return "THaElossCorrection";
}

//______________________________________________________________________________
const char *THaElossCorrection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaElossCorrection*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaElossCorrection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaElossCorrection*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaElossCorrection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaElossCorrection*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaElossCorrection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaElossCorrection*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaTrackEloss::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaTrackEloss::Class_Name()
{
   return "THaTrackEloss";
}

//______________________________________________________________________________
const char *THaTrackEloss::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTrackEloss*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaTrackEloss::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTrackEloss*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaTrackEloss::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTrackEloss*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaTrackEloss::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTrackEloss*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaEpicsEbeam::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaEpicsEbeam::Class_Name()
{
   return "THaEpicsEbeam";
}

//______________________________________________________________________________
const char *THaEpicsEbeam::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaEpicsEbeam*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaEpicsEbeam::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaEpicsEbeam*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaEpicsEbeam::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaEpicsEbeam*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaEpicsEbeam::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaEpicsEbeam*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaBeamEloss::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaBeamEloss::Class_Name()
{
   return "THaBeamEloss";
}

//______________________________________________________________________________
const char *THaBeamEloss::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaBeamEloss*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaBeamEloss::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaBeamEloss*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaBeamEloss::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaBeamEloss*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaBeamEloss::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaBeamEloss*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaTrackOut::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaTrackOut::Class_Name()
{
   return "THaTrackOut";
}

//______________________________________________________________________________
const char *THaTrackOut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTrackOut*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaTrackOut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTrackOut*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaTrackOut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTrackOut*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaTrackOut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTrackOut*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaTriggerTime::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaTriggerTime::Class_Name()
{
   return "THaTriggerTime";
}

//______________________________________________________________________________
const char *THaTriggerTime::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTriggerTime*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaTriggerTime::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTriggerTime*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaTriggerTime::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTriggerTime*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaTriggerTime::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTriggerTime*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaHelicityDet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaHelicityDet::Class_Name()
{
   return "THaHelicityDet";
}

//______________________________________________________________________________
const char *THaHelicityDet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaHelicityDet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaHelicityDet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaHelicityDet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaHelicityDet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaHelicityDet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaHelicityDet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaHelicityDet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaG0HelicityReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaG0HelicityReader::Class_Name()
{
   return "THaG0HelicityReader";
}

//______________________________________________________________________________
const char *THaG0HelicityReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaG0HelicityReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaG0HelicityReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaG0HelicityReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaG0HelicityReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaG0HelicityReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaG0HelicityReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaG0HelicityReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaG0Helicity::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaG0Helicity::Class_Name()
{
   return "THaG0Helicity";
}

//______________________________________________________________________________
const char *THaG0Helicity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaG0Helicity*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaG0Helicity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaG0Helicity*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaG0Helicity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaG0Helicity*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaG0Helicity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaG0Helicity*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaADCHelicity::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaADCHelicity::Class_Name()
{
   return "THaADCHelicity";
}

//______________________________________________________________________________
const char *THaADCHelicity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaADCHelicity*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaADCHelicity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaADCHelicity*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaADCHelicity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaADCHelicity*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaADCHelicity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaADCHelicity*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaHelicity::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaHelicity::Class_Name()
{
   return "THaHelicity";
}

//______________________________________________________________________________
const char *THaHelicity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaHelicity*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaHelicity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaHelicity*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaHelicity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaHelicity*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaHelicity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaHelicity*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaPhotoReaction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaPhotoReaction::Class_Name()
{
   return "THaPhotoReaction";
}

//______________________________________________________________________________
const char *THaPhotoReaction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaPhotoReaction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaPhotoReaction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaPhotoReaction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaPhotoReaction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaPhotoReaction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaPhotoReaction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaPhotoReaction*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaSAProtonEP::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaSAProtonEP::Class_Name()
{
   return "THaSAProtonEP";
}

//______________________________________________________________________________
const char *THaSAProtonEP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaSAProtonEP*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaSAProtonEP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaSAProtonEP*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaSAProtonEP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaSAProtonEP*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaSAProtonEP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaSAProtonEP*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaTextvars::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaTextvars::Class_Name()
{
   return "THaTextvars";
}

//______________________________________________________________________________
const char *THaTextvars::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTextvars*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaTextvars::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaTextvars*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaTextvars::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTextvars*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaTextvars::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaTextvars*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaQWEAKHelicityReader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaQWEAKHelicityReader::Class_Name()
{
   return "THaQWEAKHelicityReader";
}

//______________________________________________________________________________
const char *THaQWEAKHelicityReader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaQWEAKHelicityReader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaQWEAKHelicityReader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaQWEAKHelicityReader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaQWEAKHelicityReader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaQWEAKHelicityReader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaQWEAKHelicityReader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaQWEAKHelicityReader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaQWEAKHelicity::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaQWEAKHelicity::Class_Name()
{
   return "THaQWEAKHelicity";
}

//______________________________________________________________________________
const char *THaQWEAKHelicity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaQWEAKHelicity*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaQWEAKHelicity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaQWEAKHelicity*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaQWEAKHelicity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaQWEAKHelicity*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaQWEAKHelicity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaQWEAKHelicity*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaEvtTypeHandler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaEvtTypeHandler::Class_Name()
{
   return "THaEvtTypeHandler";
}

//______________________________________________________________________________
const char *THaEvtTypeHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaEvtTypeHandler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaEvtTypeHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaEvtTypeHandler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaEvtTypeHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaEvtTypeHandler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaEvtTypeHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaEvtTypeHandler*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaScalerEvtHandler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaScalerEvtHandler::Class_Name()
{
   return "THaScalerEvtHandler";
}

//______________________________________________________________________________
const char *THaScalerEvtHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaScalerEvtHandler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaScalerEvtHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaScalerEvtHandler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaScalerEvtHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaScalerEvtHandler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaScalerEvtHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaScalerEvtHandler*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaEpicsEvtHandler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaEpicsEvtHandler::Class_Name()
{
   return "THaEpicsEvtHandler";
}

//______________________________________________________________________________
const char *THaEpicsEvtHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaEpicsEvtHandler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaEpicsEvtHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaEpicsEvtHandler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaEpicsEvtHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaEpicsEvtHandler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaEpicsEvtHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaEpicsEvtHandler*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr THaEvt125Handler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *THaEvt125Handler::Class_Name()
{
   return "THaEvt125Handler";
}

//______________________________________________________________________________
const char *THaEvt125Handler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaEvt125Handler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int THaEvt125Handler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::THaEvt125Handler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *THaEvt125Handler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaEvt125Handler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *THaEvt125Handler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::THaEvt125Handler*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void THaFormula::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaFormula.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaFormula::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaFormula::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaFormula(void *p) {
      return  p ? new(p) ::THaFormula : new ::THaFormula;
   }
   static void *newArray_THaFormula(Long_t nElements, void *p) {
      return p ? new(p) ::THaFormula[nElements] : new ::THaFormula[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaFormula(void *p) {
      delete ((::THaFormula*)p);
   }
   static void deleteArray_THaFormula(void *p) {
      delete [] ((::THaFormula*)p);
   }
   static void destruct_THaFormula(void *p) {
      typedef ::THaFormula current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaFormula

//______________________________________________________________________________
void THaOutput::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaOutput.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaOutput::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaOutput::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaOutput(void *p) {
      return  p ? new(p) ::THaOutput : new ::THaOutput;
   }
   static void *newArray_THaOutput(Long_t nElements, void *p) {
      return p ? new(p) ::THaOutput[nElements] : new ::THaOutput[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaOutput(void *p) {
      delete ((::THaOutput*)p);
   }
   static void deleteArray_THaOutput(void *p) {
      delete [] ((::THaOutput*)p);
   }
   static void destruct_THaOutput(void *p) {
      typedef ::THaOutput current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaOutput

//______________________________________________________________________________
void THaVform::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaVform.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaVform::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaVform::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaVform(void *p) {
      return  p ? new(p) ::THaVform : new ::THaVform;
   }
   static void *newArray_THaVform(Long_t nElements, void *p) {
      return p ? new(p) ::THaVform[nElements] : new ::THaVform[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaVform(void *p) {
      delete ((::THaVform*)p);
   }
   static void deleteArray_THaVform(void *p) {
      delete [] ((::THaVform*)p);
   }
   static void destruct_THaVform(void *p) {
      typedef ::THaVform current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaVform

//______________________________________________________________________________
void THaVhist::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaVhist.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaVhist::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaVhist::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaVhist(void *p) {
      delete ((::THaVhist*)p);
   }
   static void deleteArray_THaVhist(void *p) {
      delete [] ((::THaVhist*)p);
   }
   static void destruct_THaVhist(void *p) {
      typedef ::THaVhist current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaVhist

//______________________________________________________________________________
void THaArrayString::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaArrayString.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaArrayString::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaArrayString::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaArrayString(void *p) {
      return  p ? new(p) ::THaArrayString : new ::THaArrayString;
   }
   static void *newArray_THaArrayString(Long_t nElements, void *p) {
      return p ? new(p) ::THaArrayString[nElements] : new ::THaArrayString[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaArrayString(void *p) {
      delete ((::THaArrayString*)p);
   }
   static void deleteArray_THaArrayString(void *p) {
      delete [] ((::THaArrayString*)p);
   }
   static void destruct_THaArrayString(void *p) {
      typedef ::THaArrayString current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaArrayString

//______________________________________________________________________________
void THaVar::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaVar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaVar::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaVar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaVar(void *p) {
      return  p ? new(p) ::THaVar : new ::THaVar;
   }
   static void *newArray_THaVar(Long_t nElements, void *p) {
      return p ? new(p) ::THaVar[nElements] : new ::THaVar[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaVar(void *p) {
      delete ((::THaVar*)p);
   }
   static void deleteArray_THaVar(void *p) {
      delete [] ((::THaVar*)p);
   }
   static void destruct_THaVar(void *p) {
      typedef ::THaVar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaVar

//______________________________________________________________________________
void THaVarList::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaVarList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaVarList::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaVarList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaVarList(void *p) {
      return  p ? new(p) ::THaVarList : new ::THaVarList;
   }
   static void *newArray_THaVarList(Long_t nElements, void *p) {
      return p ? new(p) ::THaVarList[nElements] : new ::THaVarList[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaVarList(void *p) {
      delete ((::THaVarList*)p);
   }
   static void deleteArray_THaVarList(void *p) {
      delete [] ((::THaVarList*)p);
   }
   static void destruct_THaVarList(void *p) {
      typedef ::THaVarList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THaVarList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THaVarList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THaVarList

//______________________________________________________________________________
void THaCut::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaCut.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaCut::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaCut::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaCut(void *p) {
      return  p ? new(p) ::THaCut : new ::THaCut;
   }
   static void *newArray_THaCut(Long_t nElements, void *p) {
      return p ? new(p) ::THaCut[nElements] : new ::THaCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaCut(void *p) {
      delete ((::THaCut*)p);
   }
   static void deleteArray_THaCut(void *p) {
      delete [] ((::THaCut*)p);
   }
   static void destruct_THaCut(void *p) {
      typedef ::THaCut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaCut

//______________________________________________________________________________
void THaNamedList::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaNamedList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaNamedList::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaNamedList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaNamedList(void *p) {
      return  p ? new(p) ::THaNamedList : new ::THaNamedList;
   }
   static void *newArray_THaNamedList(Long_t nElements, void *p) {
      return p ? new(p) ::THaNamedList[nElements] : new ::THaNamedList[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaNamedList(void *p) {
      delete ((::THaNamedList*)p);
   }
   static void deleteArray_THaNamedList(void *p) {
      delete [] ((::THaNamedList*)p);
   }
   static void destruct_THaNamedList(void *p) {
      typedef ::THaNamedList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THaNamedList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THaNamedList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THaNamedList

//______________________________________________________________________________
void THaHashList::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaHashList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaHashList::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaHashList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaHashList(void *p) {
      return  p ? new(p) ::THaHashList : new ::THaHashList;
   }
   static void *newArray_THaHashList(Long_t nElements, void *p) {
      return p ? new(p) ::THaHashList[nElements] : new ::THaHashList[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaHashList(void *p) {
      delete ((::THaHashList*)p);
   }
   static void deleteArray_THaHashList(void *p) {
      delete [] ((::THaHashList*)p);
   }
   static void destruct_THaHashList(void *p) {
      typedef ::THaHashList current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_THaHashList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::THaHashList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::THaHashList

//______________________________________________________________________________
void THaCutList::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaCutList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaCutList::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaCutList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaCutList(void *p) {
      return  p ? new(p) ::THaCutList : new ::THaCutList;
   }
   static void *newArray_THaCutList(Long_t nElements, void *p) {
      return p ? new(p) ::THaCutList[nElements] : new ::THaCutList[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaCutList(void *p) {
      delete ((::THaCutList*)p);
   }
   static void deleteArray_THaCutList(void *p) {
      delete [] ((::THaCutList*)p);
   }
   static void destruct_THaCutList(void *p) {
      typedef ::THaCutList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaCutList

//______________________________________________________________________________
void THaInterface::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaInterface.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaInterface::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaInterface::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaInterface(void *p) {
      delete ((::THaInterface*)p);
   }
   static void deleteArray_THaInterface(void *p) {
      delete [] ((::THaInterface*)p);
   }
   static void destruct_THaInterface(void *p) {
      typedef ::THaInterface current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaInterface

//______________________________________________________________________________
void THaRunBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaRunBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaRunBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaRunBase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaRunBase(void *p) {
      delete ((::THaRunBase*)p);
   }
   static void deleteArray_THaRunBase(void *p) {
      delete [] ((::THaRunBase*)p);
   }
   static void destruct_THaRunBase(void *p) {
      typedef ::THaRunBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaRunBase

//______________________________________________________________________________
void THaCodaRun::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaCodaRun.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaCodaRun::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaCodaRun::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaCodaRun(void *p) {
      delete ((::THaCodaRun*)p);
   }
   static void deleteArray_THaCodaRun(void *p) {
      delete [] ((::THaCodaRun*)p);
   }
   static void destruct_THaCodaRun(void *p) {
      typedef ::THaCodaRun current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaCodaRun

//______________________________________________________________________________
void THaRun::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaRun.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaRun::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaRun::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaRun(void *p) {
      return  p ? new(p) ::THaRun : new ::THaRun;
   }
   static void *newArray_THaRun(Long_t nElements, void *p) {
      return p ? new(p) ::THaRun[nElements] : new ::THaRun[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaRun(void *p) {
      delete ((::THaRun*)p);
   }
   static void deleteArray_THaRun(void *p) {
      delete [] ((::THaRun*)p);
   }
   static void destruct_THaRun(void *p) {
      typedef ::THaRun current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaRun

//______________________________________________________________________________
void THaRunParameters::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaRunParameters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaRunParameters::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaRunParameters::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaRunParameters(void *p) {
      return  p ? new(p) ::THaRunParameters : new ::THaRunParameters;
   }
   static void *newArray_THaRunParameters(Long_t nElements, void *p) {
      return p ? new(p) ::THaRunParameters[nElements] : new ::THaRunParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaRunParameters(void *p) {
      delete ((::THaRunParameters*)p);
   }
   static void deleteArray_THaRunParameters(void *p) {
      delete [] ((::THaRunParameters*)p);
   }
   static void destruct_THaRunParameters(void *p) {
      typedef ::THaRunParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaRunParameters

//______________________________________________________________________________
void THaDetMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaDetMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaDetMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaDetMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaDetMap(void *p) {
      return  p ? new(p) ::THaDetMap : new ::THaDetMap;
   }
   static void *newArray_THaDetMap(Long_t nElements, void *p) {
      return p ? new(p) ::THaDetMap[nElements] : new ::THaDetMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaDetMap(void *p) {
      delete ((::THaDetMap*)p);
   }
   static void deleteArray_THaDetMap(void *p) {
      delete [] ((::THaDetMap*)p);
   }
   static void destruct_THaDetMap(void *p) {
      typedef ::THaDetMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaDetMap

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaDetMapcLcLModule(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::THaDetMap::Module : new ::THaDetMap::Module;
   }
   static void *newArray_THaDetMapcLcLModule(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::THaDetMap::Module[nElements] : new ::THaDetMap::Module[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaDetMapcLcLModule(void *p) {
      delete ((::THaDetMap::Module*)p);
   }
   static void deleteArray_THaDetMapcLcLModule(void *p) {
      delete [] ((::THaDetMap::Module*)p);
   }
   static void destruct_THaDetMapcLcLModule(void *p) {
      typedef ::THaDetMap::Module current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaDetMap::Module

//______________________________________________________________________________
void THaAnalysisObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaAnalysisObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaAnalysisObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaAnalysisObject::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaAnalysisObject(void *p) {
      return  p ? new(p) ::THaAnalysisObject : new ::THaAnalysisObject;
   }
   static void *newArray_THaAnalysisObject(Long_t nElements, void *p) {
      return p ? new(p) ::THaAnalysisObject[nElements] : new ::THaAnalysisObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaAnalysisObject(void *p) {
      delete ((::THaAnalysisObject*)p);
   }
   static void deleteArray_THaAnalysisObject(void *p) {
      delete [] ((::THaAnalysisObject*)p);
   }
   static void destruct_THaAnalysisObject(void *p) {
      typedef ::THaAnalysisObject current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaAnalysisObject

//______________________________________________________________________________
void THaApparatus::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaApparatus.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaApparatus::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaApparatus::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaApparatus(void *p) {
      delete ((::THaApparatus*)p);
   }
   static void deleteArray_THaApparatus(void *p) {
      delete [] ((::THaApparatus*)p);
   }
   static void destruct_THaApparatus(void *p) {
      typedef ::THaApparatus current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaApparatus

//______________________________________________________________________________
void THaDetectorBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaDetectorBase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaDetectorBase::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaDetectorBase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaDetectorBase(void *p) {
      delete ((::THaDetectorBase*)p);
   }
   static void deleteArray_THaDetectorBase(void *p) {
      delete [] ((::THaDetectorBase*)p);
   }
   static void destruct_THaDetectorBase(void *p) {
      typedef ::THaDetectorBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaDetectorBase

//______________________________________________________________________________
void THaDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaDetector(void *p) {
      delete ((::THaDetector*)p);
   }
   static void deleteArray_THaDetector(void *p) {
      delete [] ((::THaDetector*)p);
   }
   static void destruct_THaDetector(void *p) {
      typedef ::THaDetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaDetector

//______________________________________________________________________________
void THaVertexModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaVertexModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaVertexModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaVertexModule::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaVertexModule(void *p) {
      delete ((::THaVertexModule*)p);
   }
   static void deleteArray_THaVertexModule(void *p) {
      delete [] ((::THaVertexModule*)p);
   }
   static void destruct_THaVertexModule(void *p) {
      typedef ::THaVertexModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaVertexModule

//______________________________________________________________________________
void THaTrackInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaTrackInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaTrackInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaTrackInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaTrackInfo(void *p) {
      return  p ? new(p) ::THaTrackInfo : new ::THaTrackInfo;
   }
   static void *newArray_THaTrackInfo(Long_t nElements, void *p) {
      return p ? new(p) ::THaTrackInfo[nElements] : new ::THaTrackInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaTrackInfo(void *p) {
      delete ((::THaTrackInfo*)p);
   }
   static void deleteArray_THaTrackInfo(void *p) {
      delete [] ((::THaTrackInfo*)p);
   }
   static void destruct_THaTrackInfo(void *p) {
      typedef ::THaTrackInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaTrackInfo

//______________________________________________________________________________
void THaTrackingModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaTrackingModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaTrackingModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaTrackingModule::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaTrackingModule(void *p) {
      return  p ? new(p) ::THaTrackingModule : new ::THaTrackingModule;
   }
   static void *newArray_THaTrackingModule(Long_t nElements, void *p) {
      return p ? new(p) ::THaTrackingModule[nElements] : new ::THaTrackingModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaTrackingModule(void *p) {
      delete ((::THaTrackingModule*)p);
   }
   static void deleteArray_THaTrackingModule(void *p) {
      delete [] ((::THaTrackingModule*)p);
   }
   static void destruct_THaTrackingModule(void *p) {
      typedef ::THaTrackingModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaTrackingModule

//______________________________________________________________________________
void THaParticleInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaParticleInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaParticleInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaParticleInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaParticleInfo(void *p) {
      return  p ? new(p) ::THaParticleInfo : new ::THaParticleInfo;
   }
   static void *newArray_THaParticleInfo(Long_t nElements, void *p) {
      return p ? new(p) ::THaParticleInfo[nElements] : new ::THaParticleInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaParticleInfo(void *p) {
      delete ((::THaParticleInfo*)p);
   }
   static void deleteArray_THaParticleInfo(void *p) {
      delete [] ((::THaParticleInfo*)p);
   }
   static void destruct_THaParticleInfo(void *p) {
      typedef ::THaParticleInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaParticleInfo

//______________________________________________________________________________
void THaSpectrometerDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaSpectrometerDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaSpectrometerDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaSpectrometerDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaSpectrometerDetector(void *p) {
      delete ((::THaSpectrometerDetector*)p);
   }
   static void deleteArray_THaSpectrometerDetector(void *p) {
      delete [] ((::THaSpectrometerDetector*)p);
   }
   static void destruct_THaSpectrometerDetector(void *p) {
      typedef ::THaSpectrometerDetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaSpectrometerDetector

//______________________________________________________________________________
void THaNonTrackingDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaNonTrackingDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaNonTrackingDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaNonTrackingDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaNonTrackingDetector(void *p) {
      delete ((::THaNonTrackingDetector*)p);
   }
   static void deleteArray_THaNonTrackingDetector(void *p) {
      delete [] ((::THaNonTrackingDetector*)p);
   }
   static void destruct_THaNonTrackingDetector(void *p) {
      typedef ::THaNonTrackingDetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaNonTrackingDetector

//______________________________________________________________________________
void THaPidDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaPidDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaPidDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaPidDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaPidDetector(void *p) {
      delete ((::THaPidDetector*)p);
   }
   static void deleteArray_THaPidDetector(void *p) {
      delete [] ((::THaPidDetector*)p);
   }
   static void destruct_THaPidDetector(void *p) {
      typedef ::THaPidDetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaPidDetector

//______________________________________________________________________________
void THaSpectrometer::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaSpectrometer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaSpectrometer::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaSpectrometer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaSpectrometer(void *p) {
      delete ((::THaSpectrometer*)p);
   }
   static void deleteArray_THaSpectrometer(void *p) {
      delete [] ((::THaSpectrometer*)p);
   }
   static void destruct_THaSpectrometer(void *p) {
      typedef ::THaSpectrometer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaSpectrometer

//______________________________________________________________________________
void THaHRS::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaHRS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaHRS::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaHRS::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaHRS(void *p) {
      delete ((::THaHRS*)p);
   }
   static void deleteArray_THaHRS(void *p) {
      delete [] ((::THaHRS*)p);
   }
   static void destruct_THaHRS(void *p) {
      typedef ::THaHRS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaHRS

//______________________________________________________________________________
void BdataLoc::Streamer(TBuffer &R__b)
{
   // Stream an object of class BdataLoc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BdataLoc::Class(),this);
   } else {
      R__b.WriteClassBuffer(BdataLoc::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BdataLoc(void *p) {
      delete ((::BdataLoc*)p);
   }
   static void deleteArray_BdataLoc(void *p) {
      delete [] ((::BdataLoc*)p);
   }
   static void destruct_BdataLoc(void *p) {
      typedef ::BdataLoc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BdataLoc

//______________________________________________________________________________
void CrateLoc::Streamer(TBuffer &R__b)
{
   // Stream an object of class CrateLoc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CrateLoc::Class(),this);
   } else {
      R__b.WriteClassBuffer(CrateLoc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CrateLoc(void *p) {
      return  p ? new(p) ::CrateLoc : new ::CrateLoc;
   }
   static void *newArray_CrateLoc(Long_t nElements, void *p) {
      return p ? new(p) ::CrateLoc[nElements] : new ::CrateLoc[nElements];
   }
   // Wrapper around operator delete
   static void delete_CrateLoc(void *p) {
      delete ((::CrateLoc*)p);
   }
   static void deleteArray_CrateLoc(void *p) {
      delete [] ((::CrateLoc*)p);
   }
   static void destruct_CrateLoc(void *p) {
      typedef ::CrateLoc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CrateLoc

//______________________________________________________________________________
void CrateLocMulti::Streamer(TBuffer &R__b)
{
   // Stream an object of class CrateLocMulti.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CrateLocMulti::Class(),this);
   } else {
      R__b.WriteClassBuffer(CrateLocMulti::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CrateLocMulti(void *p) {
      return  p ? new(p) ::CrateLocMulti : new ::CrateLocMulti;
   }
   static void *newArray_CrateLocMulti(Long_t nElements, void *p) {
      return p ? new(p) ::CrateLocMulti[nElements] : new ::CrateLocMulti[nElements];
   }
   // Wrapper around operator delete
   static void delete_CrateLocMulti(void *p) {
      delete ((::CrateLocMulti*)p);
   }
   static void deleteArray_CrateLocMulti(void *p) {
      delete [] ((::CrateLocMulti*)p);
   }
   static void destruct_CrateLocMulti(void *p) {
      typedef ::CrateLocMulti current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CrateLocMulti

//______________________________________________________________________________
void WordLoc::Streamer(TBuffer &R__b)
{
   // Stream an object of class WordLoc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(WordLoc::Class(),this);
   } else {
      R__b.WriteClassBuffer(WordLoc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_WordLoc(void *p) {
      return  p ? new(p) ::WordLoc : new ::WordLoc;
   }
   static void *newArray_WordLoc(Long_t nElements, void *p) {
      return p ? new(p) ::WordLoc[nElements] : new ::WordLoc[nElements];
   }
   // Wrapper around operator delete
   static void delete_WordLoc(void *p) {
      delete ((::WordLoc*)p);
   }
   static void deleteArray_WordLoc(void *p) {
      delete [] ((::WordLoc*)p);
   }
   static void destruct_WordLoc(void *p) {
      typedef ::WordLoc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::WordLoc

//______________________________________________________________________________
void RoclenLoc::Streamer(TBuffer &R__b)
{
   // Stream an object of class RoclenLoc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RoclenLoc::Class(),this);
   } else {
      R__b.WriteClassBuffer(RoclenLoc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RoclenLoc(void *p) {
      return  p ? new(p) ::RoclenLoc : new ::RoclenLoc;
   }
   static void *newArray_RoclenLoc(Long_t nElements, void *p) {
      return p ? new(p) ::RoclenLoc[nElements] : new ::RoclenLoc[nElements];
   }
   // Wrapper around operator delete
   static void delete_RoclenLoc(void *p) {
      delete ((::RoclenLoc*)p);
   }
   static void deleteArray_RoclenLoc(void *p) {
      delete [] ((::RoclenLoc*)p);
   }
   static void destruct_RoclenLoc(void *p) {
      typedef ::RoclenLoc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RoclenLoc

//______________________________________________________________________________
void TrigBitLoc::Streamer(TBuffer &R__b)
{
   // Stream an object of class TrigBitLoc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TrigBitLoc::Class(),this);
   } else {
      R__b.WriteClassBuffer(TrigBitLoc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TrigBitLoc(void *p) {
      return  p ? new(p) ::TrigBitLoc : new ::TrigBitLoc;
   }
   static void *newArray_TrigBitLoc(Long_t nElements, void *p) {
      return p ? new(p) ::TrigBitLoc[nElements] : new ::TrigBitLoc[nElements];
   }
   // Wrapper around operator delete
   static void delete_TrigBitLoc(void *p) {
      delete ((::TrigBitLoc*)p);
   }
   static void deleteArray_TrigBitLoc(void *p) {
      delete [] ((::TrigBitLoc*)p);
   }
   static void destruct_TrigBitLoc(void *p) {
      typedef ::TrigBitLoc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TrigBitLoc

//______________________________________________________________________________
void THaDecData::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaDecData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaDecData::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaDecData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaDecData(void *p) {
      return  p ? new(p) ::THaDecData : new ::THaDecData;
   }
   static void *newArray_THaDecData(Long_t nElements, void *p) {
      return p ? new(p) ::THaDecData[nElements] : new ::THaDecData[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaDecData(void *p) {
      delete ((::THaDecData*)p);
   }
   static void deleteArray_THaDecData(void *p) {
      delete [] ((::THaDecData*)p);
   }
   static void destruct_THaDecData(void *p) {
      typedef ::THaDecData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaDecData

//______________________________________________________________________________
void THaTrackingDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaTrackingDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaTrackingDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaTrackingDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaTrackingDetector(void *p) {
      delete ((::THaTrackingDetector*)p);
   }
   static void deleteArray_THaTrackingDetector(void *p) {
      delete [] ((::THaTrackingDetector*)p);
   }
   static void destruct_THaTrackingDetector(void *p) {
      typedef ::THaTrackingDetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaTrackingDetector

//______________________________________________________________________________
void THaSubDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaSubDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaSubDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaSubDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaSubDetector(void *p) {
      delete ((::THaSubDetector*)p);
   }
   static void deleteArray_THaSubDetector(void *p) {
      delete [] ((::THaSubDetector*)p);
   }
   static void destruct_THaSubDetector(void *p) {
      typedef ::THaSubDetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaSubDetector

//______________________________________________________________________________
void THaRTTI::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaRTTI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaRTTI::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaRTTI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaRTTI(void *p) {
      return  p ? new(p) ::THaRTTI : new ::THaRTTI;
   }
   static void *newArray_THaRTTI(Long_t nElements, void *p) {
      return p ? new(p) ::THaRTTI[nElements] : new ::THaRTTI[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaRTTI(void *p) {
      delete ((::THaRTTI*)p);
   }
   static void deleteArray_THaRTTI(void *p) {
      delete [] ((::THaRTTI*)p);
   }
   static void destruct_THaRTTI(void *p) {
      typedef ::THaRTTI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaRTTI

//______________________________________________________________________________
void THaPhysicsModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaPhysicsModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaPhysicsModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaPhysicsModule::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaPhysicsModule(void *p) {
      delete ((::THaPhysicsModule*)p);
   }
   static void deleteArray_THaPhysicsModule(void *p) {
      delete [] ((::THaPhysicsModule*)p);
   }
   static void destruct_THaPhysicsModule(void *p) {
      typedef ::THaPhysicsModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaPhysicsModule

//______________________________________________________________________________
void THaAnalyzer::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaAnalyzer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaAnalyzer::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaAnalyzer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaAnalyzer(void *p) {
      return  p ? new(p) ::THaAnalyzer : new ::THaAnalyzer;
   }
   static void *newArray_THaAnalyzer(Long_t nElements, void *p) {
      return p ? new(p) ::THaAnalyzer[nElements] : new ::THaAnalyzer[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaAnalyzer(void *p) {
      delete ((::THaAnalyzer*)p);
   }
   static void deleteArray_THaAnalyzer(void *p) {
      delete [] ((::THaAnalyzer*)p);
   }
   static void destruct_THaAnalyzer(void *p) {
      typedef ::THaAnalyzer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaAnalyzer

//______________________________________________________________________________
void THaPrintOption::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaPrintOption.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaPrintOption::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaPrintOption::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaPrintOption(void *p) {
      return  p ? new(p) ::THaPrintOption : new ::THaPrintOption;
   }
   static void *newArray_THaPrintOption(Long_t nElements, void *p) {
      return p ? new(p) ::THaPrintOption[nElements] : new ::THaPrintOption[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaPrintOption(void *p) {
      delete ((::THaPrintOption*)p);
   }
   static void deleteArray_THaPrintOption(void *p) {
      delete [] ((::THaPrintOption*)p);
   }
   static void destruct_THaPrintOption(void *p) {
      typedef ::THaPrintOption current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaPrintOption

//______________________________________________________________________________
void THaBeamInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaBeamInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaBeamInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaBeamInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaBeamInfo(void *p) {
      return  p ? new(p) ::THaBeamInfo : new ::THaBeamInfo;
   }
   static void *newArray_THaBeamInfo(Long_t nElements, void *p) {
      return p ? new(p) ::THaBeamInfo[nElements] : new ::THaBeamInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaBeamInfo(void *p) {
      delete ((::THaBeamInfo*)p);
   }
   static void deleteArray_THaBeamInfo(void *p) {
      delete [] ((::THaBeamInfo*)p);
   }
   static void destruct_THaBeamInfo(void *p) {
      typedef ::THaBeamInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaBeamInfo

//______________________________________________________________________________
void THaBeamModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaBeamModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaBeamModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaBeamModule::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaBeamModule(void *p) {
      return  p ? new(p) ::THaBeamModule : new ::THaBeamModule;
   }
   static void *newArray_THaBeamModule(Long_t nElements, void *p) {
      return p ? new(p) ::THaBeamModule[nElements] : new ::THaBeamModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaBeamModule(void *p) {
      delete ((::THaBeamModule*)p);
   }
   static void deleteArray_THaBeamModule(void *p) {
      delete [] ((::THaBeamModule*)p);
   }
   static void destruct_THaBeamModule(void *p) {
      typedef ::THaBeamModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaBeamModule

//______________________________________________________________________________
void THaBeam::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaBeam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaBeam::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaBeam::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaBeam(void *p) {
      delete ((::THaBeam*)p);
   }
   static void deleteArray_THaBeam(void *p) {
      delete [] ((::THaBeam*)p);
   }
   static void destruct_THaBeam(void *p) {
      typedef ::THaBeam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaBeam

//______________________________________________________________________________
void THaIdealBeam::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaIdealBeam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaIdealBeam::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaIdealBeam::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaIdealBeam(void *p) {
      delete ((::THaIdealBeam*)p);
   }
   static void deleteArray_THaIdealBeam(void *p) {
      delete [] ((::THaIdealBeam*)p);
   }
   static void destruct_THaIdealBeam(void *p) {
      typedef ::THaIdealBeam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaIdealBeam

//______________________________________________________________________________
void THaRasteredBeam::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaRasteredBeam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaRasteredBeam::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaRasteredBeam::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaRasteredBeam(void *p) {
      delete ((::THaRasteredBeam*)p);
   }
   static void deleteArray_THaRasteredBeam(void *p) {
      delete [] ((::THaRasteredBeam*)p);
   }
   static void destruct_THaRasteredBeam(void *p) {
      typedef ::THaRasteredBeam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaRasteredBeam

//______________________________________________________________________________
void THaBeamDet::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaBeamDet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaBeamDet::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaBeamDet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaBeamDet(void *p) {
      delete ((::THaBeamDet*)p);
   }
   static void deleteArray_THaBeamDet(void *p) {
      delete [] ((::THaBeamDet*)p);
   }
   static void destruct_THaBeamDet(void *p) {
      typedef ::THaBeamDet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaBeamDet

//______________________________________________________________________________
void THaRaster::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaRaster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaRaster::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaRaster::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaRaster(void *p) {
      delete ((::THaRaster*)p);
   }
   static void deleteArray_THaRaster(void *p) {
      delete [] ((::THaRaster*)p);
   }
   static void destruct_THaRaster(void *p) {
      typedef ::THaRaster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaRaster

//______________________________________________________________________________
void THaBPM::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaBPM.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaBPM::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaBPM::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaBPM(void *p) {
      delete ((::THaBPM*)p);
   }
   static void deleteArray_THaBPM(void *p) {
      delete [] ((::THaBPM*)p);
   }
   static void destruct_THaBPM(void *p) {
      typedef ::THaBPM current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaBPM

//______________________________________________________________________________
void THaUnRasteredBeam::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaUnRasteredBeam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaUnRasteredBeam::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaUnRasteredBeam::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaUnRasteredBeam(void *p) {
      delete ((::THaUnRasteredBeam*)p);
   }
   static void deleteArray_THaUnRasteredBeam(void *p) {
      delete [] ((::THaUnRasteredBeam*)p);
   }
   static void destruct_THaUnRasteredBeam(void *p) {
      typedef ::THaUnRasteredBeam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaUnRasteredBeam

//______________________________________________________________________________
void THaPIDinfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaPIDinfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaPIDinfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaPIDinfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaPIDinfo(void *p) {
      return  p ? new(p) ::THaPIDinfo : new ::THaPIDinfo;
   }
   static void *newArray_THaPIDinfo(Long_t nElements, void *p) {
      return p ? new(p) ::THaPIDinfo[nElements] : new ::THaPIDinfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaPIDinfo(void *p) {
      delete ((::THaPIDinfo*)p);
   }
   static void deleteArray_THaPIDinfo(void *p) {
      delete [] ((::THaPIDinfo*)p);
   }
   static void destruct_THaPIDinfo(void *p) {
      typedef ::THaPIDinfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaPIDinfo

//______________________________________________________________________________
void THaTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaTrack(void *p) {
      return  p ? new(p) ::THaTrack : new ::THaTrack;
   }
   static void *newArray_THaTrack(Long_t nElements, void *p) {
      return p ? new(p) ::THaTrack[nElements] : new ::THaTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaTrack(void *p) {
      delete ((::THaTrack*)p);
   }
   static void deleteArray_THaTrack(void *p) {
      delete [] ((::THaTrack*)p);
   }
   static void destruct_THaTrack(void *p) {
      typedef ::THaTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaTrack

//______________________________________________________________________________
void THaCluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaCluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaCluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaCluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaCluster(void *p) {
      return  p ? new(p) ::THaCluster : new ::THaCluster;
   }
   static void *newArray_THaCluster(Long_t nElements, void *p) {
      return p ? new(p) ::THaCluster[nElements] : new ::THaCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaCluster(void *p) {
      delete ((::THaCluster*)p);
   }
   static void deleteArray_THaCluster(void *p) {
      delete [] ((::THaCluster*)p);
   }
   static void destruct_THaCluster(void *p) {
      typedef ::THaCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaCluster

//______________________________________________________________________________
void THaScintillator::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaScintillator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaScintillator::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaScintillator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaScintillator(void *p) {
      return  p ? new(p) ::THaScintillator : new ::THaScintillator;
   }
   static void *newArray_THaScintillator(Long_t nElements, void *p) {
      return p ? new(p) ::THaScintillator[nElements] : new ::THaScintillator[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaScintillator(void *p) {
      delete ((::THaScintillator*)p);
   }
   static void deleteArray_THaScintillator(void *p) {
      delete [] ((::THaScintillator*)p);
   }
   static void destruct_THaScintillator(void *p) {
      typedef ::THaScintillator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaScintillator

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaScintillatorcLcLDataDest(void *p) {
      return  p ? new(p) ::THaScintillator::DataDest : new ::THaScintillator::DataDest;
   }
   static void *newArray_THaScintillatorcLcLDataDest(Long_t nElements, void *p) {
      return p ? new(p) ::THaScintillator::DataDest[nElements] : new ::THaScintillator::DataDest[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaScintillatorcLcLDataDest(void *p) {
      delete ((::THaScintillator::DataDest*)p);
   }
   static void deleteArray_THaScintillatorcLcLDataDest(void *p) {
      delete [] ((::THaScintillator::DataDest*)p);
   }
   static void destruct_THaScintillatorcLcLDataDest(void *p) {
      typedef ::THaScintillator::DataDest current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaScintillator::DataDest

//______________________________________________________________________________
void THaShower::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaShower.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaShower::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaShower::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaShower(void *p) {
      return  p ? new(p) ::THaShower : new ::THaShower;
   }
   static void *newArray_THaShower(Long_t nElements, void *p) {
      return p ? new(p) ::THaShower[nElements] : new ::THaShower[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaShower(void *p) {
      delete ((::THaShower*)p);
   }
   static void deleteArray_THaShower(void *p) {
      delete [] ((::THaShower*)p);
   }
   static void destruct_THaShower(void *p) {
      typedef ::THaShower current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaShower

//______________________________________________________________________________
void THaTotalShower::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaTotalShower.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaTotalShower::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaTotalShower::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaTotalShower(void *p) {
      delete ((::THaTotalShower*)p);
   }
   static void deleteArray_THaTotalShower(void *p) {
      delete [] ((::THaTotalShower*)p);
   }
   static void destruct_THaTotalShower(void *p) {
      typedef ::THaTotalShower current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaTotalShower

//______________________________________________________________________________
void THaCherenkov::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaCherenkov.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaCherenkov::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaCherenkov::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaCherenkov(void *p) {
      return  p ? new(p) ::THaCherenkov : new ::THaCherenkov;
   }
   static void *newArray_THaCherenkov(Long_t nElements, void *p) {
      return p ? new(p) ::THaCherenkov[nElements] : new ::THaCherenkov[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaCherenkov(void *p) {
      delete ((::THaCherenkov*)p);
   }
   static void deleteArray_THaCherenkov(void *p) {
      delete [] ((::THaCherenkov*)p);
   }
   static void destruct_THaCherenkov(void *p) {
      typedef ::THaCherenkov current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaCherenkov

//______________________________________________________________________________
void THaEventHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaEventHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaEventHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaEventHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaEventHeader(void *p) {
      return  p ? new(p) ::THaEventHeader : new ::THaEventHeader;
   }
   static void *newArray_THaEventHeader(Long_t nElements, void *p) {
      return p ? new(p) ::THaEventHeader[nElements] : new ::THaEventHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaEventHeader(void *p) {
      delete ((::THaEventHeader*)p);
   }
   static void deleteArray_THaEventHeader(void *p) {
      delete [] ((::THaEventHeader*)p);
   }
   static void destruct_THaEventHeader(void *p) {
      typedef ::THaEventHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaEventHeader

//______________________________________________________________________________
void THaEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaEvent(void *p) {
      return  p ? new(p) ::THaEvent : new ::THaEvent;
   }
   static void *newArray_THaEvent(Long_t nElements, void *p) {
      return p ? new(p) ::THaEvent[nElements] : new ::THaEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaEvent(void *p) {
      delete ((::THaEvent*)p);
   }
   static void deleteArray_THaEvent(void *p) {
      delete [] ((::THaEvent*)p);
   }
   static void destruct_THaEvent(void *p) {
      typedef ::THaEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaEvent

//______________________________________________________________________________
void THaTrackID::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaTrackID.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaTrackID::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaTrackID::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaTrackID(void *p) {
      delete ((::THaTrackID*)p);
   }
   static void deleteArray_THaTrackID(void *p) {
      delete [] ((::THaTrackID*)p);
   }
   static void destruct_THaTrackID(void *p) {
      typedef ::THaTrackID current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaTrackID

//______________________________________________________________________________
void THaVDC::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaVDC.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaVDC::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaVDC::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaVDC(void *p) {
      delete ((::THaVDC*)p);
   }
   static void deleteArray_THaVDC(void *p) {
      delete [] ((::THaVDC*)p);
   }
   static void destruct_THaVDC(void *p) {
      typedef ::THaVDC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaVDC

//______________________________________________________________________________
void THaVDCWire::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaVDCWire.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaVDCWire::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaVDCWire::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaVDCWire(void *p) {
      return  p ? new(p) ::THaVDCWire : new ::THaVDCWire;
   }
   static void *newArray_THaVDCWire(Long_t nElements, void *p) {
      return p ? new(p) ::THaVDCWire[nElements] : new ::THaVDCWire[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaVDCWire(void *p) {
      delete ((::THaVDCWire*)p);
   }
   static void deleteArray_THaVDCWire(void *p) {
      delete [] ((::THaVDCWire*)p);
   }
   static void destruct_THaVDCWire(void *p) {
      typedef ::THaVDCWire current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaVDCWire

//______________________________________________________________________________
void THaVDCCluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaVDCCluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaVDCCluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaVDCCluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaVDCCluster(void *p) {
      return  p ? new(p) ::THaVDCCluster : new ::THaVDCCluster;
   }
   static void *newArray_THaVDCCluster(Long_t nElements, void *p) {
      return p ? new(p) ::THaVDCCluster[nElements] : new ::THaVDCCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaVDCCluster(void *p) {
      delete ((::THaVDCCluster*)p);
   }
   static void deleteArray_THaVDCCluster(void *p) {
      delete [] ((::THaVDCCluster*)p);
   }
   static void destruct_THaVDCCluster(void *p) {
      typedef ::THaVDCCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaVDCCluster

//______________________________________________________________________________
void THaVDCHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaVDCHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaVDCHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaVDCHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaVDCHit(void *p) {
      return  p ? new(p) ::THaVDCHit : new ::THaVDCHit;
   }
   static void *newArray_THaVDCHit(Long_t nElements, void *p) {
      return p ? new(p) ::THaVDCHit[nElements] : new ::THaVDCHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaVDCHit(void *p) {
      delete ((::THaVDCHit*)p);
   }
   static void deleteArray_THaVDCHit(void *p) {
      delete [] ((::THaVDCHit*)p);
   }
   static void destruct_THaVDCHit(void *p) {
      typedef ::THaVDCHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaVDCHit

//______________________________________________________________________________
void THaVDCPlane::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaVDCPlane.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaVDCPlane::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaVDCPlane::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaVDCPlane(void *p) {
      return  p ? new(p) ::THaVDCPlane : new ::THaVDCPlane;
   }
   static void *newArray_THaVDCPlane(Long_t nElements, void *p) {
      return p ? new(p) ::THaVDCPlane[nElements] : new ::THaVDCPlane[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaVDCPlane(void *p) {
      delete ((::THaVDCPlane*)p);
   }
   static void deleteArray_THaVDCPlane(void *p) {
      delete [] ((::THaVDCPlane*)p);
   }
   static void destruct_THaVDCPlane(void *p) {
      typedef ::THaVDCPlane current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaVDCPlane

//______________________________________________________________________________
void THaVDCPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaVDCPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaVDCPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaVDCPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaVDCPoint(void *p) {
      delete ((::THaVDCPoint*)p);
   }
   static void deleteArray_THaVDCPoint(void *p) {
      delete [] ((::THaVDCPoint*)p);
   }
   static void destruct_THaVDCPoint(void *p) {
      typedef ::THaVDCPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaVDCPoint

//______________________________________________________________________________
void THaVDCChamber::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaVDCChamber.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaVDCChamber::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaVDCChamber::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaVDCChamber(void *p) {
      return  p ? new(p) ::THaVDCChamber : new ::THaVDCChamber;
   }
   static void *newArray_THaVDCChamber(Long_t nElements, void *p) {
      return p ? new(p) ::THaVDCChamber[nElements] : new ::THaVDCChamber[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaVDCChamber(void *p) {
      delete ((::THaVDCChamber*)p);
   }
   static void deleteArray_THaVDCChamber(void *p) {
      delete [] ((::THaVDCChamber*)p);
   }
   static void destruct_THaVDCChamber(void *p) {
      typedef ::THaVDCChamber current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaVDCChamber

namespace VDC {
//______________________________________________________________________________
void TimeToDistConv::Streamer(TBuffer &R__b)
{
   // Stream an object of class VDC::TimeToDistConv.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(VDC::TimeToDistConv::Class(),this);
   } else {
      R__b.WriteClassBuffer(VDC::TimeToDistConv::Class(),this);
   }
}

} // namespace VDC
namespace ROOT {
   // Wrapper around operator delete
   static void delete_VDCcLcLTimeToDistConv(void *p) {
      delete ((::VDC::TimeToDistConv*)p);
   }
   static void deleteArray_VDCcLcLTimeToDistConv(void *p) {
      delete [] ((::VDC::TimeToDistConv*)p);
   }
   static void destruct_VDCcLcLTimeToDistConv(void *p) {
      typedef ::VDC::TimeToDistConv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::VDC::TimeToDistConv

//______________________________________________________________________________
void THaVDCTrackID::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaVDCTrackID.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaVDCTrackID::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaVDCTrackID::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaVDCTrackID(void *p) {
      return  p ? new(p) ::THaVDCTrackID : new ::THaVDCTrackID;
   }
   static void *newArray_THaVDCTrackID(Long_t nElements, void *p) {
      return p ? new(p) ::THaVDCTrackID[nElements] : new ::THaVDCTrackID[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaVDCTrackID(void *p) {
      delete ((::THaVDCTrackID*)p);
   }
   static void deleteArray_THaVDCTrackID(void *p) {
      delete [] ((::THaVDCTrackID*)p);
   }
   static void destruct_THaVDCTrackID(void *p) {
      typedef ::THaVDCTrackID current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaVDCTrackID

namespace VDC {
//______________________________________________________________________________
void AnalyticTTDConv::Streamer(TBuffer &R__b)
{
   // Stream an object of class VDC::AnalyticTTDConv.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(VDC::AnalyticTTDConv::Class(),this);
   } else {
      R__b.WriteClassBuffer(VDC::AnalyticTTDConv::Class(),this);
   }
}

} // namespace VDC
namespace ROOT {
   // Wrappers around operator new
   static void *new_VDCcLcLAnalyticTTDConv(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::VDC::AnalyticTTDConv : new ::VDC::AnalyticTTDConv;
   }
   static void *newArray_VDCcLcLAnalyticTTDConv(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::VDC::AnalyticTTDConv[nElements] : new ::VDC::AnalyticTTDConv[nElements];
   }
   // Wrapper around operator delete
   static void delete_VDCcLcLAnalyticTTDConv(void *p) {
      delete ((::VDC::AnalyticTTDConv*)p);
   }
   static void deleteArray_VDCcLcLAnalyticTTDConv(void *p) {
      delete [] ((::VDC::AnalyticTTDConv*)p);
   }
   static void destruct_VDCcLcLAnalyticTTDConv(void *p) {
      typedef ::VDC::AnalyticTTDConv current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::VDC::AnalyticTTDConv

//______________________________________________________________________________
void THaVDCPointPair::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaVDCPointPair.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaVDCPointPair::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaVDCPointPair::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaVDCPointPair(void *p) {
      delete ((::THaVDCPointPair*)p);
   }
   static void deleteArray_THaVDCPointPair(void *p) {
      delete [] ((::THaVDCPointPair*)p);
   }
   static void destruct_THaVDCPointPair(void *p) {
      typedef ::THaVDCPointPair current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaVDCPointPair

//______________________________________________________________________________
void VDCeff::Streamer(TBuffer &R__b)
{
   // Stream an object of class VDCeff.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(VDCeff::Class(),this);
   } else {
      R__b.WriteClassBuffer(VDCeff::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_VDCeff(void *p) {
      delete ((::VDCeff*)p);
   }
   static void deleteArray_VDCeff(void *p) {
      delete [] ((::VDCeff*)p);
   }
   static void destruct_VDCeff(void *p) {
      typedef ::VDCeff current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::VDCeff

//______________________________________________________________________________
void THaPrimaryKine::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaPrimaryKine.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaPrimaryKine::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaPrimaryKine::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaPrimaryKine(void *p) {
      delete ((::THaPrimaryKine*)p);
   }
   static void deleteArray_THaPrimaryKine(void *p) {
      delete [] ((::THaPrimaryKine*)p);
   }
   static void destruct_THaPrimaryKine(void *p) {
      typedef ::THaPrimaryKine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaPrimaryKine

//______________________________________________________________________________
void THaElectronKine::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaElectronKine.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaElectronKine::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaElectronKine::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaElectronKine(void *p) {
      delete ((::THaElectronKine*)p);
   }
   static void deleteArray_THaElectronKine(void *p) {
      delete [] ((::THaElectronKine*)p);
   }
   static void destruct_THaElectronKine(void *p) {
      typedef ::THaElectronKine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaElectronKine

//______________________________________________________________________________
void THaReactionPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaReactionPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaReactionPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaReactionPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaReactionPoint(void *p) {
      delete ((::THaReactionPoint*)p);
   }
   static void deleteArray_THaReactionPoint(void *p) {
      delete [] ((::THaReactionPoint*)p);
   }
   static void destruct_THaReactionPoint(void *p) {
      typedef ::THaReactionPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaReactionPoint

//______________________________________________________________________________
void THaReacPointFoil::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaReacPointFoil.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaReacPointFoil::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaReacPointFoil::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaReacPointFoil(void *p) {
      delete ((::THaReacPointFoil*)p);
   }
   static void deleteArray_THaReacPointFoil(void *p) {
      delete [] ((::THaReacPointFoil*)p);
   }
   static void destruct_THaReacPointFoil(void *p) {
      typedef ::THaReacPointFoil current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaReacPointFoil

//______________________________________________________________________________
void THaTwoarmVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaTwoarmVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaTwoarmVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaTwoarmVertex::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaTwoarmVertex(void *p) {
      delete ((::THaTwoarmVertex*)p);
   }
   static void deleteArray_THaTwoarmVertex(void *p) {
      delete [] ((::THaTwoarmVertex*)p);
   }
   static void destruct_THaTwoarmVertex(void *p) {
      typedef ::THaTwoarmVertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaTwoarmVertex

//______________________________________________________________________________
void THaAvgVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaAvgVertex.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaAvgVertex::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaAvgVertex::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaAvgVertex(void *p) {
      delete ((::THaAvgVertex*)p);
   }
   static void deleteArray_THaAvgVertex(void *p) {
      delete [] ((::THaAvgVertex*)p);
   }
   static void destruct_THaAvgVertex(void *p) {
      typedef ::THaAvgVertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaAvgVertex

//______________________________________________________________________________
void THaExtTarCor::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaExtTarCor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaExtTarCor::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaExtTarCor::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaExtTarCor(void *p) {
      delete ((::THaExtTarCor*)p);
   }
   static void deleteArray_THaExtTarCor(void *p) {
      delete [] ((::THaExtTarCor*)p);
   }
   static void destruct_THaExtTarCor(void *p) {
      typedef ::THaExtTarCor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaExtTarCor

//______________________________________________________________________________
void THaDebugModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaDebugModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaDebugModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaDebugModule::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaDebugModule(void *p) {
      delete ((::THaDebugModule*)p);
   }
   static void deleteArray_THaDebugModule(void *p) {
      delete [] ((::THaDebugModule*)p);
   }
   static void destruct_THaDebugModule(void *p) {
      typedef ::THaDebugModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaDebugModule

//______________________________________________________________________________
void THaGoldenTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaGoldenTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaGoldenTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaGoldenTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaGoldenTrack(void *p) {
      delete ((::THaGoldenTrack*)p);
   }
   static void deleteArray_THaGoldenTrack(void *p) {
      delete [] ((::THaGoldenTrack*)p);
   }
   static void destruct_THaGoldenTrack(void *p) {
      typedef ::THaGoldenTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaGoldenTrack

//______________________________________________________________________________
void THaSecondaryKine::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaSecondaryKine.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaSecondaryKine::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaSecondaryKine::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaSecondaryKine(void *p) {
      delete ((::THaSecondaryKine*)p);
   }
   static void deleteArray_THaSecondaryKine(void *p) {
      delete [] ((::THaSecondaryKine*)p);
   }
   static void destruct_THaSecondaryKine(void *p) {
      typedef ::THaSecondaryKine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaSecondaryKine

//______________________________________________________________________________
void THaCoincTime::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaCoincTime.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaCoincTime::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaCoincTime::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaCoincTime(void *p) {
      delete ((::THaCoincTime*)p);
   }
   static void deleteArray_THaCoincTime(void *p) {
      delete [] ((::THaCoincTime*)p);
   }
   static void destruct_THaCoincTime(void *p) {
      typedef ::THaCoincTime current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaCoincTime

//______________________________________________________________________________
void THaS2CoincTime::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaS2CoincTime.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaS2CoincTime::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaS2CoincTime::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaS2CoincTime(void *p) {
      delete ((::THaS2CoincTime*)p);
   }
   static void deleteArray_THaS2CoincTime(void *p) {
      delete [] ((::THaS2CoincTime*)p);
   }
   static void destruct_THaS2CoincTime(void *p) {
      typedef ::THaS2CoincTime current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaS2CoincTime

//______________________________________________________________________________
void THaTrackProj::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaTrackProj.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaTrackProj::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaTrackProj::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaTrackProj(void *p) {
      return  p ? new(p) ::THaTrackProj : new ::THaTrackProj;
   }
   static void *newArray_THaTrackProj(Long_t nElements, void *p) {
      return p ? new(p) ::THaTrackProj[nElements] : new ::THaTrackProj[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaTrackProj(void *p) {
      delete ((::THaTrackProj*)p);
   }
   static void deleteArray_THaTrackProj(void *p) {
      delete [] ((::THaTrackProj*)p);
   }
   static void destruct_THaTrackProj(void *p) {
      typedef ::THaTrackProj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaTrackProj

//______________________________________________________________________________
void THaPostProcess::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaPostProcess.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaPostProcess::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaPostProcess::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaPostProcess(void *p) {
      delete ((::THaPostProcess*)p);
   }
   static void deleteArray_THaPostProcess(void *p) {
      delete [] ((::THaPostProcess*)p);
   }
   static void destruct_THaPostProcess(void *p) {
      typedef ::THaPostProcess current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaPostProcess

//______________________________________________________________________________
void THaFilter::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaFilter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaFilter::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaFilter::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaFilter(void *p) {
      delete ((::THaFilter*)p);
   }
   static void deleteArray_THaFilter(void *p) {
      delete [] ((::THaFilter*)p);
   }
   static void destruct_THaFilter(void *p) {
      typedef ::THaFilter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaFilter

//______________________________________________________________________________
void THaElossCorrection::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaElossCorrection.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaElossCorrection::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaElossCorrection::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaElossCorrection(void *p) {
      delete ((::THaElossCorrection*)p);
   }
   static void deleteArray_THaElossCorrection(void *p) {
      delete [] ((::THaElossCorrection*)p);
   }
   static void destruct_THaElossCorrection(void *p) {
      typedef ::THaElossCorrection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaElossCorrection

//______________________________________________________________________________
void THaTrackEloss::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaTrackEloss.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaTrackEloss::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaTrackEloss::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaTrackEloss(void *p) {
      delete ((::THaTrackEloss*)p);
   }
   static void deleteArray_THaTrackEloss(void *p) {
      delete [] ((::THaTrackEloss*)p);
   }
   static void destruct_THaTrackEloss(void *p) {
      typedef ::THaTrackEloss current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaTrackEloss

//______________________________________________________________________________
void THaEpicsEbeam::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaEpicsEbeam.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaEpicsEbeam::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaEpicsEbeam::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaEpicsEbeam(void *p) {
      delete ((::THaEpicsEbeam*)p);
   }
   static void deleteArray_THaEpicsEbeam(void *p) {
      delete [] ((::THaEpicsEbeam*)p);
   }
   static void destruct_THaEpicsEbeam(void *p) {
      typedef ::THaEpicsEbeam current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaEpicsEbeam

//______________________________________________________________________________
void THaBeamEloss::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaBeamEloss.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaBeamEloss::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaBeamEloss::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaBeamEloss(void *p) {
      delete ((::THaBeamEloss*)p);
   }
   static void deleteArray_THaBeamEloss(void *p) {
      delete [] ((::THaBeamEloss*)p);
   }
   static void destruct_THaBeamEloss(void *p) {
      typedef ::THaBeamEloss current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaBeamEloss

//______________________________________________________________________________
void THaTrackOut::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaTrackOut.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaTrackOut::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaTrackOut::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaTrackOut(void *p) {
      delete ((::THaTrackOut*)p);
   }
   static void deleteArray_THaTrackOut(void *p) {
      delete [] ((::THaTrackOut*)p);
   }
   static void destruct_THaTrackOut(void *p) {
      typedef ::THaTrackOut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaTrackOut

//______________________________________________________________________________
void THaTriggerTime::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaTriggerTime.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaTriggerTime::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaTriggerTime::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaTriggerTime(void *p) {
      return  p ? new(p) ::THaTriggerTime : new ::THaTriggerTime;
   }
   static void *newArray_THaTriggerTime(Long_t nElements, void *p) {
      return p ? new(p) ::THaTriggerTime[nElements] : new ::THaTriggerTime[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaTriggerTime(void *p) {
      delete ((::THaTriggerTime*)p);
   }
   static void deleteArray_THaTriggerTime(void *p) {
      delete [] ((::THaTriggerTime*)p);
   }
   static void destruct_THaTriggerTime(void *p) {
      typedef ::THaTriggerTime current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaTriggerTime

//______________________________________________________________________________
void THaHelicityDet::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaHelicityDet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaHelicityDet::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaHelicityDet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaHelicityDet(void *p) {
      delete ((::THaHelicityDet*)p);
   }
   static void deleteArray_THaHelicityDet(void *p) {
      delete [] ((::THaHelicityDet*)p);
   }
   static void destruct_THaHelicityDet(void *p) {
      typedef ::THaHelicityDet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaHelicityDet

//______________________________________________________________________________
void THaG0HelicityReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaG0HelicityReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaG0HelicityReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaG0HelicityReader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaG0HelicityReader(void *p) {
      return  p ? new(p) ::THaG0HelicityReader : new ::THaG0HelicityReader;
   }
   static void *newArray_THaG0HelicityReader(Long_t nElements, void *p) {
      return p ? new(p) ::THaG0HelicityReader[nElements] : new ::THaG0HelicityReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaG0HelicityReader(void *p) {
      delete ((::THaG0HelicityReader*)p);
   }
   static void deleteArray_THaG0HelicityReader(void *p) {
      delete [] ((::THaG0HelicityReader*)p);
   }
   static void destruct_THaG0HelicityReader(void *p) {
      typedef ::THaG0HelicityReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaG0HelicityReader

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaG0HelicityReadercLcLROCinfo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::THaG0HelicityReader::ROCinfo : new ::THaG0HelicityReader::ROCinfo;
   }
   static void *newArray_THaG0HelicityReadercLcLROCinfo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::THaG0HelicityReader::ROCinfo[nElements] : new ::THaG0HelicityReader::ROCinfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaG0HelicityReadercLcLROCinfo(void *p) {
      delete ((::THaG0HelicityReader::ROCinfo*)p);
   }
   static void deleteArray_THaG0HelicityReadercLcLROCinfo(void *p) {
      delete [] ((::THaG0HelicityReader::ROCinfo*)p);
   }
   static void destruct_THaG0HelicityReadercLcLROCinfo(void *p) {
      typedef ::THaG0HelicityReader::ROCinfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaG0HelicityReader::ROCinfo

//______________________________________________________________________________
void THaG0Helicity::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaG0Helicity.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaG0Helicity::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaG0Helicity::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaG0Helicity(void *p) {
      return  p ? new(p) ::THaG0Helicity : new ::THaG0Helicity;
   }
   static void *newArray_THaG0Helicity(Long_t nElements, void *p) {
      return p ? new(p) ::THaG0Helicity[nElements] : new ::THaG0Helicity[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaG0Helicity(void *p) {
      delete ((::THaG0Helicity*)p);
   }
   static void deleteArray_THaG0Helicity(void *p) {
      delete [] ((::THaG0Helicity*)p);
   }
   static void destruct_THaG0Helicity(void *p) {
      typedef ::THaG0Helicity current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaG0Helicity

//______________________________________________________________________________
void THaADCHelicity::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaADCHelicity.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaADCHelicity::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaADCHelicity::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaADCHelicity(void *p) {
      return  p ? new(p) ::THaADCHelicity : new ::THaADCHelicity;
   }
   static void *newArray_THaADCHelicity(Long_t nElements, void *p) {
      return p ? new(p) ::THaADCHelicity[nElements] : new ::THaADCHelicity[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaADCHelicity(void *p) {
      delete ((::THaADCHelicity*)p);
   }
   static void deleteArray_THaADCHelicity(void *p) {
      delete [] ((::THaADCHelicity*)p);
   }
   static void destruct_THaADCHelicity(void *p) {
      typedef ::THaADCHelicity current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaADCHelicity

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaADCHelicitycLcLChanDef_t(void *p) {
      return  p ? new(p) ::THaADCHelicity::ChanDef_t : new ::THaADCHelicity::ChanDef_t;
   }
   static void *newArray_THaADCHelicitycLcLChanDef_t(Long_t nElements, void *p) {
      return p ? new(p) ::THaADCHelicity::ChanDef_t[nElements] : new ::THaADCHelicity::ChanDef_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaADCHelicitycLcLChanDef_t(void *p) {
      delete ((::THaADCHelicity::ChanDef_t*)p);
   }
   static void deleteArray_THaADCHelicitycLcLChanDef_t(void *p) {
      delete [] ((::THaADCHelicity::ChanDef_t*)p);
   }
   static void destruct_THaADCHelicitycLcLChanDef_t(void *p) {
      typedef ::THaADCHelicity::ChanDef_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaADCHelicity::ChanDef_t

//______________________________________________________________________________
void THaHelicity::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaHelicity.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaHelicity::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaHelicity::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaHelicity(void *p) {
      return  p ? new(p) ::THaHelicity : new ::THaHelicity;
   }
   static void *newArray_THaHelicity(Long_t nElements, void *p) {
      return p ? new(p) ::THaHelicity[nElements] : new ::THaHelicity[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaHelicity(void *p) {
      delete ((::THaHelicity*)p);
   }
   static void deleteArray_THaHelicity(void *p) {
      delete [] ((::THaHelicity*)p);
   }
   static void destruct_THaHelicity(void *p) {
      typedef ::THaHelicity current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaHelicity

//______________________________________________________________________________
void THaPhotoReaction::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaPhotoReaction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaPhotoReaction::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaPhotoReaction::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaPhotoReaction(void *p) {
      delete ((::THaPhotoReaction*)p);
   }
   static void deleteArray_THaPhotoReaction(void *p) {
      delete [] ((::THaPhotoReaction*)p);
   }
   static void destruct_THaPhotoReaction(void *p) {
      typedef ::THaPhotoReaction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaPhotoReaction

//______________________________________________________________________________
void THaSAProtonEP::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaSAProtonEP.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaSAProtonEP::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaSAProtonEP::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaSAProtonEP(void *p) {
      delete ((::THaSAProtonEP*)p);
   }
   static void deleteArray_THaSAProtonEP(void *p) {
      delete [] ((::THaSAProtonEP*)p);
   }
   static void destruct_THaSAProtonEP(void *p) {
      typedef ::THaSAProtonEP current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaSAProtonEP

//______________________________________________________________________________
void THaTextvars::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaTextvars.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaTextvars::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaTextvars::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaTextvars(void *p) {
      return  p ? new(p) ::THaTextvars : new ::THaTextvars;
   }
   static void *newArray_THaTextvars(Long_t nElements, void *p) {
      return p ? new(p) ::THaTextvars[nElements] : new ::THaTextvars[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaTextvars(void *p) {
      delete ((::THaTextvars*)p);
   }
   static void deleteArray_THaTextvars(void *p) {
      delete [] ((::THaTextvars*)p);
   }
   static void destruct_THaTextvars(void *p) {
      typedef ::THaTextvars current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaTextvars

//______________________________________________________________________________
void THaQWEAKHelicityReader::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaQWEAKHelicityReader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaQWEAKHelicityReader::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaQWEAKHelicityReader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaQWEAKHelicityReader(void *p) {
      return  p ? new(p) ::THaQWEAKHelicityReader : new ::THaQWEAKHelicityReader;
   }
   static void *newArray_THaQWEAKHelicityReader(Long_t nElements, void *p) {
      return p ? new(p) ::THaQWEAKHelicityReader[nElements] : new ::THaQWEAKHelicityReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaQWEAKHelicityReader(void *p) {
      delete ((::THaQWEAKHelicityReader*)p);
   }
   static void deleteArray_THaQWEAKHelicityReader(void *p) {
      delete [] ((::THaQWEAKHelicityReader*)p);
   }
   static void destruct_THaQWEAKHelicityReader(void *p) {
      typedef ::THaQWEAKHelicityReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaQWEAKHelicityReader

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaQWEAKHelicityReadercLcLROCinfo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::THaQWEAKHelicityReader::ROCinfo : new ::THaQWEAKHelicityReader::ROCinfo;
   }
   static void *newArray_THaQWEAKHelicityReadercLcLROCinfo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::THaQWEAKHelicityReader::ROCinfo[nElements] : new ::THaQWEAKHelicityReader::ROCinfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaQWEAKHelicityReadercLcLROCinfo(void *p) {
      delete ((::THaQWEAKHelicityReader::ROCinfo*)p);
   }
   static void deleteArray_THaQWEAKHelicityReadercLcLROCinfo(void *p) {
      delete [] ((::THaQWEAKHelicityReader::ROCinfo*)p);
   }
   static void destruct_THaQWEAKHelicityReadercLcLROCinfo(void *p) {
      typedef ::THaQWEAKHelicityReader::ROCinfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaQWEAKHelicityReader::ROCinfo

//______________________________________________________________________________
void THaQWEAKHelicity::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaQWEAKHelicity.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaQWEAKHelicity::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaQWEAKHelicity::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_THaQWEAKHelicity(void *p) {
      return  p ? new(p) ::THaQWEAKHelicity : new ::THaQWEAKHelicity;
   }
   static void *newArray_THaQWEAKHelicity(Long_t nElements, void *p) {
      return p ? new(p) ::THaQWEAKHelicity[nElements] : new ::THaQWEAKHelicity[nElements];
   }
   // Wrapper around operator delete
   static void delete_THaQWEAKHelicity(void *p) {
      delete ((::THaQWEAKHelicity*)p);
   }
   static void deleteArray_THaQWEAKHelicity(void *p) {
      delete [] ((::THaQWEAKHelicity*)p);
   }
   static void destruct_THaQWEAKHelicity(void *p) {
      typedef ::THaQWEAKHelicity current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaQWEAKHelicity

//______________________________________________________________________________
void THaEvtTypeHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaEvtTypeHandler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaEvtTypeHandler::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaEvtTypeHandler::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaEvtTypeHandler(void *p) {
      delete ((::THaEvtTypeHandler*)p);
   }
   static void deleteArray_THaEvtTypeHandler(void *p) {
      delete [] ((::THaEvtTypeHandler*)p);
   }
   static void destruct_THaEvtTypeHandler(void *p) {
      typedef ::THaEvtTypeHandler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaEvtTypeHandler

//______________________________________________________________________________
void THaScalerEvtHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaScalerEvtHandler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaScalerEvtHandler::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaScalerEvtHandler::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaScalerEvtHandler(void *p) {
      delete ((::THaScalerEvtHandler*)p);
   }
   static void deleteArray_THaScalerEvtHandler(void *p) {
      delete [] ((::THaScalerEvtHandler*)p);
   }
   static void destruct_THaScalerEvtHandler(void *p) {
      typedef ::THaScalerEvtHandler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaScalerEvtHandler

//______________________________________________________________________________
void THaEpicsEvtHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaEpicsEvtHandler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaEpicsEvtHandler::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaEpicsEvtHandler::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaEpicsEvtHandler(void *p) {
      delete ((::THaEpicsEvtHandler*)p);
   }
   static void deleteArray_THaEpicsEvtHandler(void *p) {
      delete [] ((::THaEpicsEvtHandler*)p);
   }
   static void destruct_THaEpicsEvtHandler(void *p) {
      typedef ::THaEpicsEvtHandler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaEpicsEvtHandler

//______________________________________________________________________________
void THaEvt125Handler::Streamer(TBuffer &R__b)
{
   // Stream an object of class THaEvt125Handler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(THaEvt125Handler::Class(),this);
   } else {
      R__b.WriteClassBuffer(THaEvt125Handler::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_THaEvt125Handler(void *p) {
      delete ((::THaEvt125Handler*)p);
   }
   static void deleteArray_THaEvt125Handler(void *p) {
      delete [] ((::THaEvt125Handler*)p);
   }
   static void destruct_THaEvt125Handler(void *p) {
      typedef ::THaEvt125Handler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::THaEvt125Handler

namespace ROOT {
   static TClass *maplEstringcOunsignedsPintgR_Dictionary();
   static void maplEstringcOunsignedsPintgR_TClassManip(TClass*);
   static void *new_maplEstringcOunsignedsPintgR(void *p = 0);
   static void *newArray_maplEstringcOunsignedsPintgR(Long_t size, void *p);
   static void delete_maplEstringcOunsignedsPintgR(void *p);
   static void deleteArray_maplEstringcOunsignedsPintgR(void *p);
   static void destruct_maplEstringcOunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,unsigned int>*)
   {
      map<string,unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,unsigned int>", -2, "map", 96,
                  typeid(map<string,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,unsigned int>) );
      instance.SetNew(&new_maplEstringcOunsignedsPintgR);
      instance.SetNewArray(&newArray_maplEstringcOunsignedsPintgR);
      instance.SetDelete(&delete_maplEstringcOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOunsignedsPintgR);
      instance.SetDestructor(&destruct_maplEstringcOunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,unsigned int>*)0x0)->GetClass();
      maplEstringcOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,unsigned int> : new map<string,unsigned int>;
   }
   static void *newArray_maplEstringcOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,unsigned int>[nElements] : new map<string,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOunsignedsPintgR(void *p) {
      delete ((map<string,unsigned int>*)p);
   }
   static void deleteArray_maplEstringcOunsignedsPintgR(void *p) {
      delete [] ((map<string,unsigned int>*)p);
   }
   static void destruct_maplEstringcOunsignedsPintgR(void *p) {
      typedef map<string,unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,unsigned int>

namespace {
  void TriggerDictionaryInitialization_haDict_Impl() {
    static const char* headers[] = {
"src/THaFormula.h",
"src/THaVform.h",
"src/THaVhist.h",
"src/THaVar.h",
"src/THaVarList.h",
"src/THaCut.h",
"src/THaNamedList.h",
"src/THaCutList.h",
"src/THaInterface.h",
"src/THaRunBase.h",
"src/THaCodaRun.h",
"src/THaRun.h",
"src/THaRunParameters.h",
"src/THaDetMap.h",
"src/THaApparatus.h",
"src/THaDetector.h",
"src/THaSpectrometer.h",
"src/THaSpectrometerDetector.h",
"src/THaHRS.h",
"src/THaDecData.h",
"src/BdataLoc.h",
"src/THaOutput.h",
"src/THaString.h",
"src/THaTrackingDetector.h",
"src/THaNonTrackingDetector.h",
"src/THaPidDetector.h",
"src/THaSubDetector.h",
"src/THaAnalysisObject.h",
"src/THaDetectorBase.h",
"src/THaRTTI.h",
"src/THaPhysicsModule.h",
"src/THaVertexModule.h",
"src/THaTrackingModule.h",
"src/THaAnalyzer.h",
"src/THaPrintOption.h",
"src/THaBeam.h",
"src/THaIdealBeam.h",
"src/THaRasteredBeam.h",
"src/THaRaster.h",
"src/THaBeamDet.h",
"src/THaBPM.h",
"src/THaUnRasteredBeam.h",
"src/THaTrack.h",
"src/THaPIDinfo.h",
"src/THaParticleInfo.h",
"src/THaCluster.h",
"src/THaArrayString.h",
"src/THaScintillator.h",
"src/THaShower.h",
"src/THaTotalShower.h",
"src/THaCherenkov.h",
"src/THaEvent.h",
"src/THaTrackID.h",
"src/THaVDC.h",
"src/THaVDCPlane.h",
"src/THaVDCChamber.h",
"src/THaVDCPoint.h",
"src/THaVDCWire.h",
"src/THaVDCHit.h",
"src/THaVDCCluster.h",
"src/THaVDCTimeToDistConv.h",
"src/THaVDCTrackID.h",
"src/THaVDCAnalyticTTDConv.h",
"src/THaVDCPointPair.h",
"src/VDCeff.h",
"src/THaElectronKine.h",
"src/THaReactionPoint.h",
"src/THaReacPointFoil.h",
"src/THaTwoarmVertex.h",
"src/THaAvgVertex.h",
"src/THaExtTarCor.h",
"src/THaDebugModule.h",
"src/THaTrackInfo.h",
"src/THaGoldenTrack.h",
"src/THaPrimaryKine.h",
"src/THaSecondaryKine.h",
"src/THaCoincTime.h",
"src/THaS2CoincTime.h",
"src/THaTrackProj.h",
"src/THaPostProcess.h",
"src/THaFilter.h",
"src/THaElossCorrection.h",
"src/THaTrackEloss.h",
"src/THaBeamModule.h",
"src/THaBeamInfo.h",
"src/THaEpicsEbeam.h",
"src/THaBeamEloss.h",
"src/THaTrackOut.h",
"src/THaTriggerTime.h",
"src/THaHelicityDet.h",
"src/THaG0HelicityReader.h",
"src/THaG0Helicity.h",
"src/THaADCHelicity.h",
"src/THaHelicity.h",
"src/THaPhotoReaction.h",
"src/THaSAProtonEP.h",
"src/THaTextvars.h",
"src/THaQWEAKHelicity.h",
"src/THaQWEAKHelicityReader.h",
"src/THaEvtTypeHandler.h",
"src/THaScalerEvtHandler.h",
"src/THaEpicsEvtHandler.h",
"src/THaEvt125Handler.h",
"src/FileInclude.h",
"src/THaGlobals.h",
0
    };
    static const char* includePaths[] = {
"/u/apps/root/6.10.02/root/include",
"/lustre/expphy/work/halla/triton/MARATHON_Replay/analyzer1.6/src",
"/lustre/expphy/work/halla/triton/MARATHON_Replay/analyzer1.6/hana_decode",
"/u/apps/root/6.10.02/root/include",
"/lustre/expphy/work/halla/triton/MARATHON_Replay/analyzer1.6/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "haDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(Formula defined on list of variables)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaFormula.h")))  THaFormula;
class __attribute__((annotate("$clingAutoload$THaOutput.h")))  __attribute__((annotate("$clingAutoload$src/THaVform.h")))  THaOutput;
class __attribute__((annotate(R"ATTRDUMP(Vector of formulas or a var-sized array)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaVform.h")))  THaVform;
class __attribute__((annotate(R"ATTRDUMP(Vector of histograms.)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaVhist.h")))  THaVhist;
class __attribute__((annotate(R"ATTRDUMP(Parser for variable names with support for arrays)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaArrayString.h")))  __attribute__((annotate("$clingAutoload$src/THaVar.h")))  THaArrayString;
class __attribute__((annotate(R"ATTRDUMP(Global symbolic variable)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaVar.h")))  THaVar;
class __attribute__((annotate(R"ATTRDUMP(List of analyzer global variables)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaVarList.h")))  THaVarList;
class __attribute__((annotate(R"ATTRDUMP(A logical cut (a.k.a. test))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaCut.h")))  THaCut;
class __attribute__((annotate(R"ATTRDUMP(A list with a name)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaNamedList.h")))  THaNamedList;
class __attribute__((annotate(R"ATTRDUMP(A THashList list with a PrintOpt method)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaCutList.h")))  THaHashList;
class __attribute__((annotate(R"ATTRDUMP(Hash list of TCuts with support for blocks of cuts)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaCutList.h")))  THaCutList;
class __attribute__((annotate(R"ATTRDUMP(Hall A Analyzer Interactive Interface)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaInterface.h")))  THaInterface;
class __attribute__((annotate(R"ATTRDUMP(Base class for run objects)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaRunBase.h")))  THaRunBase;
class __attribute__((annotate(R"ATTRDUMP(ABC for a run based on CODA data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaCodaRun.h")))  THaCodaRun;
class __attribute__((annotate(R"ATTRDUMP(A run based on a CODA data file on disk)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaRun.h")))  THaRun;
class __attribute__((annotate(R"ATTRDUMP(Beam & fixed target run parameters)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaRunParameters.h")))  THaRunParameters;
class __attribute__((annotate(R"ATTRDUMP(The standard detector map)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaDetMap.h")))  THaDetMap;
class __attribute__((annotate(R"ATTRDUMP(ABC for a data analysis object)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaAnalysisObject.h")))  __attribute__((annotate("$clingAutoload$src/THaApparatus.h")))  THaAnalysisObject;
class __attribute__((annotate(R"ATTRDUMP(A generic apparatus (collection of detectors))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaApparatus.h")))  THaApparatus;
class __attribute__((annotate(R"ATTRDUMP(ABC for a detector or subdetector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaDetectorBase.h")))  __attribute__((annotate("$clingAutoload$src/THaDetector.h")))  THaDetectorBase;
class __attribute__((annotate(R"ATTRDUMP(Abstract base class for a Hall A detector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaDetector.h")))  THaDetector;
class __attribute__((annotate(R"ATTRDUMP(ABC for a vertex module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaVertexModule.h")))  __attribute__((annotate("$clingAutoload$src/THaSpectrometer.h")))  THaVertexModule;
class __attribute__((annotate(R"ATTRDUMP(Track information)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaTrackInfo.h")))  __attribute__((annotate("$clingAutoload$src/THaSpectrometer.h")))  THaTrackInfo;
class __attribute__((annotate(R"ATTRDUMP(ABC for a tracking module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaTrackingModule.h")))  __attribute__((annotate("$clingAutoload$src/THaSpectrometer.h")))  THaTrackingModule;
class __attribute__((annotate(R"ATTRDUMP(Information for a particle type)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaParticleInfo.h")))  __attribute__((annotate("$clingAutoload$src/THaSpectrometer.h")))  THaParticleInfo;
class __attribute__((annotate(R"ATTRDUMP(ABC for a spectrometer detector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaSpectrometerDetector.h")))  __attribute__((annotate("$clingAutoload$src/THaSpectrometer.h")))  THaSpectrometerDetector;
class __attribute__((annotate(R"ATTRDUMP(ABC for a non-tracking spectrometer detector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaNonTrackingDetector.h")))  __attribute__((annotate("$clingAutoload$src/THaSpectrometer.h")))  THaNonTrackingDetector;
class __attribute__((annotate(R"ATTRDUMP(ABC for a PID detector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaPidDetector.h")))  __attribute__((annotate("$clingAutoload$src/THaSpectrometer.h")))  THaPidDetector;
class __attribute__((annotate(R"ATTRDUMP(A generic spectrometer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaSpectrometer.h")))  THaSpectrometer;
class __attribute__((annotate(R"ATTRDUMP(A Hall A High Resolution Spectrometer)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaHRS.h")))  THaHRS;
class __attribute__((annotate("$clingAutoload$BdataLoc.h")))  __attribute__((annotate("$clingAutoload$src/THaDecData.h")))  BdataLoc;
class __attribute__((annotate("$clingAutoload$BdataLoc.h")))  __attribute__((annotate("$clingAutoload$src/THaDecData.h")))  CrateLoc;
class __attribute__((annotate("$clingAutoload$BdataLoc.h")))  __attribute__((annotate("$clingAutoload$src/THaDecData.h")))  CrateLocMulti;
class __attribute__((annotate("$clingAutoload$BdataLoc.h")))  __attribute__((annotate("$clingAutoload$src/THaDecData.h")))  WordLoc;
class __attribute__((annotate("$clingAutoload$BdataLoc.h")))  __attribute__((annotate("$clingAutoload$src/THaDecData.h")))  RoclenLoc;
class __attribute__((annotate("$clingAutoload$BdataLoc.h")))  __attribute__((annotate("$clingAutoload$src/THaDecData.h")))  TrigBitLoc;
class __attribute__((annotate("$clingAutoload$src/THaDecData.h")))  THaDecData;
class __attribute__((annotate(R"ATTRDUMP(ABC for a generic tracking detector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaTrackingDetector.h")))  THaTrackingDetector;
class __attribute__((annotate(R"ATTRDUMP(ABC for a subdetector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaSubDetector.h")))  THaSubDetector;
class __attribute__((annotate(R"ATTRDUMP(RTTI information for a member variable of a ROOT class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaRTTI.h")))  THaRTTI;
class __attribute__((annotate(R"ATTRDUMP(ABC for a physics/kinematics module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaPhysicsModule.h")))  THaPhysicsModule;
class __attribute__((annotate(R"ATTRDUMP(Hall A Analyzer Standard Event Loop)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaAnalyzer.h")))  THaAnalyzer;
class __attribute__((annotate(R"ATTRDUMP(Utility class to handle option strings)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaPrintOption.h")))  THaPrintOption;
class __attribute__((annotate(R"ATTRDUMP(Beam information for physics modules)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaBeamInfo.h")))  __attribute__((annotate("$clingAutoload$src/THaBeam.h")))  THaBeamInfo;
class __attribute__((annotate(R"ATTRDUMP(ABC for a beam module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaBeamModule.h")))  __attribute__((annotate("$clingAutoload$src/THaBeam.h")))  THaBeamModule;
class __attribute__((annotate(R"ATTRDUMP(ABC for an apparatus providing beam information)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaBeam.h")))  THaBeam;
class __attribute__((annotate(R"ATTRDUMP(A beam with constant position and direction)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaIdealBeam.h")))  THaIdealBeam;
class __attribute__((annotate(R"ATTRDUMP(A beam with rastered beam, analyzed event by event using raster currents)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaRasteredBeam.h")))  THaRasteredBeam;
class __attribute__((annotate(R"ATTRDUMP(ABC for an detector providing beam information)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaBeamDet.h")))  __attribute__((annotate("$clingAutoload$src/THaRaster.h")))  THaBeamDet;
class __attribute__((annotate(R"ATTRDUMP(Generic Raster class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaRaster.h")))  THaRaster;
class __attribute__((annotate(R"ATTRDUMP(Generic BPM class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaBPM.h")))  THaBPM;
class __attribute__((annotate(R"ATTRDUMP(A beam with unrastered beam, analyzed event by event)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaUnRasteredBeam.h")))  THaUnRasteredBeam;
class __attribute__((annotate(R"ATTRDUMP(Particle ID information for a track)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaPIDinfo.h")))  __attribute__((annotate("$clingAutoload$src/THaTrack.h")))  THaPIDinfo;
class __attribute__((annotate(R"ATTRDUMP(A generic particle track)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaTrack.h")))  THaTrack;
class __attribute__((annotate(R"ATTRDUMP(Generic wire chamber cluster)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaCluster.h")))  THaCluster;
class __attribute__((annotate(R"ATTRDUMP(Generic scintillator class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaScintillator.h")))  THaScintillator;
class __attribute__((annotate(R"ATTRDUMP(Generic shower detector class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaShower.h")))  THaShower;
class __attribute__((annotate(R"ATTRDUMP(A total shower detector (shower plus preshower))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaTotalShower.h")))  THaTotalShower;
class __attribute__((annotate(R"ATTRDUMP(Generic Cherenkov class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaCherenkov.h")))  THaCherenkov;
class __attribute__((annotate(R"ATTRDUMP(Header for analyzed event data in ROOT file)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaEvent.h")))  THaEventHeader;
class __attribute__((annotate(R"ATTRDUMP(Base class for event structure definition)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaEvent.h")))  THaEvent;
class __attribute__((annotate(R"ATTRDUMP(Track ID abstract base class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaTrackID.h")))  THaTrackID;
class __attribute__((annotate(R"ATTRDUMP(VDC class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaVDC.h")))  THaVDC;
class __attribute__((annotate(R"ATTRDUMP(VDCWire class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaVDCWire.h")))  __attribute__((annotate("$clingAutoload$src/THaVDCPlane.h")))  THaVDCWire;
class __attribute__((annotate(R"ATTRDUMP(A group of VDC hits)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaVDCCluster.h")))  __attribute__((annotate("$clingAutoload$src/THaVDCPlane.h")))  THaVDCCluster;
class __attribute__((annotate(R"ATTRDUMP(VDCHit class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaVDCHit.h")))  __attribute__((annotate("$clingAutoload$src/THaVDCPlane.h")))  THaVDCHit;
class __attribute__((annotate(R"ATTRDUMP(VDCPlane class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaVDCPlane.h")))  THaVDCPlane;
class __attribute__((annotate(R"ATTRDUMP(Pair of one U and one V cluster in a VDC chamber)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaVDCPoint.h")))  __attribute__((annotate("$clingAutoload$src/THaVDCChamber.h")))  THaVDCPoint;
class __attribute__((annotate(R"ATTRDUMP(VDC chamber (pair of a U and a V plane))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaVDCChamber.h")))  THaVDCChamber;
namespace VDC{class __attribute__((annotate(R"ATTRDUMP(VDC time-to-distance converter)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaVDCTimeToDistConv.h")))  TimeToDistConv;}
class __attribute__((annotate(R"ATTRDUMP(Track ID class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaVDCTrackID.h")))  THaVDCTrackID;
namespace VDC{class __attribute__((annotate(R"ATTRDUMP(VDC Analytic TTD Conv class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaVDCAnalyticTTDConv.h")))  AnalyticTTDConv;}
class __attribute__((annotate(R"ATTRDUMP(Pair of lower/upper VDC points)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaVDCPointPair.h")))  THaVDCPointPair;
class __attribute__((annotate(R"ATTRDUMP(VDC hit efficiency physics module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/VDCeff.h")))  VDCeff;
class __attribute__((annotate(R"ATTRDUMP(Single arm kinematics module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaPrimaryKine.h")))  __attribute__((annotate("$clingAutoload$src/THaElectronKine.h")))  THaPrimaryKine;
class __attribute__((annotate(R"ATTRDUMP(Single arm kinematics module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaElectronKine.h")))  THaElectronKine;
class __attribute__((annotate(R"ATTRDUMP(Single arm track-beam vertex module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaReactionPoint.h")))  THaReactionPoint;
class __attribute__((annotate(R"ATTRDUMP(Single arm track-beam vertex module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaReacPointFoil.h")))  THaReacPointFoil;
class __attribute__((annotate(R"ATTRDUMP(Two-arm vertex module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaTwoarmVertex.h")))  THaTwoarmVertex;
class __attribute__((annotate(R"ATTRDUMP(Two-arm vertex module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaAvgVertex.h")))  THaAvgVertex;
class __attribute__((annotate(R"ATTRDUMP(Extended target corrections module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaExtTarCor.h")))  THaExtTarCor;
class __attribute__((annotate(R"ATTRDUMP(Physics module for debugging)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaDebugModule.h")))  THaDebugModule;
class __attribute__((annotate(R"ATTRDUMP(Golden track module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaGoldenTrack.h")))  THaGoldenTrack;
class __attribute__((annotate(R"ATTRDUMP(Secondary particle kinematics module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaSecondaryKine.h")))  THaSecondaryKine;
class __attribute__((annotate(R"ATTRDUMP(Single arm kinematics module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaCoincTime.h")))  THaCoincTime;
class __attribute__((annotate(R"ATTRDUMP(Coinc.Time calc using only S2)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaS2CoincTime.h")))  THaS2CoincTime;
class __attribute__((annotate(R"ATTRDUMP(Track coordinates projected to detector plane)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaTrackProj.h")))  THaTrackProj;
class __attribute__((annotate("$clingAutoload$src/THaPostProcess.h")))  THaPostProcess;
class __attribute__((annotate("$clingAutoload$src/THaFilter.h")))  THaFilter;
class __attribute__((annotate(R"ATTRDUMP(Track energy loss correction module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaElossCorrection.h")))  THaElossCorrection;
class __attribute__((annotate(R"ATTRDUMP(Track energy loss correction module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaTrackEloss.h")))  THaTrackEloss;
class __attribute__((annotate(R"ATTRDUMP(Beam module using beam energy from EPICS)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaEpicsEbeam.h")))  THaEpicsEbeam;
class __attribute__((annotate(R"ATTRDUMP(Beam energy loss correction module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaBeamEloss.h")))  THaBeamEloss;
class __attribute__((annotate(R"ATTRDUMP(lorentz-vector output module)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaTrackOut.h")))  THaTrackOut;
class __attribute__((annotate("$clingAutoload$src/THaTriggerTime.h")))  THaTriggerTime;
class __attribute__((annotate(R"ATTRDUMP(ABC for a beam helicity detector)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaHelicityDet.h")))  THaHelicityDet;
class __attribute__((annotate(R"ATTRDUMP(Helper class for reading G0 helicity data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaG0HelicityReader.h")))  THaG0HelicityReader;
class __attribute__((annotate(R"ATTRDUMP(Beam helicity from G0 electronics in delayed mode)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaG0Helicity.h")))  THaG0Helicity;
class __attribute__((annotate(R"ATTRDUMP(Beam helicity from ADC (in time))ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaADCHelicity.h")))  THaADCHelicity;
class __attribute__((annotate(R"ATTRDUMP(In-time helicity from ADC and G0 readout)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaHelicity.h")))  THaHelicity;
class __attribute__((annotate(R"ATTRDUMP(deuterium photodisintegration kinematics)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaPhotoReaction.h")))  THaPhotoReaction;
class __attribute__((annotate(R"ATTRDUMP(Single arm proton kinematics)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaSAProtonEP.h")))  THaSAProtonEP;
class __attribute__((annotate("$clingAutoload$src/THaTextvars.h")))  THaTextvars;
class __attribute__((annotate(R"ATTRDUMP(Helper class for reading QWEAK helicity data)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$THaQWEAKHelicityReader.h")))  __attribute__((annotate("$clingAutoload$src/THaQWEAKHelicity.h")))  THaQWEAKHelicityReader;
class __attribute__((annotate(R"ATTRDUMP(Beam helicity from QWEAK electronics in delayed mode)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaQWEAKHelicity.h")))  THaQWEAKHelicity;
class __attribute__((annotate(R"ATTRDUMP(Event type handler)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaEvtTypeHandler.h")))  THaEvtTypeHandler;
class __attribute__((annotate(R"ATTRDUMP(Scaler Event handler)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaScalerEvtHandler.h")))  THaScalerEvtHandler;
class __attribute__((annotate(R"ATTRDUMP(EPICS Event handler)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaEpicsEvtHandler.h")))  THaEpicsEvtHandler;
class __attribute__((annotate(R"ATTRDUMP(Hall C event type 125)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$src/THaEvt125Handler.h")))  THaEvt125Handler;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "haDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef NDEBUG
  #define NDEBUG 1
#endif
#ifndef LINUXVERS
  #define LINUXVERS 1
#endif
#ifndef HAS_SSTREAM
  #define HAS_SSTREAM 1
#endif
#ifndef WITH_DEBUG
  #define WITH_DEBUG 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "src/THaFormula.h"
#include "src/THaVform.h"
#include "src/THaVhist.h"
#include "src/THaVar.h"
#include "src/THaVarList.h"
#include "src/THaCut.h"
#include "src/THaNamedList.h"
#include "src/THaCutList.h"
#include "src/THaInterface.h"
#include "src/THaRunBase.h"
#include "src/THaCodaRun.h"
#include "src/THaRun.h"
#include "src/THaRunParameters.h"
#include "src/THaDetMap.h"
#include "src/THaApparatus.h"
#include "src/THaDetector.h"
#include "src/THaSpectrometer.h"
#include "src/THaSpectrometerDetector.h"
#include "src/THaHRS.h"
#include "src/THaDecData.h"
#include "src/BdataLoc.h"
#include "src/THaOutput.h"
#include "src/THaString.h"
#include "src/THaTrackingDetector.h"
#include "src/THaNonTrackingDetector.h"
#include "src/THaPidDetector.h"
#include "src/THaSubDetector.h"
#include "src/THaAnalysisObject.h"
#include "src/THaDetectorBase.h"
#include "src/THaRTTI.h"
#include "src/THaPhysicsModule.h"
#include "src/THaVertexModule.h"
#include "src/THaTrackingModule.h"
#include "src/THaAnalyzer.h"
#include "src/THaPrintOption.h"
#include "src/THaBeam.h"
#include "src/THaIdealBeam.h"
#include "src/THaRasteredBeam.h"
#include "src/THaRaster.h"
#include "src/THaBeamDet.h"
#include "src/THaBPM.h"
#include "src/THaUnRasteredBeam.h"
#include "src/THaTrack.h"
#include "src/THaPIDinfo.h"
#include "src/THaParticleInfo.h"
#include "src/THaCluster.h"
#include "src/THaArrayString.h"
#include "src/THaScintillator.h"
#include "src/THaShower.h"
#include "src/THaTotalShower.h"
#include "src/THaCherenkov.h"
#include "src/THaEvent.h"
#include "src/THaTrackID.h"
#include "src/THaVDC.h"
#include "src/THaVDCPlane.h"
#include "src/THaVDCChamber.h"
#include "src/THaVDCPoint.h"
#include "src/THaVDCWire.h"
#include "src/THaVDCHit.h"
#include "src/THaVDCCluster.h"
#include "src/THaVDCTimeToDistConv.h"
#include "src/THaVDCTrackID.h"
#include "src/THaVDCAnalyticTTDConv.h"
#include "src/THaVDCPointPair.h"
#include "src/VDCeff.h"
#include "src/THaElectronKine.h"
#include "src/THaReactionPoint.h"
#include "src/THaReacPointFoil.h"
#include "src/THaTwoarmVertex.h"
#include "src/THaAvgVertex.h"
#include "src/THaExtTarCor.h"
#include "src/THaDebugModule.h"
#include "src/THaTrackInfo.h"
#include "src/THaGoldenTrack.h"
#include "src/THaPrimaryKine.h"
#include "src/THaSecondaryKine.h"
#include "src/THaCoincTime.h"
#include "src/THaS2CoincTime.h"
#include "src/THaTrackProj.h"
#include "src/THaPostProcess.h"
#include "src/THaFilter.h"
#include "src/THaElossCorrection.h"
#include "src/THaTrackEloss.h"
#include "src/THaBeamModule.h"
#include "src/THaBeamInfo.h"
#include "src/THaEpicsEbeam.h"
#include "src/THaBeamEloss.h"
#include "src/THaTrackOut.h"
#include "src/THaTriggerTime.h"
#include "src/THaHelicityDet.h"
#include "src/THaG0HelicityReader.h"
#include "src/THaG0Helicity.h"
#include "src/THaADCHelicity.h"
#include "src/THaHelicity.h"
#include "src/THaPhotoReaction.h"
#include "src/THaSAProtonEP.h"
#include "src/THaTextvars.h"
#include "src/THaQWEAKHelicity.h"
#include "src/THaQWEAKHelicityReader.h"
#include "src/THaEvtTypeHandler.h"
#include "src/THaScalerEvtHandler.h"
#include "src/THaEpicsEvtHandler.h"
#include "src/THaEvt125Handler.h"
#include "src/FileInclude.h"
#include "src/THaGlobals.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BdataLoc", payloadCode, "@",
"CrateLoc", payloadCode, "@",
"CrateLocMulti", payloadCode, "@",
"RoclenLoc", payloadCode, "@",
"THaADCHelicity", payloadCode, "@",
"THaADCHelicity::ChanDef_t", payloadCode, "@",
"THaAnalysisObject", payloadCode, "@",
"THaAnalyzer", payloadCode, "@",
"THaApparatus", payloadCode, "@",
"THaArrayString", payloadCode, "@",
"THaAvgVertex", payloadCode, "@",
"THaBPM", payloadCode, "@",
"THaBeam", payloadCode, "@",
"THaBeamDet", payloadCode, "@",
"THaBeamEloss", payloadCode, "@",
"THaBeamInfo", payloadCode, "@",
"THaBeamModule", payloadCode, "@",
"THaCherenkov", payloadCode, "@",
"THaCluster", payloadCode, "@",
"THaCodaRun", payloadCode, "@",
"THaCoincTime", payloadCode, "@",
"THaCut", payloadCode, "@",
"THaCutList", payloadCode, "@",
"THaDebugModule", payloadCode, "@",
"THaDecData", payloadCode, "@",
"THaDetMap", payloadCode, "@",
"THaDetMap::Module", payloadCode, "@",
"THaDetector", payloadCode, "@",
"THaDetectorBase", payloadCode, "@",
"THaElectronKine", payloadCode, "@",
"THaElossCorrection", payloadCode, "@",
"THaEpicsEbeam", payloadCode, "@",
"THaEpicsEvtHandler", payloadCode, "@",
"THaEvent", payloadCode, "@",
"THaEventHeader", payloadCode, "@",
"THaEvt125Handler", payloadCode, "@",
"THaEvtTypeHandler", payloadCode, "@",
"THaExtTarCor", payloadCode, "@",
"THaFilter", payloadCode, "@",
"THaFormula", payloadCode, "@",
"THaG0Helicity", payloadCode, "@",
"THaG0HelicityReader", payloadCode, "@",
"THaG0HelicityReader::ROCinfo", payloadCode, "@",
"THaGoldenTrack", payloadCode, "@",
"THaHRS", payloadCode, "@",
"THaHashList", payloadCode, "@",
"THaHelicity", payloadCode, "@",
"THaHelicityDet", payloadCode, "@",
"THaIdealBeam", payloadCode, "@",
"THaInterface", payloadCode, "@",
"THaNamedList", payloadCode, "@",
"THaNonTrackingDetector", payloadCode, "@",
"THaOutput", payloadCode, "@",
"THaPIDinfo", payloadCode, "@",
"THaParticleInfo", payloadCode, "@",
"THaPhotoReaction", payloadCode, "@",
"THaPhysicsModule", payloadCode, "@",
"THaPidDetector", payloadCode, "@",
"THaPostProcess", payloadCode, "@",
"THaPrimaryKine", payloadCode, "@",
"THaPrintOption", payloadCode, "@",
"THaQWEAKHelicity", payloadCode, "@",
"THaQWEAKHelicityReader", payloadCode, "@",
"THaQWEAKHelicityReader::ROCinfo", payloadCode, "@",
"THaRTTI", payloadCode, "@",
"THaRaster", payloadCode, "@",
"THaRasteredBeam", payloadCode, "@",
"THaReacPointFoil", payloadCode, "@",
"THaReactionPoint", payloadCode, "@",
"THaRun", payloadCode, "@",
"THaRunBase", payloadCode, "@",
"THaRunParameters", payloadCode, "@",
"THaS2CoincTime", payloadCode, "@",
"THaSAProtonEP", payloadCode, "@",
"THaScalerEvtHandler", payloadCode, "@",
"THaScintillator", payloadCode, "@",
"THaScintillator::DataDest", payloadCode, "@",
"THaSecondaryKine", payloadCode, "@",
"THaShower", payloadCode, "@",
"THaSpectrometer", payloadCode, "@",
"THaSpectrometerDetector", payloadCode, "@",
"THaSubDetector", payloadCode, "@",
"THaTextvars", payloadCode, "@",
"THaTotalShower", payloadCode, "@",
"THaTrack", payloadCode, "@",
"THaTrackEloss", payloadCode, "@",
"THaTrackID", payloadCode, "@",
"THaTrackInfo", payloadCode, "@",
"THaTrackOut", payloadCode, "@",
"THaTrackProj", payloadCode, "@",
"THaTrackingDetector", payloadCode, "@",
"THaTrackingModule", payloadCode, "@",
"THaTriggerTime", payloadCode, "@",
"THaTwoarmVertex", payloadCode, "@",
"THaUnRasteredBeam", payloadCode, "@",
"THaVDC", payloadCode, "@",
"THaVDCChamber", payloadCode, "@",
"THaVDCCluster", payloadCode, "@",
"THaVDCHit", payloadCode, "@",
"THaVDCPlane", payloadCode, "@",
"THaVDCPoint", payloadCode, "@",
"THaVDCPointPair", payloadCode, "@",
"THaVDCTrackID", payloadCode, "@",
"THaVDCWire", payloadCode, "@",
"THaVar", payloadCode, "@",
"THaVarList", payloadCode, "@",
"THaVertexModule", payloadCode, "@",
"THaVform", payloadCode, "@",
"THaVhist", payloadCode, "@",
"TrigBitLoc", payloadCode, "@",
"VDC::AnalyticTTDConv", payloadCode, "@",
"VDC::TimeToDistConv", payloadCode, "@",
"VDCeff", payloadCode, "@",
"WordLoc", payloadCode, "@",
"gHaApps", payloadCode, "@",
"gHaCuts", payloadCode, "@",
"gHaDB", payloadCode, "@",
"gHaEvtHandlers", payloadCode, "@",
"gHaPhysics", payloadCode, "@",
"gHaRun", payloadCode, "@",
"gHaTextvars", payloadCode, "@",
"gHaVars", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("haDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_haDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_haDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_haDict() {
  TriggerDictionaryInitialization_haDict_Impl();
}
