/*
 * @Author: your name
 * @Date: 2020-05-29 19:42:02
 * @LastEditTime: 2020-05-29 19:54:44
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C++笔记/C++信号处理/信号处理.cpp
 */

#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int signum)
{
    cout << "Interrupt signal (" << signum << ") received." << endl;

    // 清理并关闭
    // 终止程序

    exit(signum);
}

int main(int argc, char const *argv[])
{
    int i = 0;

    // 注册信号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);

    while (++i)
    {
        cout << "Going to sleep...." << endl;
        if (i == 3)
        {
            raise(SIGINT);
        }

        sleep(2);
    }

    return 0;
}
