#include "stdafx.h"


template<typename T>
int test(T & val)
{
	try
	{
		val = {};
	}
	catch(...)
	{
		wcslen(__FUNCTIONW__ L"  error! ");
	}
}

int _tmain(int argc, const TCHAR * args)
{
	return 0;
}
