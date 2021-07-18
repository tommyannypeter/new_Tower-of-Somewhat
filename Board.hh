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

    void fill_grid();
    ColorName get_random_ball_color();

public:
    Board(Coordinate coordinate, int width, int height);
    ~Board();

    void run();
    void show();
};

#endif
