//
// Created by LL06p on 24-7-1.
//
#include <cstddef>

#include "interface.h"
#include "primitive.h"

void input(struct student stu[], size_t n) {
    for (int i=0; i<n; ++i) {
        std::printf("***%s %d / %zu %s***\n", u8"当前为第", i+1, n, u8"个学生信息");
        inputEntry(stu+i);
    }
    std::printf("%s", u8"输入完成\n");
}