//Q107
#include <stdio.h>

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void displayBoard() {
    int i, j;
    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---+---+---\n");
    }
}

int checkWin() {
    int i;
    for (i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1;
    return 0;
}

int main() {
    int player = 1, choice, row, col, moves = 0;
    char mark;

    while (1) {
        displayBoard();
        mark = (player == 1) ? 'X' : 'O';
        printf("Player %d, enter your move (1-9): ", player);
        scanf("%d", &choice);

        row = (choice - 1) / 3;
        col = (choice - 1) % 3;

        if (board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = mark;
            moves++;
            if (checkWin()) {
                displayBoard();
                printf("Player %d wins!\n", player);
                break;
            } else if (moves == 9) {
                displayBoard();
                printf("It's a draw!\n");
                break;
            }
            player = (player == 1) ? 2 : 1;
        } else {
            printf("Invalid move! Try again.\n");
        }
    }
    return 0;
}

