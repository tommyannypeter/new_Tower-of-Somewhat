#include "Timer.hh"
#include "Board.hh"
#include <iostream>

int main(int argc, char const *argv[]) {
    std::string exec_type = argv[1];
    if (exec_type == "timer") {
        system("clear");
        int time = 3;
        Timer timer = Timer(Coordinate(0, 0), time);
        timer.run();
    }
    else if (exec_type == "board") {
        Board board = Board(Coordinate(0, 0), 5, 6);
        board.run();
    }
    else {
        std::cout << "error" << std::endl;
    }

    system("pause");
    return 0;
}
