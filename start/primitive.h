/// @file 该文件声明了对 struct student 的操作原语.
// Created by LL06p on 24-7-1.
//

#ifndef STUDENTDB_PRIMITIVE_H
#define STUDENTDB_PRIMITIVE_H

#include <algorithm>
#include <cstdio>

#include "interface.h"

/**
 * @brief 用于比较学生信息的函数别名
 */
typedef int compareStudent(const struct student*lhs, const struct student*rhs);

/**
 * @brief 依据内置的格式输出学生信息
 */
void displayEntry(struct student *stu);

/**
 * @brief 按照内置的交互方式输入学生信息
 */
void inputEntry(struct student *stu);

/**
 * @brief 从数组从找出指定id的条目，并返回它的指针
 */
student *findWithId(struct student stu[], size_t n, int id);

/**
 * @brief 对学生信息进行排序，比较的函数由参数给出
 */
void sortArr(struct student stu[], size_t n, compareStudent *comp);

int compareWithName(const struct student *lhs, const struct student *rhs);

int compareWithScore(const struct student *lhs, const struct student *rhs);

#endif //STUDENTDB_PRIMITIVE_H
