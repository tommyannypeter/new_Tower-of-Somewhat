#ifndef UTILITIES_HH
#define UTILITIES_HH

#include <iostream>
#include <map>

enum ColorCode {
    ColorCode_foreground_lightgrey_background_black = 7, // this is the color code of original text.
};

enum class ColorName {
    ColorName_original_color, 
    ColorName_timer_color, 
};

class ColorTranslator {
private:
    std::map<ColorName, ColorCode> m_name_enum_map;

public:
    ColorTranslator();
    ~ColorTranslator();

    void registerColorName(ColorName color_name, ColorCode color_enum);
    ColorCode toColorCode(ColorName color_name);
};

void GoToCursorPosition(int position_x, int position_y);
void ChangePrintColor(ColorName color_name);

#endif
