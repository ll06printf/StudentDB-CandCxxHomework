//
// Created by LL06p on 24-7-1.
//
#include <cstdio>

#include "interface.h"
#include "primitive.h"

void displayEntry(struct student *stu) {
    std::printf("%s:%s\n", u8"姓名", stu->name);
    std::printf("%s:%d\n", u8"学号", stu->id);
    std::printf("%s:%s\n", u8"专业", stu->major);
    std::printf("%s:", u8"分数");
    for (auto i : stu->score) {
        std::printf("%d ", i);
    }
    putchar('\n');
    std::printf("%s:%d\n", u8"总分", stu->sum);
}
