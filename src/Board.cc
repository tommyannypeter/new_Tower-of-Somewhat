#include "Board.hh"

void Board::fillGrids() {
    for (int row_num = 0; row_num < m_height; row_num ++) {
        for (int column_num = 0; column_num < m_width; column_num ++) {
            ColorName color_name = getRandomBallColor();
            Ball ball = Ball(color_name);
            m_grids[row_num][column_num] = ball;
        }
    }
}


ColorName Board::getRandomBallColor() {
    // there are 5 colors now
    // how to avoid this magic number?
    int random_num = getRandomIntegerBetweenMinAndMax(1, 5);
    return m_ball_color_array[random_num];
}

void Board::putDownAllBalls() {
    for (int row_num = 0; row_num < m_height; row_num ++) {
        for (int column_num = 0; column_num < m_width; column_num ++) {
            m_grids[row_num][column_num].putDown();
        }
    }
}

void Board::pickUpBallAtCursor() {
    putDownAllBalls();
    int cursor_x = m_cursor.getCurrentX();
    int cursor_y = m_cursor.getCurrentY();
    m_grids[cursor_y][cursor_x].pickUp();
}

Board::Board(Coordinate coordinate, int width, int height) 
    : m_coordinate{coordinate}, m_width{width}, m_height{height} {
    m_cursor.setMaxXAndMaxY(width, height);
    m_grids.resize(height);
    for (int row_num = 0; row_num < height; row_num ++) {
        m_grids[row_num].resize(width);
    }
}

Board::~Board() {
}

void Board::run() {
    fillGrids();
    show();
    while (true) {
        Key input = getKey();
        if (input == Key::Enter) {
            break;
        }
        else if (input == Key::Up) {
            m_cursor.moveUp();
            show();
        }
        else if (input == Key::Left) {
            m_cursor.moveLeft();
            show();
        }
        else if (input == Key::Right) {
            m_cursor.moveRight();
            show();
        }
        else if (input == Key::Down) {
            m_cursor.moveDown();
            show();
        }
    }
}

void Board::show() {
    pickUpBallAtCursor();
    goToCursorPosition(m_coordinate);
    for (int row_num = 0; row_num < m_height; row_num ++) {
        for (int column_num = 0; column_num < m_width; column_num ++) {
            Ball ball = m_grids[row_num][column_num];
            ball.show();
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
