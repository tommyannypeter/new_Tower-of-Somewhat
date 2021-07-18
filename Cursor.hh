#ifndef CURSOR_HH
#define CURSOR_HH

class Cursor {
private:
    int m_max_x;
    int m_max_y;
    int m_current_x = 0;
    int m_current_y = 0;

public:
    Cursor(int max_x, int max_y);
    ~Cursor();

    void moveUp();
    void moveLeft();
    void moveRight();
    void moveDown();
};

#endif
