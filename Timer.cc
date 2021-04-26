#include <iostream>
#include <time.h>
#include <cmath>

class Timer {
    double m_max_time;
public:
    Timer(double max_time) : m_max_time{max_time} {
    }

    ~Timer() {
    }

    void run() {
        clock_t start_time;
        clock_t end_time;
        double remain_time;
        start_time = clock();
        end_time = clock()
        do {
            remain_time = m_max_time - ((double) (start_time - end_time)) / CLOCKS_PER_SEC;
            show(remain_time);
        } while (remain_time > 0);
    }

    void show(double remain_time) {
        int max_print_bar_num = 30;
        int print_bar_num;
        print_bar_num = (int) round(remain_time / m_max_time * max_print_bar_num);
        if (print_bar_num < 0) print_bar_num = 0;
        std::cout << "Remain time: " << std::endl;
        for (int print_times = 0; print_times < print_bar_num ; print_times ++) std::cout << "|";
        std::cout << std::endl;
    }
}