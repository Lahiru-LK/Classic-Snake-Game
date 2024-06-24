# 🐍 SnakeGame-C 🐍

A classic Snake game implemented in C, built using CMake for easy setup and compilation. This project demonstrates the use of basic game development principles, algorithms, and data structures in C.

## ✨ Features ✨

- 🕹️ Classic snake game mechanics
- 📺 Simple console-based interface
- 🔧 Easy build and run with CMake
- 💾 Lightweight and efficient
- 🐛 Bug-free gameplay

## 🚀 Getting Started 🚀

### 🛠️ Prerequisites 🛠️

- 🗜️ **CMake** 3.10 or higher
- 🖥️ **C compiler** (GCC, Clang, etc.)

### 📦 Building the Project 📦

1. 🐙 **Clone the repository**:
    ```sh
    git clone https://github.com/yourusername/SnakeGame-C.git
    cd SnakeGame-C
    ```

2. 📂 **Create a build directory** and run CMake:
    ```sh
    mkdir build
    cd build
    cmake ..
    make
    ```

3. ▶️ **Run the game**:
    ```sh
    ./SnakeGame
    ```

## 🗂️ Files 🗂️

- `CMakeLists.txt` - 🛠️ CMake configuration file
- `main.c` - 🚪 Entry point for the game
- `snake.c` - 🧠 Core game logic implementation
- `snake.h` - 📜 Header file for game functions

## 🕹️ How to Play 🕹️

- 🏁 **Start the game**: Run the executable `./SnakeGame`
- 🎮 **Controls**:
  - `W` - Move up
  - `A` - Move left
  - `S` - Move down
  - `D` - Move right
- 🍏 **Objective**: Eat the food to grow the snake and gain points
- 🚫 **Game Over**: Avoid running into the walls or the snake's own body

## 👨‍💻 Code Overview 👨‍💻

### `main.c`
```c
#include "snake.h"

int main() {
    initializeGame();
    while (!isGameOver()) {
        updateGame();
        renderGame();
        handleInput();
    }
    return 0;
}
```

### `snake.c`
```c
#include "snake.h"
#include <stdio.h>

void initializeGame() {
    // Initialization code here
}

void updateGame() {
    // Game logic updates here
}

void renderGame() {
    // Rendering code here
}

void handleInput() {
    // Input handling code here
}

int isGameOver() {
    // Game over condition here
    return 0;
}
```

### `snake.h`
```c
#ifndef SNAKE_H
#define SNAKE_H

void initializeGame();
void updateGame();
void renderGame();
void handleInput();
int isGameOver();

#endif // SNAKE_H
```

## 🧪 Testing 🧪

1. ✅ **Unit Tests**: Coming soon...
2. 🧩 **Integration Tests**: Coming soon...

## 📄 License 📄

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🤝 Contributing 🤝

Contributions are welcome! Please open an issue or submit a pull request.

1. 🍴 Fork this repository
2. 👯 Clone the forked repository
3. 🌱 Create a new branch for your feature or bugfix
4. 📥 Commit your changes
5. 🔀 Open a pull request

---

**Enjoy the game!** 🎉
```

This README now includes sections for how to play the game, a code overview, and a section for testing. The playful tone and emojis are intended to make the document more engaging and visually appealing.
