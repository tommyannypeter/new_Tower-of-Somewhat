#ifndef TIMER_HH
#define TIMER_HH

#include "Utilities.hh"

class Timer {
private:
    double m_max_time;
    ColorName m_color_name;

public:
    Timer(double max_time);
    ~Timer();

    void run();
    void show(double remain_time);
};

#endif
