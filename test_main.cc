#include "Timer.hh"
#include "Ball.hh"
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
        Ball ball_1 = Ball(ColorName::Ball_grey);
        ball_1.show();

        Ball ball_2 = Ball(ColorName::Ball_cyan);
        ball_2.pickedUp();
        ball_2.show();

        Ball ball_3 = Ball(ColorName::Ball_green);
        ball_3.pickedUp();
        ball_3.putDown();
        ball_3.show();

        Ball ball_4 = Ball(ColorName::Ball_red);
        ball_4.show();

        Ball ball_5 = Ball(ColorName::Ball_yellow);
        ball_5.show();

        std::cout << std::endl;
    }
    else {
        std::cout << "error" << std::endl;
    }

    system("pause");
    return 0;
}
