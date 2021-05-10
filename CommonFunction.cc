#include "CommonFunction.hh"
#include <windows.h>

void GoToCursorPosition(int position_x, int position_y) {
    COORD screen;
    screen.X = position_x;
    screen.Y = position_y;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, screen);
}

void ChangePrintColor(Color color) {
    if (color == Color::ORIGIN) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

    if (color == Color::BALL_0) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
    if (color == Color::BALL_1) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    if (color == Color::BALL_2) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    if (color == Color::BALL_3) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    if (color == Color::BALL_4) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
    
    if (color == Color::TIMER) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}