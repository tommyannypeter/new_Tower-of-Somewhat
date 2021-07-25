#ifndef BOARD_HH
#define BOARD_HH

#include "Utilities.hh"
#include "Ball.hh"
#include <vector>

class Board {
private:
    Coordinate m_coordinate;
    int m_width;
    int m_height;
    std::vector<std::vector<Ball>> m_grids;
    Cursor m_cursor;
    ColorName m_ball_colors[5] {
        ColorName::Ball_grey, 
        ColorName::Ball_green, 
        ColorName::Ball_cyan, 
        ColorName::Ball_red, 
        ColorName::Ball_yellow
    };

    void fillGrids();
    ColorName getRandomBallColor();
    void putDownAllBalls();
    void pickUpBallAtCursor();
    int getBallColorNum();

public:
    Board(Coordinate coordinate, int width, int height);
    ~Board();

    void run();
    void show();
};

#endif
