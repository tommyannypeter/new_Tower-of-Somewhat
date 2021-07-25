#ifndef COLOR_HH
#define COLOR_HH

#include <iostream>
#include <map>

enum ColorCode {
    ColorCode_foreground_lightgrey_background_black = 7, // the color code of default text.
    ColorCode_foreground_darkgrey_background_black = 8, 
    ColorCode_foreground_green_background_black = 10, 
    ColorCode_foreground_cyan_background_black = 11, 
    ColorCode_foreground_red_background_black = 12, 
    ColorCode_foreground_yellow_background_black = 14, 
};

enum class ColorName {
    Default, 
    Timer, 
    Ball_grey, 
    Ball_green, 
    Ball_cyan, 
    Ball_red, 
    Ball_yellow, 
};

class ColorTranslator {
private:
    std::map<ColorName, ColorCode> m_name_enum_map;

    static ColorTranslator *m_instance;
    ColorTranslator();
    
    bool colorNameExists(ColorName color_name);

public:
    ~ColorTranslator();

    void registerColorName(ColorName color_name, ColorCode color_enum);
    ColorCode toColorCode(ColorName color_name);

    static ColorTranslator *getInstance() {
        if (m_instance == NULL) {
            m_instance = new ColorTranslator();
        }
        return m_instance;
    };
};

#endif
