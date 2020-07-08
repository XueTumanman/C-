/*
 * @Author: your name
 * @Date: 2020-06-10 10:29:17
 * @LastEditTime: 2020-06-10 11:43:05
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Linux/2_system_call/1_open.c
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char const *argv[])
{
       int fd;

       // 使用 open 函数【打开、创建】文件
       fd = open("file.txt", O_RDONLY);

       if (fd == -1)
       {
              // 通过全局变量 errno 打印错误码
              // 需要添加头文件 errno.h
              printf("error = %d\n", errno);

              // 通过 perror 输出函数调用失败的相关信息
              perror("fail to open");

              return -1;
       }

       printf("fd = %d\n", fd);

       return 0;
}
