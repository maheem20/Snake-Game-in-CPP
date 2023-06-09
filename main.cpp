#include <iostream>

using namespace std;

const int width = 20;   // Width of the game board
const int height = 20;  // Height of the game board
int x, y;               // Coordinates of the snake's head
int fruitX, fruitY;     // Coordinates of the fruit
int score;              // Player's score
bool gameOver;          // Game over flag

enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
Direction dir;          // Current direction of the snake

void setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}
