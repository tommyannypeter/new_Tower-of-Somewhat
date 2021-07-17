#ifndef UTILITIES_HH
#define UTILITIES_HH

#include "Coordinate.hh"
#include "Color.hh"

enum class KeyboardInput {
    Up, 
    Left, 
    Right, 
    Down, 

    Unclassified, 
};

void goToCursorPosition(Coordinate coordinate);
void changePrintColor(ColorName color_name);
KeyboardInput getKeyboardInput();

#endif
