#include <iostream>
#include <windows.h>
using namespace std;

const int height = 20;
const int width = 60;

int ballX, ballY;
int ballDirX = 1, ballDirY = 1;
int p1Y, p2Y;
int p1Score = 0, p2Score = 0;
bool gameOver = false;

void setup() {
    ballX = width / 2;
    ballY = height / 2;
    p1Y = height / 2;
    p2Y = height / 2;
}

void draw() {
    system("cls");

    cout << " Player 1: " << p1Score << "        PING PONG        Player 2: " << p2Score << endl;

    for (int i = 0; i < width + 2; i++)
        cout << "=";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)
                cout << "|";

            if (i == ballY && j == ballX)
                cout << "O";              // Ball
            else if (j == 2 && i == p1Y)
                cout << "█";              // Player 1 paddle
            else if (j == width - 3 && i == p2Y)
                cout << "█";              // Player 2 paddle
            else if (j == width / 2)
                cout << ":";              // Center line
            else
                cout << " ";

            if (j == width - 1)
                cout << "|";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "=";
}

void input() {
    // Player 1 (W/S)
    if (GetAsyncKeyState('W') & 0x8000 && p1Y > 0)
        p1Y--;
    if (GetAsyncKeyState('S') & 0x8000 && p1Y < height - 1)
        p1Y++;

    // Player 2 (Arrow keys)
    if (GetAsyncKeyState(VK_UP) & 0x8000 && p2Y > 0)
        p2Y--;
    if (GetAsyncKeyState(VK_DOWN) & 0x8000 && p2Y < height - 1)
        p2Y++;

    if (GetAsyncKeyState(VK_ESCAPE))
        gameOver = true;
}

void logic() {
    ballX += ballDirX;
    ballY += ballDirY;

    // Top & bottom wall
    if (ballY == 0 || ballY == height - 1)
        ballDirY = -ballDirY;

    // Paddle collisions
    if (ballX == 3 && ballY == p1Y)
        ballDirX = 1;

    if (ballX == width - 4 && ballY == p2Y)
        ballDirX = -1;

    // Scoring
    if (ballX <= 0) {
        p2Score++;
        setup();
    }

    if (ballX >= width - 1) {
        p1Score++;
        setup();
    }
}

int main() {
    setup();

    while (!gameOver) {
        draw();
        input();
        logic();
        Sleep(40);   // smaller = smoother
    }

    system("cls");
    cout << "GAME OVER\n";
    cout << "Final Score\n";
    cout << "Player 1: " << p1Score << endl;
    cout << "Player 2: " << p2Score << endl;

    return 0;
}
