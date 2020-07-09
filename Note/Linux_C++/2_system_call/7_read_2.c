/*
 * @Author: your name
 * @Date: 2020-06-10 20:42:42
 * @LastEditTime: 2020-06-10 21:12:10
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Linux/2_system_call/7_read_2.c
 */
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

const int N = 64;

int main(int argc, char const *argv[])
{
    // 使用 read 函数从文件读取数据
    int fd;
    if ((fd = open("test.txt", O_RDONLY | O_CREAT, 0664)) == -1)
    {
        perror("fail to open");
        return -1;
    }

    // 读取文件内容，N 长度不够，会报错
    char buf[N] = "";
    ssize_t bytes;
#if 0
    if ((bytes = read(fd, buf, 10)) == -1)
    {
        perror("fail to read");
        return -1;
    }

    printf("buf = [%s]\n", buf);
    printf("bytes = %ld\n", bytes);

    // 文件数据都读取完毕，会返回 0
    char buf1[N] = "";
    bytes = read(fd, buf1, 32);
    printf("buf1 = [%s]\n", buf1);
    printf("bytes = %ld\n", bytes);
#endif

    // 读取文件所有内容（utf-8，一个汉字占3个字节，字母占一个）
    while ((bytes = read(fd, buf, 3)) != 0)
    {
        printf("buf = [%s]\n", buf);
        printf("bytes = %ld\n", bytes);
    }

    close(fd);

    return 0;
}