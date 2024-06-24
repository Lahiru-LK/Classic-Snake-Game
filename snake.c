#include "snake.h"

int gameOver;
int x, y, fruitX, fruitY, score;
int tailX[BOARD_SIZE * BOARD_SIZE];
int tailY[BOARD_SIZE * BOARD_SIZE];
int nTail;
enum eDirection dir;

void setup() {
    gameOver = 0;
    dir = STOP;
    x = BOARD_SIZE / 2;
    y = BOARD_SIZE / 2;
    fruitX = rand() % BOARD_SIZE;
    fruitY = rand() % BOARD_SIZE;
    score = 0;
    nTail = 0;
}

void draw() {
    system("cls"); // Clear the console

    for (int i = 0; i < BOARD_SIZE + 2; i++)
        printf("#");
    printf("\n");

    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (j == 0)
                printf("#");
            if (i == y && j == x)
                printf("O");
            else if (i == fruitY && j == fruitX)
                printf("F");
            else {
                int print = 0;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o");
                        print = 1;
                    }
                }
                if (!print)
                    printf(" ");
            }

            if (j == BOARD_SIZE - 1)
                printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < BOARD_SIZE + 2; i++)
        printf("#");
    printf("\n");

    printf("Score: %d\n", score);
}

void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a':
                if (dir != RIGHT)
                    dir = LEFT;
                break;
            case 'd':
                if (dir != LEFT)
                    dir = RIGHT;
                break;
            case 'w':
                if (dir != DOWN)
                    dir = UP;
                break;
            case 's':
                if (dir != UP)
                    dir = DOWN;
                break;
            case 'x':
                gameOver = 1;
                break;
        }
    }
}

void logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        default:
            break;
    }

    if (x >= BOARD_SIZE) x = 0; else if (x < 0) x = BOARD_SIZE - 1;
    if (y >= BOARD_SIZE) y = 0; else if (y < 0) y = BOARD_SIZE - 1;

    for (int i = 0; i < nTail; i++) {
        if (tailX[i] == x && tailY[i] == y)
            gameOver = 1;
    }

    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % BOARD_SIZE;
        fruitY = rand() % BOARD_SIZE;
        nTail++;
    }
}

void displayStartScreen() {
    system("cls");
    printf("Welcome to Snake Game!\n");
    printf("Press any key to start...\n");
    _getch();
}

void displayEndScreen() {
    system("cls");
    printf("Game Over!\n");
    printf("Final Score: %d\n", score);
    printf("Press any key to exit...\n");
    _getch();
}
