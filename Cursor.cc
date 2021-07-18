#include "Cursor.hh"

Cursor::Cursor(int max_x, int max_y) {
}

Cursor::~Cursor() {
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
