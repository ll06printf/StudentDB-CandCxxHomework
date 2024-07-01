//
// Created by LL06p on 24-7-1.
//

#ifndef CHOMEWORK_INTERFACE_H
#define CHOMEWORK_INTERFACE_H

#include <cstddef>

#ifndef __cplusplus
    #include <stdbool.h>
#endif

// 学生数量
#define N 100
// 科目数量
#define M 2

struct student {
    int id;
    char name[15];
    char major[15];
    int score[M];
    int sum;
};

void input(struct student stu[], size_t n);

void output(struct student stu[], size_t n);

int del(struct student stu[], size_t n, int id);

void modify(struct student stu[], size_t n, int id);

/**
 * @brief 根据学号搜索出指定的学生信息，并在函数内输出。
 */
void search(struct student stu[], size_t n, int id);

void sort_sa(struct student stu[], size_t n);

void sort_sd(struct student stu[], size_t n);

void sort_nd(struct student stu[], size_t n);

void sort_na(struct  student stu[], size_t n);

/**
 * @brief 将学生信息存储到文件中，目标文件在过程内对用户询问
 */
void write_to_file(struct student stu[], int n);

/**
 * @brief 从文件读取学生信息并完全覆盖当前数组。
 * @return 文件中存储的学生信息数
 */
int read_from_file(struct student *stu);


#endif //CHOMEWORK_INTERFACE_H
