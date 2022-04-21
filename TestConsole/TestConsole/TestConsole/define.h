#include "STRUCTS.H"

#include "MathAlg.h"
#pragma once

#define GET_RESULT_BEGIN     MyArray2 ListOfCoordsSegments; \
ListOfCoordsSegments.clear(); \
_THE_STEP_

#define GET_RESULT_END(a,b,c,d,e) LOOP_GENERATE_SEGMENTS(a) GET_RESULT(b,c,d,e)

#define GET_RESULT_MIDLE     MyArray2 ListOfCoordsPoint; \
INIT_LIST_OF_COORDS_POINTS(Range.BeginOfSegm, Range.EndOfSegm, ListOfCoordsPoint, _Step, __ABS__, SizeT, push_back, clear) \


#define GET_RESULT_MIDLE1 MyArray1 FreeSpace; \
FreeSpace.clear(); \
FreeSpace.push_back(Range);

#define GET_RESULT_ALL GET_RESULT_BEGIN \
GET_RESULT_MIDLE \
GET_RESULT_END((AddElement((&ListOfCoordsPoint), &ListOfCoordsSegments)), SegmLength, (DefaultTypeUsingNumber)ListOfCoordsSegments.size(), Range.BeginOfSegm, Range.EndOfSegm)

#define GET_RESULT_ALL1 GET_RESULT_BEGIN \
GET_RESULT_MIDLE1 \
GET_RESULT_END((AddElement1((&FreeSpace), &ListOfCoordsSegments, &_Step)), SegmLength, (DefaultTypeUsingNumber)ListOfCoordsSegments.size(), Range.BeginOfSegm, Range.EndOfSegm)
