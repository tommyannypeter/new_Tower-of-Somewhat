#ifndef UTILITIES_HH
#define UTILITIES_HH

#include "Coordinate.hh"
#include "Color.hh"
#include "Cursor.hh"

enum class KeyboardInput {
    Up, 
    Left, 
    Right, 
    Down, 
    Enter, 

    Unclassified, 
};

void goToCursorPosition(Coordinate coordinate);
void changePrintColor(ColorName color_name);
KeyboardInput getKeyboardInput();
int getRandomIntegerBetweenMinAndMax(int min_num, int max_num);

#endif
