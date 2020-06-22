/*
 * @Author: your name
 * @Date: 2020-05-29 20:08:22
 * @LastEditTime: 2020-05-29 20:38:21
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /C++笔记/C++多线程/多线程.cpp
 */
#include <iostream>
#include <cstdlib>
#include <thread>

using namespace std;

const int NUM_THREADS = 5;

thread::id main_thread_id = this_thread::get_id();

void hello()
{
    cout << "Hello Concurrent World\n";

    if (main_thread_id == this_thread::get_id())
    {
        cout << "This is the main thread.\n";
    }
    else
    {
        cout << "This is not the main thread.\n";
    }
}

void pause_thread(int n)
{
    this_thread::sleep_for(chrono::seconds(n));
    cout << "pause of " << n << " seconds ended\n";
}

int main()
{
    thread t(hello);

    // 可以并发执行多少个
    cout << t.hardware_concurrency() << endl;
    cout << "native_handle" << t.native_handle() << endl;

    t.join();
    thread a(hello);
    a.detach();
    thread threads[5]; // 默认构造线程

    cout << "Spawning 5 threads...\n";
    for (int i = 0; i < 5; ++i)
        threads[i] = thread(pause_thread, i + 1); // move-assign threads
    cout << "Done spawning threads. Now waiting for them to join:\n";
    for (auto &thread : threads)
        thread.join();
    cout << "All threads joined!\n";

    return 0;
}