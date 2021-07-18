#include "Cursor.hh"

Cursor::Cursor() {
}

Cursor::~Cursor() {
}

void Cursor::setMaxXAndMaxY(int max_x, int max_y) {
    m_max_x = max_x;
    m_max_y = max_y;
}

void Cursor::moveUp() {
    if (m_current_y != 0) {
        m_current_y -= 1;
    }
}

void Cursor::moveLeft() {
    if (m_current_x != 0) {
        m_current_x -= 1;
    }
}

void Cursor::moveRight() {
    if (m_current_x != m_max_x) {
        m_current_x += 1;
    }
}

void Cursor::moveDown() {
    if (m_current_y != m_max_y) {
        m_current_y += 1;
    }
}

int Cursor::getCurrentX() {
    return m_current_x;
}
int Cursor::getCurrentY() {
    return m_current_y;
}
