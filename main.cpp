#include <iostream>
#include "Clock.h"
#include <cmath>

int main() {
    int i = 0;
    auto clock = new Clock();
    while(i < 100) {
        i++;
        std::cout << (std::pow(30 ,200)) << std::endl;
        clock->GetElapsedTime();
        clock->Restart();
    }
    return 777;
}
