/*
 * @Author: your name
 * @Date: 2020-06-10 20:28:35
 * @LastEditTime: 2020-06-10 20:32:50
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Linux/2_system_call/6_read_1.c
 */
#include <unistd.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 使用 read 函数从终端读取数据
    // 使用 0 文件描述符从终端读取数据

    ssize_t bytes;
    char str[32] = "";

    // 如果终端输入的字节数大于第三个参数，则只会读取第三个参数对应的字节数，返回值也是
    // 如果终端输入的字节数小于第三个参数，则只会读取输入的数据+换行符，返回值 = 输入数据 +1
    if ((bytes = read(0, str, 6)) == -1)
    {
        perror("fail to read");
        return -1;
    }

    printf("str = [%s]\n", str);
    printf("bytes = %ld\n", bytes);

    return 0;
}
