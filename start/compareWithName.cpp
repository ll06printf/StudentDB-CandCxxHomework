//
// Created by LL06p on 24-7-1.
//
#include "interface.h"
#include "primitive.h"

#include <cstring>

int compareWithName(const struct student *lhs, const struct student *rhs) {
    return std::strcmp(lhs->name, rhs->name);
};
