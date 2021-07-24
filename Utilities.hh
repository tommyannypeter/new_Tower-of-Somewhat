#ifndef UTILITIES_HH
#define UTILITIES_HH

#include "Coordinate.hh"
#include "Color.hh"
#include "Cursor.hh"
#include "Screen.hh"

enum class Key {
    Up, 
    Left, 
    Right, 
    Down, 
    Enter, 

    Unknown, 
};

void goToCursorPosition(Coordinate coordinate);
void changePrintColor(ColorName color_name);
Key getKey();
int getRandomIntegerBetweenMinAndMax(int min_num, int max_num);

#endif
