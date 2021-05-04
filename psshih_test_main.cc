#include "Timer.hh"

int main() {
    int time = 3;
    Timer timer = Timer(time);
    timer.run();

    return 0;
}