# Tic-Tac-Toe-Game-in-C-
A simple console-based Tic Tac Toe game in C++ for two players. Players take turns marking X or O on a 3x3 grid, with automatic win or draw detection. Easy to run and great for learning basic C++ concepts like arrays, loops, and conditions. Contributions are welcome!
**About the Project**
This project is a console-based implementation of the classic Tic Tac Toe game written in C++. It allows two players to compete against each other in a turn-based manner. The game features a user-friendly interface, basic game logic, and win/loss/draw detection.

**Features**
Two-Player Mode: Players take turns to mark their symbols (X or O) on a 3x3 grid.
Win Detection: The program detects winning combinations horizontally, vertically, and diagonally.
Draw Detection: If all the cells are filled and no player has won, the game declares a draw.
User-Friendly Interface: The grid is displayed after each move, making it easy to follow the game.
**How to Play**
Players take turns choosing a cell number (1-9) corresponding to their desired position.
The game board updates after each move, displaying the current state.
The game ends when:
A player aligns their symbols in a row, column, or diagonal.
All cells are filled without a winner (resulting in a draw).
The final result is displayed, and players can restart the game by rerunning the program.
**Code Highlights**
Grid Representation: A 2D array represents the game board.
Turn Management: Alternates between Player 1 (X) and Player 2 (O).
Input Validation: Ensures players choose valid and unoccupied positions.
Win Logic: Checks all possible winning combinations after each move
