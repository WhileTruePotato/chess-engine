#include <stdio.h>
#include "board.h"

void board_init(Board *board)
{
    const char *starting_position[BOARD_SIZE] = {
        "rnbqkbnr",
        "pppppppp",
        "........",
        "........",
        "........",
        "........",
        "PPPPPPPP",
        "RNBQKBNR"
    };

    for (int row = 0; row < BOARD_SIZE; row++) {
        for (int col = 0 ; col < BOARD_SIZE; col++) {
            board->squares[row][col] =
            starting_position[row][col];
        }
    }
}

void board_print(const Board *board)
{
    printf("\n");

    for (int row = 0; row < BOARD_SIZE; row++) {
        printf("%d  ", BOARD_SIZE - row);

        for (int col = 0; col < BOARD_SIZE; col++) {
            printf("%c ", board->squares[row][col]);
        }
        
        printf("\n");
    }
    printf("\n   a b c d e f g h\n\n");
}
