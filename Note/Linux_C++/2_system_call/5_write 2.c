/*
 * @Author: your name
 * @Date: 2020-06-10 16:43:56
 * @LastEditTime: 2020-06-10 17:04:46
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
    // 向文件写入数据
    int fd;

    // 只写+没有则创建+存在则清空
    fd = open("file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd == -1)
    {
        perror("fail to open");
        return -1;
    }

    // 使用write写入数据
    ssize_t bytes;
    // 如果规定长度超过写入长度，不知道会放进去什么东西
    if ((bytes = write(fd, "hello world\n", 12)) == -1)
    {
        perror("fail to write");
        return -1;
    }

    printf("bytes = %ld\n", bytes);

    close(fd);

    return 0;
}
