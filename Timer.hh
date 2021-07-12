#ifndef TIMER_HH
#define TIMER_HH

#include "Utilities.hh"

class TimerColor : public Color {
public:
    TimerColor() {
        m_color_enum = Color_foreground_lightgrey_background_black;
    }

    int toColorCode();
};

class Timer {
private:
    double m_max_time;
    TimerColor *m_timer_color;
    OriginalColor *m_original_color;

public:
    Timer(double max_time);
    ~Timer();

    void run();
    void show(double remain_time);
};

#endif
