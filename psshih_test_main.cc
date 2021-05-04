#include "Timer.hh"
#include <iostream>

int main() {
    system("clear");
    int time = 3;
    Timer timer = Timer(time);
    timer.run();

    return 0;
}