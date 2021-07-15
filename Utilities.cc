#include "Utilities.hh"
#include <windows.h>

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
