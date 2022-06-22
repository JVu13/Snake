#include "Snake.h"
#include <iostream>

using namespace std;

Snake::Snake() {
    width = 20;
    height = 20;
}

void Snake::setup(bool* gameOver) {
    *(gameOver) = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Snake::draw() {
    system("cls");

    for (int i = 0; i < width; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++){
            if (j == 0) 
                cout << "#";

                cout << " ";

            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;
}

void Snake::input() {

}

void Snake::logic() {

}
