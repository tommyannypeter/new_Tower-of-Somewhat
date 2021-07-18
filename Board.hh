#ifndef BOARD_HH
#define BOARD_HH

#include "Utilities.hh"
#include <vector>

class Board {
private:
    Coordinate m_coordinate;
    int m_width;
    int m_height;
    std::vector<std::vector<Ball>> m_grid;

    void fillGrid();
    ColorName getRandomBallColor();

public:
    Board(Coordinate coordinate, int width, int height);
    ~Board();

    void run();
    void show();
};

#endif
