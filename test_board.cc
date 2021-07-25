#include "include/Timer.hh"
#include "include/Board.hh"
#include <iostream>

int main(int argc, char const *argv[]) {
    system("cls");
    int width = 6;
    int height = 5;
    Board board = Board(Coordinate(0, 0), width, height);
    board.run();

    return 0;
}
