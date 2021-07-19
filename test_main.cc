#include "Timer.hh"
#include "Board.hh"
#include <iostream>

int main(int argc, char const *argv[]) {
    std::string exec_type = argv[1];
    if (exec_type == "timer") {
        system("cls");
        int time = 3;
        Timer timer = Timer(Coordinate(0, 0), time);
        timer.run();
    }
    else if (exec_type == "board") {
        system("cls");
        int width = 6;
        int height = 5;
        Board board = Board(Coordinate(0, 0), width, height);
        board.run();
    }
    else {
        std::cout << "error" << std::endl;
        return 1;
    }

    return 0;
}
