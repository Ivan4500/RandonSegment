#pragma once

#include "resource.h"


_Typedef int TypeArgc;
_Typedef char* TypeArgv;

#define CODE_APP(argc, argv)     Segment<DefaultTypeUsingNumber> _Range; \
_Range.BeginOfSegm = 0; \
_Range.EndOfSegm = 1000; \
_If(argc > 1) \
{ \
    S_Scan_F(argv[1], "%lf", &(_Range.BeginOfSegm)); \
} \
_If(argc > 2) \
{ \
    S_Scan_F(argv[2], "%lf", &(_Range.EndOfSegm)); \
} \
double Result[2] = { GetResult(_Range),GetResult1(_Range) }; \
Print_F("Result No 0 is %lf.\r\nResult No 1 is % lf.\r\nPress any key\r\n", Result[0], Result[1]); \
_PutCh(_GetCh());