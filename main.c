#include "snake.h"

int main() {
    char choice;

    displayStartScreen();
    setup();

    while (!gameOver) {
        draw();
        input();
        logic();
        Sleep(SNAKE_SPEED); // Adjust speed by changing SNAKE_SPEED
    }

    displayEndScreen();

    return 0;
}
