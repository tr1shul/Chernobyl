#pragma once

#ifdef CB_PLATFORM_WINDOWS
	#ifdef CB_BUILD_DLL
		#define CHERNOBYL_API __declspec(dllexport)
	#else
		#define CHERNOBYL_API __declspec(dllimport)
	#endif // CB_BUILD_DLL
#else
	#error Chernobyl only supports Windows!
#endif // CB_PLATFORM_WINDOWS
