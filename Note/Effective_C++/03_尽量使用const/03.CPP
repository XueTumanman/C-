/*
 * @Author: your name
 * @Date: 2020-05-28 14:57:57
 * @LastEditTime: 2020-05-28 17:21:23
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Effective_C++/03_尽量使用const/03.CPP
 */
#include <iostream>

using namespace std;

class Rational
{
public:
    int a;
};

const Rational operator*(const Rational &l, const Rational &r)
{
    Rational n;
    n.a = l.a * r.a;
    return n;
}

void myPrint(const int b[])
{
    cout << b[0] << endl;
    // b[0] = 0;    //不能用，只读
}

int main(int argc, char const *argv[])
{
    // Rational l, r, c;
    // l.a = 10;
    // r.a = 2;
    // c.a = 1;
    // (l * r) = c;

    // int a[5] = {1, 2, 3, 4, 5};
    // myPrint(a);

    // mutable;

     int a = 1;
    int *p = &a;
    *p = 2;
    cout << a << endl;

    return 0;
}
