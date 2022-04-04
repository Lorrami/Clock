#include "Clock.h"

Clock::Clock() {
    start = clock();
}
float Clock::GetElapsedTime() {
    clock_t end = clock() - start;
    return ((float)end)/CLOCKS_PER_SEC;
}

void Clock::Restart() {
    start = clock();
}
