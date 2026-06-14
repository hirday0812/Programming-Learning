#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

const int height = 20;
const int width = 50;

int ballX, ballY;
int playerY, botY;
int ballDirX, ballDirY;
int playerScore = 0, botScore = 0;
bool gameOver = false;

void setup() {
    ballX = width / 2;
    ballY = height / 2;
    playerY = height / 2;
    botY = height / 2;
    ballDirX = -1;
    ballDirY = -1;
}

void draw() {
    system("cls");

    cout << "Player: " << playerScore << "   Bot: " << botScore << endl;

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0)
                cout << "#";

            if (i == ballY && j == ballX)
                cout << "O";                 // Ball
            else if (j == 1 && i == playerY)
                cout << "|";                 // Player
            else if (j == width - 2 && i == botY)
                cout << "|";                 // Bot
            else if (j == width / 2)
                cout << ".";                 // Center line
            else
                cout << " ";

            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "#";
}

void input() {
    if (GetAsyncKeyState('W') & 0x8000) {
        if (playerY > 0) playerY--;
    }
    if (GetAsyncKeyState('S') & 0x8000) {
        if (playerY < height - 1) playerY++;
    }
    if (GetAsyncKeyState(VK_ESCAPE)) {
        gameOver = true;
    }
}


void logic() {
    ballX += ballDirX;
    ballY += ballDirY;

    // Wall collision
    if (ballY == 0 || ballY == height - 1)
        ballDirY = -ballDirY;

    // Player collision
    if (ballX == 2 && ballY == playerY)
        ballDirX = 1;

    // Bot collision
    if (ballX == width - 3 && ballY == botY)
        ballDirX = -1;

    // Smarter bot movement (with delay)
    if (ballX > width / 2) {
        if (botY < ballY && botY < height - 1)
            botY++;
        else if (botY > ballY && botY > 0)
            botY--;
    }

    // Scoring
    if (ballX <= 0) {
        botScore++;
        setup();
    }

    if (ballX >= width - 1) {
        playerScore++;
        setup();
    }
}

int main() {
    setup();

    while (!gameOver) {
        draw();
        input();
        logic();
        Sleep(70);
    }

    system("cls");
    cout << "GAME OVER\n";
    cout << "Final Score\n";
    cout << "Player: " << playerScore << endl;
    cout << "Bot: " << botScore << endl;

    return 0;
}
