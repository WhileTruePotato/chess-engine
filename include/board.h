#ifndef BOARD_H
#define BOARD_H

#define BOARD_SIZE 8

typedef struct {
    char squares[BOARD_SIZE][BOARD_SIZE];
} Board;

void board_init(Board *board);
void board_print(const Board *board);

#endif