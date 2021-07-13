#include "Utilities.hh"
#include <windows.h>

int Color::toColorCode() {
    return m_color_enum;
}

int OriginalColor::toColorCode() {
    return m_color_enum;
}

void GoToCursorPosition(int position_x, int position_y) {
    COORD screen;
    screen.X = position_x;
    screen.Y = position_y;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, screen);
}

void ChangePrintColor(Color *color) {
    int color_code = color->toColorCode();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_code);
}
