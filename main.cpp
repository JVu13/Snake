#include<iostream>
#include "Snake.h"

int main () {
    Snake s;
    bool gameOver;
    
    s.setup(&gameOver);
    while (!gameOver) {
        s.draw();
        s.input();
        s.logic(); 
    }
    return 0;
}