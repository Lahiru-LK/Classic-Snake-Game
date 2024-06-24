#ifndef SNAKE_H
#define SNAKE_H

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define BOARD_SIZE 20
#define SNAKE_SPEED 150 // Decrease this value to increase snake speed

extern int gameOver;
extern int x, y, fruitX, fruitY, score;
extern int tailX[BOARD_SIZE * BOARD_SIZE];
extern int tailY[BOARD_SIZE * BOARD_SIZE];
extern int nTail;

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
extern enum eDirection dir;

void setup();
void draw();
void input();
void logic();
void displayStartScreen();
void displayEndScreen();

#endif // SNAKE_H
