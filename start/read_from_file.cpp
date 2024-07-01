//
// Created by LL06p on 24-7-1.
//
#include "interface.h"
#include "primitive.h"

#include <cstdio>
#include <iostream>

int read_from_file(struct student *stu) {
    std::string filename;
    std::printf("%s", u8"请输入读取到的文件名：");
    std::cin >> filename;
    std::FILE *file = std::fopen(filename.c_str(), "rb");
    if (!file) {
        std::perror("FileError:");
    }

    int n;
    std::fread(&n, sizeof(int), 1, file);
    std::fread(stu, sizeof(student), n, file);

    std::fclose(file);

    return n;
}