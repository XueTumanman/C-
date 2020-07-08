/*
 * @Author: your name
 * @Date: 2020-06-10 15:54:17
 * @LastEditTime: 2020-06-10 16:32:31
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Linux/2_system_call/2_close_1.c
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{

// 测试一个进程创建的文件描述符个数
// 一个程序运行期间最多可以创建的文件描述符数量 = 1024（我是 187522）
#if 0
    int fd;
    while (1)
    {
        fd = open("file.txt", O_RDONLY | O_CREAT, 0664);

        if (fd == -1)
        {
            perror("fail to open");
            // break;
            return -1;
        }

        printf("fd = %d\n", fd);
    }
#endif

// 测试文件描述符的规律
/*
1、文件描述符从小到大依次排列
2、中途有描述符被关闭，则新描述符会补齐之前的，在依次创建
*/
#if 1
    int fd1, fd2, fd3, fd4;

    fd1 = open("test.txt", O_RDONLY | O_CREAT, 0664);
    fd2 = open("test.txt", O_RDONLY | O_CREAT, 0664);
    fd3 = open("test.txt", O_RDONLY | O_CREAT, 0664);
    fd4 = open("test.txt", O_RDONLY | O_CREAT, 0664);

    printf("fd1 = %d\n", fd1);
    printf("fd2 = %d\n", fd2);
    printf("fd3 = %d\n", fd3);
    printf("fd4 = %d\n", fd4);

    close(fd2);

    int fd5, fd6;
    fd5 = open("test.txt", O_RDONLY | O_CREAT, 0664);
    fd6 = open("test.txt", O_RDONLY | O_CREAT, 0664);
    printf("fd5 = %d\n", fd5);
    printf("fd6 = %d\n", fd6);

#endif

    return 0;
}
