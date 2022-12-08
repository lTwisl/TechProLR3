#include <iostream>
#include <thread>
#include <chrono>

#include "Profiler.cpp"

int main()
{
    Profiler p;
    this_thread::sleep_for(5s);
}