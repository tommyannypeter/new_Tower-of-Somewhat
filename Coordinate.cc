#include "Coordinate.hh"

Coordinate::Coordinate(int coordinate_x, int coordinate_y) : m_coordinate_x{coordinate_x}, m_coordinate_y{coordinate_y} {
}

Coordinate::~Coordinate() {
}

int Coordinate::getX() {
    return m_coordinate_x;
}

int Coordinate::getY() {
    return m_coordinate_y;
}
