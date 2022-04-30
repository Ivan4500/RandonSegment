#include "pch.h"


#define _MY_RAND_ RandomDevice rd; \
_MT_ _GEN_(rd());  \
_Return gen();

DefaultTypeRandomNumber MyRand()
{
	_MY_RAND_
}