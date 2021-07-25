#ifndef COORDINATE_HH
#define COORDINATE_HH

class Coordinate {
private:
    int m_coordinate_x;
    int m_coordinate_y;

public:
    Coordinate(int coordinate_x, int coordinate_y);
    ~Coordinate();

    int getX();
    int getY();
};

#endif
