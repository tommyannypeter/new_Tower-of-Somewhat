#ifndef UTILITIES_HH
#define UTILITIES_HH

#include <iostream>
#include <map>

class Coordinate {
private:
    int m_coordinate_x;
    int m_coordinate_y;

public:
    Coordinate(int coordinate_x, int coordinate_y);
    ~Coordinate();

    int getX();
    int getY();
};

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

    static ColorTranslator *m_instance;
    ColorTranslator();

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

void GoToCursorPosition(Coordinate coordinate);
void ChangePrintColor(ColorName color_name);

#endif
