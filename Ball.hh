#ifndef BALL_HH
#define BALL_HH

#include "Utilities.hh"

class Ball {
private:
    ColorName m_color_name;
    bool m_is_pickedUp = false;

public:
    Ball();
    Ball(ColorName color_name);
    ~Ball();

    void pickedUp();
    void putDown();
    void show();
};

#endif
