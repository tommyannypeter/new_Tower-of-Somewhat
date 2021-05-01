#include "Timer.hh"
#include <iostream>
#include <time.h>
#include <cmath>
#include <thread>
#include <chrono>
#include <algorithm>

Timer::Timer(double max_time) : m_max_time{max_time} {
}

Timer::~Timer() {
}

void Timer::run() {
    clock_t start_time;
    clock_t end_time;
    double remain_time;
    start_time = clock();
    do {
        end_time = clock();
        remain_time = m_max_time - ((double) (start_time - end_time)) / CLOCKS_PER_SEC;
        show(remain_time);
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    } while (remain_time > 0);
}

void Timer::show(double remain_time) {
    int max_print_bar_num = 30;
    int print_bar_num;
    print_bar_num = (int) std::max(0., round(remain_time / m_max_time * max_print_bar_num));
    std::cout << "Remain time: " << std::endl;
    for (int print_times = 0; print_times < print_bar_num ; print_times ++) std::cout << "|";
    std::cout << std::endl;
}