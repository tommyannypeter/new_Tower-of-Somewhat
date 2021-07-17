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

void GoToCursorPosition(Coordinate coordinate);
void ChangePrintColor(ColorName color_name);
KeyboardInput GetKeyboardInput();

#endif
