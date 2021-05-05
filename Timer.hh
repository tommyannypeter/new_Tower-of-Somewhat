#ifndef TIMER_HH
#define TIMER_HH

class Timer {
    double m_max_time;
public:
    Timer(double max_time);
    ~Timer();

    void run();
    void show(int position_x, int position_y, double remain_time);
};

#endif
