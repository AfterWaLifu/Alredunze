#pragma once

#ifdef A_IMPORT
	#define ALIB __declspec( dllimport )
#else
	#define ALIB __declspec( dllexport )
#endif