#pragma once

#include <iostream>
#include "move_gen.hpp"
#include "test_utils.hpp"

void run_perft(int depth);

extern int capturess;
extern int checkss;

inline void perft_driver(int depth, unsigned long long &nodes) {
    if (depth == 0) {
        nodes++;
        checkss += is_sq_attacked(!stm, getls1b(bitboards[(stm == white) ? K : k]));
        return;
    }

    Moves move_list;
    generate_moves(move_list);

    for (uint8_t i = 0; i < move_list.index; i++) {
        move mv = move_list.moves[i];

        // Copy board state
        BoardState board;
        copy_board_state(board);

        if (depth == 1) {
            capturess += get_mv_cptr(mv);
        }
        // Make move
        make_move(mv);

        // Continue recursively
        perft_driver(depth - 1, nodes);

        // Restore board state
        restore_board_state(board);
    }
}
