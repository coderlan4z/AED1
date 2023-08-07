#ifndef MY_KAREL_HPP
#define MY_KAREL_HPP

#include "karel.hpp"

class MyRobot : public Robot {
public:
    void putBeepers(int n) {
        for (int i = 0; i < n; i++) {
            putBeeper();
        }
    }

    void pickBeepers(int n) {
        for (int i = 0; i < n; i++) {
            pickBeeper();
        }
    }

    void moveN(int steps) {
        for (int step = 1; step <= steps; step++) {
            move();
        }
    }
    
    void turnRight() {
        turnLeft();
        turnLeft();
        turnLeft();
    }




};

#endif  // MY_KAREL_HPP