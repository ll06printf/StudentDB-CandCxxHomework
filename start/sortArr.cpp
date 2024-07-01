//
// Created by LL06p on 24-7-1.
//
#include "interface.h"
#include "primitive.h"

#include <cstdlib>

void sortArr(struct student stu[], size_t n, compareStudent *comp) {
    std::qsort(stu, n, sizeof (student),
            (int (*)(const void*, const void*))comp);
}
