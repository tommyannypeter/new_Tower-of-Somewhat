#include "Utilities.hh"
#include <windows.h>
#include <conio.h>

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

KeyboardInput GetKeyboardInput() {
    if (!kbhit()) {
        if (getch() == 224) {
            if (getch() == 72) {
                return KeyboardInput::Up;
            }
            else if (getch() == 75) {
                return KeyboardInput::Left;
            }
            else if (getch() == 77) {
                return KeyboardInput::Right;
            }
            else if (getch() == 80) {
                return KeyboardInput::Down;
            }
        }
        else {
            return KeyboardInput::Unclassified;
        }
    }
}
