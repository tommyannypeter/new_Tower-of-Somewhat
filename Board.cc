#include "Board.hh"
#include "Ball.hh"

Board::Board(Coordinate coordinate, int width, int height) 
    : m_coordinate{coordinate}, m_width{width}, m_height{height} {
    m_grid.reserve(width);
    for (int column_num = 0; column_num < width; column_num ++) {
        m_grid[column_num].reserve(height);
    }
}

Board::~Board() {
}
