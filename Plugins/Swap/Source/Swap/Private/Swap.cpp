#include "Swap.h"

#include "HAL/Platform.h"

#if PLATFORM_WINDOWS
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/WindowsHWrapper.h"
#endif

THIRD_PARTY_INCLUDES_START
#include "lib.h"
THIRD_PARTY_INCLUDES_END

#if PLATFORM_WINDOWS
#include "Windows/HideWindowsPlatformTypes.h"
#endif

#include "Modules/ModuleManager.h"

#include <string>

FString FSwap::SwapConcat(FString &a, FString &b) {
  std::string _a(TCHAR_TO_UTF8(*a));
  std::string _b(TCHAR_TO_UTF8(*b));

  std::string _ret = swap_concat(_a, _b);

  a = FString(UTF8_TO_TCHAR(_a.c_str()));
  b = FString(UTF8_TO_TCHAR(_b.c_str()));
  return a = FString(UTF8_TO_TCHAR(_ret.c_str()));
}

IMPLEMENT_MODULE(FSwap, Swap)