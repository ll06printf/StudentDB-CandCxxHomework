//
// Created by LL06p on 24-7-1.
//
#include <cstdio>

#include "interface.h"
#include "primitive.h"

void output(struct student stu[], size_t n) {
    for (int i=0; i<n; ++i) {
        std::puts("******");
        displayEntry(stu+i);
    }
    std::puts("******");
}