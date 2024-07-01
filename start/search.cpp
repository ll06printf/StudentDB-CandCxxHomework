//
// Created by LL06p on 24-7-1.
//
#include "interface.h"
#include "primitive.h"

void search(struct student stu[], size_t n, int id) {
    auto target = findWithId(stu, n, id);
    if (target != stu + n) {
        std::printf("***%s***\n", u8"已找到");
        displayEntry(target);
        std::printf("*********", u8"已找到");
    } else {
        std::printf("%s", u8"未找到");
    }
    putchar('\n');
}