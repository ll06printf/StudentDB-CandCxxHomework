//
// Created by LL06p on 24-7-1.
//
#include "interface.h"
#include "primitive.h"



void sort_sa(struct student stu[], size_t n) {
    sortArr(stu, n, compareWithScore);
}
