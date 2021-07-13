#include "Utilities.hh"
#include <windows.h>

ColorTranslator::ColorTranslator() {
    m_name_enum_map = {};
    registerColorName(ColorName::ColorName_original_color, ColorCode::ColorCode_foreground_lightgrey_background_black);
}

ColorTranslator::~ColorTranslator() {
}

extern ColorTranslator g_color_translator = ColorTranslator();

void ColorTranslator::registerColorName(ColorName color_name, ColorCode color_enum) {
    m_name_enum_map.insert(std::pair<ColorName, ColorCode>(color_name, color_enum));
}

ColorCode ColorTranslator::toColorCode(ColorName color_name) {
    return m_name_enum_map[color_name];
}

void GoToCursorPosition(int position_x, int position_y) {
    COORD screen;
    screen.X = position_x;
    screen.Y = position_y;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, screen);
}

void ChangePrintColor(ColorName color_name) {
    int color_code = g_color_translator.toColorCode(color_name);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_code);
}
