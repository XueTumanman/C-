/*
 * @Author: your name
 * @Date: 2020-06-10 16:43:56
 * @LastEditTime: 2020-06-10 16:46:53
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Linux/2_system_call/4_write.c
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    // 向终端写入数据
    // 对 1 这个文件描述符进行操作
    if (write(1, "hello world\n", 12) == -1)
    {
        perror("fail to write");
        return -1;
    }

    return 0;
}
