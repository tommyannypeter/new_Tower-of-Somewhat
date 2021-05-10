#ifndef COMMONFUNCTION_HH
#define COMMONFUNCTION_HH

enum class Color {
    ORIGIN, 

    // Ball
    BALL_0, 
    BALL_1, 
    BALL_2, 
    BALL_3, 
    BALL_4, 

    // Timer
    TIMER, 
};

void GoToCursorPosition(int position_x, int position_y);
void ChangePrintColor(Color color);

#endif
