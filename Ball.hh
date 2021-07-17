#ifndef BALL_HH
#define BALL_HH

#include "Utilities.hh"

class Ball {
private:
    ColorName m_color_name;
    bool m_is_picked_up = false;

public:
    Ball(ColorName color_name);
    ~Ball();

    void picked_up();
    void put_down();
    void show();
};

#endif
