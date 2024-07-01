//
// Created by LL06p on 24-7-1.
//
#include <algorithm>

#include "interface.h"
#include "primitive.h"

student *findWithId(struct student stu[], size_t n, int id) {
    return  std::find_if(stu, stu+n, [id](student &stu) {
        return stu.id == id;
    });
}