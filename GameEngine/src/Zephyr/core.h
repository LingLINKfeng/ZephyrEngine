#pragma once
#ifdef ZEPHYR_PLATFORM_WINDOWS
	#ifdef ZEPHYR_BUILD_DLL
		#define ZEPHYR_API __declspec(dllexport)
	#else
		#define ZEPHYR_API __declspec(dllimport)
	#endif
#else
	#error ZEPHYR only supprt Windows!
#endif

