#include "Timer.hh"
#include <iostream>

int main(int argc, char const *argv[]) {
    if (argv[1] == "timer") {
        system("clear");
        int time = 3;
        Timer timer = Timer(time);
        timer.run();
    }
    else if (argv[1] == "board") {
    }
    else {
        std::cout << "error" << std::endl;
    }

    system("pause");
    return 0;
}

