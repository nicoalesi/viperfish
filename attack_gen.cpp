#include "attack_gen.hpp"

bboard pawn_att[2][64];
bboard knight_att[64];
bboard king_att[64];

void create_pawn_attacks (bboard (&bb)[2][64]) {
    // White pawn attacks
    for (square sq = a2; sq <= h7; sq++) {
        bb[white][sq] |= ((1ULL << sq << 7) & not_h_file);
        bb[white][sq] |= ((1ULL << sq << 9) & not_a_file);
    }

    // Black pawn attacks
    for (square sq = a2; sq <= h7; sq++) {
        bb[black][sq] |= ((1ULL << sq >> 7) & not_a_file);
        bb[black][sq] |= ((1ULL << sq >> 9) & not_h_file);
    }
}

void create_knight_attacks (bboard (&bb)[64]) {
    for (square sq = a1; sq <= h8; sq++) {
        bb[sq] |= ((1ULL << sq >> 17) & not_h_file);
        bb[sq] |= ((1ULL << sq >> 15) & not_a_file);
        bb[sq] |= ((1ULL << sq >> 10) & not_gh_files);
        bb[sq] |= ((1ULL << sq >> 6) & not_ab_files);

        bb[sq] |= ((1ULL << sq << 17) & not_a_file);
        bb[sq] |= ((1ULL << sq << 15) & not_h_file);
        bb[sq] |= ((1ULL << sq << 10) & not_ab_files);
        bb[sq] |= ((1ULL << sq << 6) & not_gh_files);
    }
}

void create_king_attacks (bboard (&bb)[64]) {
    for (square sq = a1; sq <= h8; sq++) {
        bb[sq] |= ((1ULL << sq >> 9) & not_h_file);
        bb[sq] |= ((1ULL << sq >> 8));
        bb[sq] |= ((1ULL << sq >> 7) & not_a_file);

        bb[sq] |= ((1ULL << sq >> 1) & not_h_file);
        bb[sq] |= ((1ULL << sq << 1) & not_a_file);

        bb[sq] |= ((1ULL << sq << 7) & not_h_file);
        bb[sq] |= ((1ULL << sq << 8));
        bb[sq] |= ((1ULL << sq << 9) & not_a_file);
    }
}
