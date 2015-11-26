// FCC.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "FCC.h"


// This is an example of an exported variable
FCC_API int nFCC=0;

// This is an example of an exported function.
extern FCC_API signed int __stdcall double_value(signed int input)
{
	return input * 4;
}