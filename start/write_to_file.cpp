//
// Created by LL06p on 24-7-1.
//
#include "interface.h"
#include "primitive.h"

#include <cstdio>
#include <string>
#include <cerrno>
#include <iostream>

void write_to_file(struct student stu[], int n) {
    std::string filename;
    std::printf("%s", u8"请输入保存到的文件名：");
    std::cin >> filename;
    std::FILE *file = std::fopen(filename.c_str(), "wb");
    if (!file) {
        std::perror("FileError:");
    }
    std::fwrite(&n, sizeof(int), 1, file);
    std::fwrite(stu, sizeof(student), n, file);
    std::fclose(file);
}