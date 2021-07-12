#ifndef UTILITIES_HH
#define UTILITIES_HH

#include <iostream>

enum ColorEnum {
    Color_foreground_lightgrey_background_black = 7, // this is the color code of original text.
};

class Color {
protected:
    ColorEnum m_color_enum {Color_foreground_lightgrey_background_black};

public:
    Color() {};
    ~Color() {};

    virtual int toColorCode();
};

class OriginalColor : public Color {
public:
    OriginalColor() {
        m_color_enum = Color_foreground_lightgrey_background_black;
    }

    int toColorCode();
};

void GoToCursorPosition(int position_x, int position_y);
void ChangePrintColor(Color *color);

#endif
