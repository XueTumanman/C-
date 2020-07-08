/*
 * @Author: your name
 * @Date: 2020-06-10 21:15:06
 * @LastEditTime: 2020-06-10 21:18:01
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Linux/2_system_call/8_remove.c
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 使用 remove 删除文件
    if (remove("file.txt") == -1)
    {
        perror("fail to remove");
        return -1;
    }

    printf("delete done\n");

    return 0;
}
