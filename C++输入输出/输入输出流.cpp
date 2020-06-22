/*
 * @Author: your name
 * @Date: 2020-05-29 19:03:07
 * @LastEditTime: 2020-05-29 19:04:47
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C++笔记/C++输入输出/输入输出流.cpp
 */

#include <iostream>
#include <string>

using namespace std;

// 标准错误流
void test01()
{
    string str = "Unable to read...";

    // cerr 会立即输出
    cerr << "Erroe message：" << str << endl;
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
