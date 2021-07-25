#include "include/Timer.hh"
#include "include/Board.hh"
#include <iostream>

int main(int argc, char const *argv[]) {
    system("cls");
    int time = 3;
    Timer timer = Timer(Coordinate(0, 0), time);
    timer.run();

    return 0;
}
