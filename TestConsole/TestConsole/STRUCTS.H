#pragma once
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <direct.h>
#include <vector>
#include <cmath>
#include <iomanip>
#define _Using using
#define _NameSpace namespace
_Using _NameSpace std;

#define _Const_Expr constexpr
#define _Auto auto
#define _Virtual virtual
#define _SizeOf sizeof
#define _Return return
#define _Typedef typedef
#define GoTo goto
#define _Break break
#define _If if
#define _Else else
#define _For for
#define _While while
#define _Do do
#define _Continue continue
#define _Const const
#define _Struct struct
#define _Union union
#define _Class class
#define _Template template
#define TypeName typename
#define _Public public
#define _Private private
#define _Protected protected
#define _False false
#define _True true
#define _NULL NULL
_Typedef void _Void_;
#define DefaultArray vector
#define _DELETE_ELEMENT_(SomeArray,i) SomeArray.erase(SomeArray.begin() + i)
_Typedef bool DefaultTrueFalseType;
_Typedef char DefaultCharType;
_Typedef size_t SizeT;
_Typedef int DefaultIntType;
_Typedef signed _Signed;
_Typedef unsigned int DefaultUnsignedIntType;
_Typedef double DefaultRealNumType;
_Typedef FILE _File_;
_Typedef DefaultCharType* NulTermString;
#define _Interface(x) _Virtual x = 0

#define DefaultSearchValue -1
#define _GetCh _getch
#define _PutCh _putch
#define F_Print_F fprintf
#define S_Print_F sprintf_s
#define Print_F printf
#define Scan_F scanf_s
#define S_Scan_F sscanf_s
#define PressAnyKey _PutCh ((DefaultIntType)_GetCh)


#define DefaultOutStream stdout
#define DefaultInStream stdin

_Typedef DefaultUnsignedIntType DefaultTypeSeed;
_Typedef DefaultIntType DefaultTypeRandomNumber;
_Typedef _Void_ DefaultReturnTypeSrand;
_Typedef DefaultRealNumType DefaultTypeUsingNumber;
#define DefaultSeedValue 0
#define DefaultSrand srand
#define DefaultRand rand
#define DefaultRandMax RAND_MAX
#define DefaultSeed DefaultSeedValue


#define _Floor floor
#define __ABS__ abs
#define DAFAULT_COUNT_NUMBER 0



#define DefaultBegin (DefaultTypeUsingNumber)0
#define DefaultEnd (DefaultTypeUsingNumber)1000
#define DAFAULT_STEP 0.001
#define DECLARE_STEP(SomeRealType, SomeStepValue) _Const SomeRealType _Step = SomeStepValue;

_Template < TypeName SeedType= DefaultTypeSeed, TypeName  ReturnSrandType= DefaultReturnTypeSrand, TypeName RandomValueType= DefaultTypeRandomNumber >
_Struct pRandGen
{
// _Public:
	ReturnSrandType(*pSrand)(SeedType)= DefaultSrand;
	RandomValueType(*pRand)()= DefaultRand;
	DefaultTypeRandomNumber MaxRand = DefaultRandMax;
} ;
_Template < TypeName SomeRealNumType = DefaultRealNumType>
 _Struct Segment
{
	SomeRealNumType BeginOfSegm;
	SomeRealNumType EndOfSegm;;
};