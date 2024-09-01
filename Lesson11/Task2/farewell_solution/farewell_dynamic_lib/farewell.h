#pragma once
#ifdef FAREWELL_DYNAMIC_LIB_EXPORTS
	#define FAREWELL_DLL_API __declspec(dllexport)
#else 
	#define FAREWELL_DLL_API __declspec(dllimport)
#endif

#include<string>

class Farewell
{
public:
	FAREWELL_DLL_API static  std::string print_farewell(std::string name);
};
