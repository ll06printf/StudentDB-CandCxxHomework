//
// Created by LL06p on 24-7-1.
//
#include "interface.h"
#include "primitive.h"

#include <algorithm>

void sort_nd(struct student stu[], size_t n) {
    sortArr(stu, n, compareWithName);
    std::reverse(stu, stu+n);
}