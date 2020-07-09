/*
 * @作者 Author: XuTumanman
 * @Date: 2020-05-28 12:34:24
 * @LastEditors: XuTumanman
 * @LastEditTime: 2020-07-08 20:18:17
 * @Description: 
 */ 
/*
 * @Author: your name
 * @Date: 2020-05-28 12:34:24
 * @LastEditTime: 2020-07-08 20:18:11
 * @LastEditors: XuTumanman
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


int fun1(int a, int b)
{
    return 1;
}

int main(int argc, char const *argv[])
{
    cout << "123" << endl;
    return 0;
}
