//
// Created by LL06p on 24-7-1.
//
#include <algorithm>
#include <utility>

#include "interface.h"
#include "primitive.h"

int del(struct student stu[], size_t n, int id) {
    auto toRemove = findWithId(stu, n, id);
    if (toRemove != stu + n) {
        for (auto nxt = toRemove+1; nxt != stu+n; ++nxt, ++toRemove) {
            *toRemove = *nxt;
        }
        std::printf("%s\n", u8"成功删除");
        return 1;
    } else {
        std::printf("%s\n", u8"未找到条目");
        return 0;
    }
}
