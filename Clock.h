#pragma once

#include <cstdio>
#include <ctime>
#include <cmath>

class Clock {
private:
    clock_t start;
    clock_t end{};
public:
    Clock();
    ~Clock() = delete;
public:
    void GetElapsedTime();
    void Restart();
};
