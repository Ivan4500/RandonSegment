// pch.cpp: файл исходного кода, соответствующий предварительно скомпилированному заголовочному файлу

#include "pch.h"

// При использовании предварительно скомпилированных заголовочных файлов необходим следующий файл исходного кода для выполнения сборки.


DefaultTrueFalseType AddElement(MyArray2* pListOfCoordsPoints, MyArray2* pListOfCoordsSegments)
{
    _GENERATE_RANDOM_SEGMENT((*pListOfCoordsPoints), (*pListOfCoordsSegments), RandNumber, SegmLength, __ABS__, SizeT, size, clear, push_back, _DELETE_ELEMENT_)
}
DefaultTrueFalseType AddElement1(MyArray1* pFreeSpace, MyArray2* pListOfCoordsSegments, const DefaultTypeUsingNumber* p_step) {
    _GENERATE_RANDOM_SEGMENT_1((*pListOfCoordsSegments), DefaultTypeUsingNumber, (*p_step), RandNumber, (*pFreeSpace), BeginOfSegm, EndOfSegm, SegmLength, SizeT, size, push_back, _DELETE_ELEMENT_)
}

DefaultTypeUsingNumber GetResult(Segment<DefaultTypeUsingNumber> Range) {
    GET_RESULT_ALL
}

DefaultTypeUsingNumber GetResult1(Segment<DefaultTypeUsingNumber> Range) {
    GET_RESULT_ALL1
}