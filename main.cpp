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

void draw()
{
    system("cls"); // Clear the console (Windows-specific)

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#";
            if (i == y && j == x)
                cout << "O";
            else if (i == fruitY && j == fruitX)
                cout << "F";
            else
                cout << " ";

            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    cout << "Score: " << score << endl;
    cout << "Use WASD or arrow keys to control the snake." << endl;
}
