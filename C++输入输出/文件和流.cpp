/*
 * @Author: your name
 * @Date: 2020-05-29 19:06:28
 * @LastEditTime: 2020-05-29 19:41:20
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C++笔记/文件和流.cpp
 */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    char data[100];

    // 以写模式打开文件
    ofstream outfile;
    outfile.open("C++输入输出/afile.dat");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    // 向文件写入用户输入的数据
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    // 再次向文件写入用户输入的数据
    outfile << data << endl;

    // 关闭打开的文件
    outfile.close();

    // 以读模式打开文件
    ifstream infile;
    infile.open("C++输入输出/afile.dat");

    cout << "Reading from the file" << endl;
    infile >> data;

    // 在屏幕上写入数据
    cout << data << endl;

    // 再次从文件读取数据，并显示它
    infile >> data;
    cout << data << endl;

    // 关闭打开的文件
    infile.close();

    return 0;
}
