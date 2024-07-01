//
// Created by LL06p on 24-7-1.
//
#include "interface.h"
#include "primitive.h"

int compareWithScore(const struct student *lhs, const struct student *rhs) {
    return lhs->sum - rhs->sum;
}