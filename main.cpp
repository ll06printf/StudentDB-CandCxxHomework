#include <cstdlib>
#include <cstdio>
#include <iostream>

#include "start/menu.h"
#include "start/interface.h"

struct student studentDB[N];

int main() {

#ifndef NDEBUG
    std::setbuf(stdout, nullptr);
#endif

    size_t currentSize = 0;

    do {
        std::printf("%s", menu);
        char no;
        std::printf("%s", u8"请输出操作序号：");
        std::scanf("%c", &no);

        switch (no) { // 输出
            case '0':
                output(studentDB, currentSize);
                break;
            case '1': { // 输入
                int n;
                std::printf("%s", u8"需要输入的学生信息的数量：");
                std::scanf("%d", &n);
                input(studentDB + currentSize, n);
                currentSize += n;
                break;
            }
            case '2': { // 修改
                int id;
                std::printf("%s", u8"请输入需要修改的学生信息的学号：");
                std::scanf("%d", &id);
                modify(studentDB, currentSize, id);
                break;
            }
            case '3': { // 删除
                int id;
                std::printf("%s", u8"请输入需删除的学生的学号：");
                std::scanf("%d", &id);
                currentSize -= del(studentDB, currentSize, id);
                break;
            }
            case '4': { // 搜索
                int id;
                std::printf("%s", u8"请输入需要搜索的学号：");
                std::scanf("%d", &id);
                search(studentDB, currentSize, id);
                break;
            }

            case '5': // 排序
                sort_sd(studentDB, currentSize);
                break;
            case '6':
                sort_sa(studentDB, currentSize);
                break;
            case '7':
                sort_nd(studentDB, currentSize);
                break;
            case '8':
                sort_na(studentDB, currentSize);
                break;

            case 'w':
                write_to_file(studentDB, currentSize);
                break;
            case 'r':
                currentSize = read_from_file(studentDB);
                break;
            case 'q':
                std::exit(EXIT_SUCCESS);
            default:
                std::printf("%s\n", u8"无效选项");
                continue;
        }

        int ch;
        while (ch = getchar(), ch != EOF && ch != '\n');

    } while (true);
}
