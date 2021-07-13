#include "Utilities.hh"
#include <windows.h>

Coordinate::Coordinate(int coordinate_x, int coordinate_y) : m_coordinate_x{coordinate_x}, m_coordinate_y{coordinate_y} {
}

Coordinate::~Coordinate() {
}

int Coordinate::getX() {
    return m_coordinate_x;
}

int Coordinate::getY() {
    return m_coordinate_y;
}

ColorTranslator::ColorTranslator() {
    m_name_enum_map = {};
    registerColorName(ColorName::ColorName_original_color, ColorCode::ColorCode_foreground_lightgrey_background_black);
}

ColorTranslator::~ColorTranslator() {
}

ColorTranslator* ColorTranslator::m_instance = NULL;

void ColorTranslator::registerColorName(ColorName color_name, ColorCode color_enum) {
    m_name_enum_map.insert(std::pair<ColorName, ColorCode>(color_name, color_enum));
}

ColorCode ColorTranslator::toColorCode(ColorName color_name) {
    return m_name_enum_map[color_name];
}

void GoToCursorPosition(Coordinate coordinate) {
    COORD screen;
    screen.X = coordinate.getX();
    screen.Y = coordinate.getY();
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, screen);
}

void ChangePrintColor(ColorName color_name) {
    int color_code = ColorTranslator::getInstance()->toColorCode(color_name);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_code);
}
