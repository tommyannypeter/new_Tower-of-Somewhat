#include "Timer.hh"
#include <iostream>

int main(int argc, char const *argv[]) {
    std::string exec_type = argv[1];
    if (exec_type == "timer") {
        system("clear");
        int time = 3;
        Timer timer = Timer(time);
        timer.run();
    }
    else if (exec_type == "board") {
    }
    else {
        std::cout << "error" << std::endl;
    }

    system("pause");
    return 0;
}

