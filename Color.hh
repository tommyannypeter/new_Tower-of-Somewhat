#ifndef COLOR_HH
#define COLOR_HH

#include <iostream>
#include <map>

enum ColorCode {
    ColorCode_foreground_lightgrey_background_black = 7, // the color code of default text.
};

enum class ColorName {
    defaults, 
    timer, 
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
