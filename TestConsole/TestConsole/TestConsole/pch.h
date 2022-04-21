// pch.h: это предварительно скомпилированный заголовочный файл.
// Перечисленные ниже файлы компилируются только один раз, что ускоряет последующие сборки.
// Это также влияет на работу IntelliSense, включая многие функции просмотра и завершения кода.
// Однако изменение любого из приведенных здесь файлов между операциями сборки приведет к повторной компиляции всех(!) этих файлов.
// Не добавляйте сюда файлы, которые планируете часто изменять, так как в этом случае выигрыша в производительности не будет.

#ifndef PCH_H
#define PCH_H

// Добавьте сюда заголовочные файлы для предварительной компиляции
#include "framework.h"


#include "define.h"
#include "STRUCTS.H"
#include "MathAlg.h"
#include "License.h"
_Typedef DefaultArray<Segment<DefaultTypeUsingNumber>> MyArray1;
_Typedef DefaultArray<DefaultTypeUsingNumber> MyArray2;

DefaultTrueFalseType AddElement(MyArray2* pListOfCoordsPoints, MyArray2* pListOfCoordsSegments);
DefaultTrueFalseType AddElement1(MyArray1* pFreeSpace, MyArray2* pListOfCoordsSegments, const DefaultTypeUsingNumber* p_step);
DefaultTypeUsingNumber GetResult(Segment<DefaultTypeUsingNumber> Range);
DefaultTypeUsingNumber GetResult1(Segment<DefaultTypeUsingNumber> Range);

#endif //PCH_H
