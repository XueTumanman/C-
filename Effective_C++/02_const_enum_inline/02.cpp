/*
 * @Author: your name
 * @Date: 2020-05-28 14:30:09
 * @LastEditTime: 2020-05-28 14:58:12
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Effective_C++/02_const.cpp
 */
#include <iostream>

using namespace std;

// class GamePlayer
// {
// private:
//     static const int m_numTurns = 5;    //常量声明式
//     int scores[m_numTurns];
// };

// const int GamePlayer::m_numTurns;   //常量定义式

class GamePlayer
{
private:
    enum
    {
        m_numTurns = 5  //避免下面的数组报错，而且 enum 不能被取地址
    };
    int scores[m_numTurns];
};

int main(int argc, char const *argv[])
{
    cout << "123" << endl;
    return 0;
}