#include "Timer.hh"
#include "Utilities.hh"
#include <iostream>
#include <time.h>
#include <cmath>
#include <thread>
#include <chrono>
#include <algorithm>

int TimerColor::toColorCode() {
    return m_color_enum;
}

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
        remain_time = m_max_time - ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
        show(remain_time);
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
    } while (remain_time > 0);
}

void Timer::show(double remain_time) {
    int position_x = 0;
    int position_y = 0;
    int max_print_bar_num = 30;
    int print_bar_num;
    print_bar_num = (int) std::max(0., round(remain_time / m_max_time * max_print_bar_num));
    GoToCursorPosition(position_x, position_y);
    ChangePrintColor(m_original_color);
    std::string remain_time_str = "Remain time: ";
    // std::cout << std::string(remain_time_str.length(), " "); // what's wrong with it?
    // std::cout << std::string(max_print_bar_num, " ");        // what's wrong with it?
    for (int print_times = 0; print_times < remain_time_str.length(); print_times ++) std::cout << " ";
    std::cout << std::endl;
    for (int print_times = 0; print_times < max_print_bar_num; print_times ++) std::cout << " ";
    GoToCursorPosition(position_x, position_y);
    ChangePrintColor(m_timer_color);
    std::cout << remain_time_str << std::endl;
    for (int print_times = 0; print_times < print_bar_num; print_times ++) std::cout << "|";
    std::cout << std::endl;
    ChangePrintColor(m_original_color);
}
