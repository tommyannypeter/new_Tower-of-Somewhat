#ifndef CURSOR_HH
#define CURSOR_HH

class Cursor {
private:
    int m_max_x = 0;
    int m_max_y = 0;
    int m_current_x = 0;
    int m_current_y = 0;

public:
    Cursor();
    ~Cursor();

    void setMaxXAndMaxY(int max_x, int max_y);
    void moveUp();
    void moveLeft();
    void moveRight();
    void moveDown();
};

#endif
