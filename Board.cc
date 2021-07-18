#include "Board.hh"
#include "Ball.hh"

void Board::fill_grid() {
    for (int row_num = 0; row_num < m_height; row_num ++) {
        for (int column_num = 0; column_num < m_width; column_num ++) {
            ColorName color_name = get_random_ball_color();
            m_grid[row_num][column_num] = *(new Ball(color_name));
        }
    }
}


ColorName get_random_ball_color() {
    // there are 5 colors now
    // but how to handle this magic number?
    int random_num = getRandomIntegerBetweenMinAndMax(1, 5);
    if (random_num == 1) {
        return ColorName::Ball_grey;
    }
    else if (random_num == 2) {
        return ColorName::Ball_cyan;
    }
    else if (random_num == 3) {
        return ColorName::Ball_green;
    }
    else if (random_num == 4) {
        return ColorName::Ball_red;
    }
    else if (random_num == 5) {
        return ColorName::Ball_yellow;
    }
}

Board::Board(Coordinate coordinate, int width, int height) 
    : m_coordinate{coordinate}, m_width{width}, m_height{height} {
    m_grid.reserve(width);
    for (int column_num = 0; column_num < width; column_num ++) {
        m_grid[column_num].reserve(height);
    }
}

Board::~Board() {
}

void Board::run() {
    fill_grid();
    show();
}

void Board::show() {
    for (int row_num = 0; row_num < m_height; row_num ++) {
        for (int column_num = 0; column_num < m_width; column_num ++) {
            Ball ball = m_grid[row_num][column_num];
            ball.show();
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
