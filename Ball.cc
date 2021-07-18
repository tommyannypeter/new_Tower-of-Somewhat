#include "Ball.hh"

// this constructor is for 2d-vector resize... can we avoid this?
Ball::Ball() {
    m_color_name = ColorName::Default;
}

Ball::Ball(ColorName color_name) : m_color_name{color_name} {
    if (color_name == ColorName::Ball_grey) {
        ColorTranslator::getInstance() -> 
            registerColorName(m_color_name, ColorCode_foreground_darkgrey_background_black);
    }
    else if (color_name == ColorName::Ball_green) {
        ColorTranslator::getInstance() -> 
            registerColorName(m_color_name, ColorCode_foreground_green_background_black);
    }
    else if (color_name == ColorName::Ball_cyan) {
        ColorTranslator::getInstance() -> 
            registerColorName(m_color_name, ColorCode_foreground_cyan_background_black);
    }
    else if (color_name == ColorName::Ball_red) {
        ColorTranslator::getInstance() -> 
            registerColorName(m_color_name, ColorCode_foreground_red_background_black);
    }
    else if (color_name == ColorName::Ball_yellow) {
        ColorTranslator::getInstance() -> 
            registerColorName(m_color_name, ColorCode_foreground_yellow_background_black);
    }
}

Ball::~Ball() {
}

void Ball::pickedUp() {
    m_is_pickedUp = true;
}

void Ball::putDown() {
    m_is_pickedUp = false;
}

void Ball::show() {
    changePrintColor(m_color_name);
    if (m_is_pickedUp) {
        std::cout << "◎"; // \u25ce
    }
    else {
        std::cout << "●"; // \u25cf
    }
    changePrintColor(ColorName::Default);
}
