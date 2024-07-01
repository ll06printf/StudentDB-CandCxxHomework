//
// Created by LL06p on 24-7-1.
//
#include <cstdio>

#include "interface.h"

void inputEntry(struct student *stu) {
    std::printf("%s", u8"请输入id：");
    std::scanf("%d", &stu->id);
    std::printf("%s", u8"请输入名字：");
    std::scanf("%s", stu->name);
    std::printf("%s", u8"请输入专业：");
    std::scanf("%s", stu->major);
    std::printf("%s", u8"请输入各科分数以空格分隔：");
    stu->sum = 0;
    for (auto & i : stu->score) {
        std::scanf("%d", &i);
        stu->sum += i;
    }
}