#include "Clock.h"

Clock::Clock() {
    start = clock();
}
void Clock::GetElapsedTime() {
    end = clock() - start;
    printf ("It took me %f seconds.\n",((float)end)/CLOCKS_PER_SEC);
}

void Clock::Restart() {
    // start = clock();
    //НУ ЧТО ЗА ПОЕБОТИНА, ГОСПОДИ, КАК ОНО ДОЛЖНО РАБОТАТЬ
}
