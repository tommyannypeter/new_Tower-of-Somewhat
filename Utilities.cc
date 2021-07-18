#include "Utilities.hh"
#include <windows.h>
#include <conio.h>
#include <random> // for std::mt19937
#include <ctime> // for std::time

void goToCursorPosition(Coordinate coordinate) {
    COORD screen;
    screen.X = coordinate.getX();
    screen.Y = coordinate.getY();
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, screen);
}

void changePrintColor(ColorName color_name) {
    int color_code = ColorTranslator::getInstance()->toColorCode(color_name);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_code);
}

KeyboardInput getKeyboardInput() {
    int input = getch();
    if (input == 0 || input == 224) {
        input = getch();
        if (input == 72) {
            return KeyboardInput::Up;
        }
        else if (input == 75) {
            return KeyboardInput::Left;
        }
        else if (input == 77) {
            return KeyboardInput::Right;
        }
        else if (input == 80) {
            return KeyboardInput::Down;
        }
    }
    else if (input == 13) {
        return KeyboardInput::Enter;
    }
    else {
        return KeyboardInput::Unclassified;
    }
}

// initialize the random seed
std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };

int getRandomIntegerBetweenMinAndMax(int min_num, int max_num) {
    std::uniform_int_distribution<> generator{ min_num, max_num };
    return generator(mersenne);
}
