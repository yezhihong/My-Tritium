#ifndef PODD_FileInclude
#define PODD_FileInclude

//////////////////////////////////////////////////////////////////////////
//
// FileInclude.h
//
// Helper functions for supporting '#include' directives in
// configuration files
//
//////////////////////////////////////////////////////////////////////////

#include "Rtypes.h"
#include <string>

namespace Podd {

  extern const std::string kIncTag;
  extern const std::string kWhiteSpace;

  Int_t GetIncludeFileName( const std::string& line, std::string& incfile );
  Int_t CheckIncludeFilePath( std::string& incfile );

}

#endif
