/*
 * @Author: your name
 * @Date: 2020-05-29 18:37:19
 * @LastEditTime: 2020-05-29 18:58:20
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C++笔记/C++日期和时间/日期和时间.cpp
 */
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

void test01()
{
    // 基于当前系统的日期和时间
    time_t now = time(0);

    // 把 now 转换格式
    string dt = ctime(&now);

    cout << "本地时间：" << dt << endl;

    // 用 tm 结构接收格林尼治标准时间
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);

    cout << "UTC 日期和时间：" << dt << endl;
}

void test02()
{
    time_t now = time(0);

    cout << "1970年 到目前经过的秒数：" << now << endl;

    tm *ltm = localtime(&now);

    cout << "年：" << 1900 + ltm->tm_year << endl;
    cout << "月: " << 1 + ltm->tm_mon << endl;
    cout << "日: " << ltm->tm_mday << endl;
    cout << "时间: " << ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}

int main(int argc, char const *argv[])
{
    test01();

    test02();

    return 0;
}
