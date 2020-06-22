/*
 * @Author: your name
 * @Date: 2020-05-28 12:34:24
 * @LastEditTime: 2020-05-28 14:27:46
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Effective_C++/test.cpp
 */
#include <iostream>

using namespace std;

class GamePlayer
{
private:
    static const int m_numTurns = 5;
    int scores[m_numTurns];
};

const int GamePlayer::m_numTurns;

int main(int argc, char const *argv[])
{
    cout << "123" << endl;
    return 0;
}
