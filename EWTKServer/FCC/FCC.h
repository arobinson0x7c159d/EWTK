// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the FCC_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// FCC_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef FCC_EXPORTS
#define FCC_API __declspec(dllexport)
#else
#define FCC_API __declspec(dllimport)
#endif

// This class is exported from the FCC.dll
class FCC_API CFCC {
public:
	CFCC(void);
	// TODO: add your methods here.
};

extern FCC_API int nFCC;

extern FCC_API signed int __stdcall double_value(signed int input);
