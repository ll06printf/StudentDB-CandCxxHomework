//
// Created by LL06p on 24-7-1.
//
#include <algorithm>

#include "interface.h"
#include "primitive.h"

void modify(struct student stu[], size_t n, int id) {
    auto toModify = findWithId(stu, n, id);
    if (toModify != stu + n) {
        std::printf("%s\n", u8"找到条目，请重新输入信息");
        inputEntry(toModify);
    } else {
        std::printf("%s\n", u8"未找到条目");
    }
}