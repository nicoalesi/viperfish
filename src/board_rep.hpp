#pragma once

#include "utils.hpp"
#include <cstring>

typedef struct {
    bboard bitboards[12];
    bboard occupancies[3];
    flag castling;
    state stm;
    square enpassant;
    counter hmclock;
    counter fmclock;
} BoardState;

extern bboard bitboards[12];
extern bboard occupancies[3];

extern bboard checkers;
extern bboard pins;

extern flag castling;

// Side to move
extern state stm;

// En passant square
extern square enpassant;

// Half move clock to enforce 50-move rule
extern counter hmclock;
// Full move clock to count the total number of moves
extern counter fmclock;

__always_inline void copy_board_state (BoardState &board) {
    memcpy(board.bitboards, bitboards, 96);
    memcpy(board.occupancies, occupancies, 24);

    board.castling = castling;
    board.enpassant = enpassant;
    board.stm = stm;

    board.hmclock = hmclock;
    board.fmclock = fmclock;
}

__always_inline void restore_board_state (const BoardState &board) {
    memcpy(bitboards, board.bitboards, 96);
    memcpy(occupancies, board.occupancies, 24);

    castling = board.castling;
    enpassant = board.enpassant;
    stm = board.stm;

    hmclock = board.hmclock;
    fmclock = board.fmclock;
}
