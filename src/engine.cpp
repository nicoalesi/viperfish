#include "engine.hpp"

void init_board_state () {
    create_pawn_attacks(pawn_att);
    create_knight_attacks(knight_att);
    create_king_attacks(king_att);
    create_bishop_masks(bishop_masks);
    create_rook_masks(rook_masks);
    create_bishop_attacks(bishop_att);
    create_rook_attacks(rook_att);
    create_blocker_tables(blocker_tables);
}
