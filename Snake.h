#ifndef SNAKE_H
#define SNAKE_H

class Snake
{
private:
    //bool gameOver;
    int width;
    int height;
    int x,y,fruitX,fruitY,score;

    enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
    eDirection dir;
public:
    Snake();
    void setup(bool* gameOver);
    void draw();
    void input();
    void logic();
    // ~Snake();
};

#endif