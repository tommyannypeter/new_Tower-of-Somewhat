#include "Board.hh"

void Board::fillGrid() {
    for (int row_num = 0; row_num < m_height; row_num ++) {
        for (int column_num = 0; column_num < m_width; column_num ++) {
            ColorName color_name = getRandomBallColor();
            Ball ball = Ball(color_name);
            m_grid[row_num][column_num] = ball;
        }
    }
}


ColorName Board::getRandomBallColor() {
    // there are 5 colors now
    // how to avoid this magic number?
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
    m_grid.resize(height);
    for (int row_num = 0; row_num < height; row_num ++) {
        m_grid[row_num].resize(width);
    }
}

Board::~Board() {
}

void Board::run() {
    fillGrid();
    show();
}

void Board::show() {
    goToCursorPosition(m_coordinate);
    for (int row_num = 0; row_num < m_height; row_num ++) {
        for (int column_num = 0; column_num < m_width; column_num ++) {
            Ball ball = m_grid[row_num][column_num];
            ball.show();
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
