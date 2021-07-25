#ifndef SCREEN_HH
#define SCREEN_HH

#include <iostream>

class Screen {
private:

    static Screen *m_instance;
    Screen();

public:
    ~Screen();

    static Screen *getInstance() {
        if (m_instance == NULL) {
            m_instance = new Screen();
        }
        return m_instance;
    };
};

#endif
