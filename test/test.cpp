#include "bit_manip_test.hpp"
#include "attack_gen_test.hpp"
#include "move_gen_test.hpp"
#include "fen_test.hpp"
#include "perft.hpp"

#include "debug.hpp"

int main (void) {
    if (run_bit_manip_tests()) exit(EXIT_FAILURE);
    if (run_mask_gen_tests()) exit(EXIT_FAILURE);
    if (run_attack_gen_tests()) exit(EXIT_FAILURE);
    if (run_move_gen_tests()) exit(EXIT_FAILURE);
    if (run_fen_tests()) exit(EXIT_FAILURE);
    parse_fen(tricky_pos);
    // make_move(encode_move(c3, b1, N, 0, 0, 0, 0, 0));
    // make_move(encode_move(e8, f8, k, 0, 0, 0, 0, 0));
    // make_move(encode_move(f3, a3, Q, 0, 0, 0, 0, 0));
    // make_move(encode_move(e7, e8, q, 0, 0, 0, 0, 0));
    // make_move(encode_move(c2, c4, P, 0, 0, 1, 0, 0));
    // make_move(encode_move(c7, h2, q, 0, 1, 0, 0, 0));
    print_board();
    run_perft(6);
    std::cout << "captures: " << capturess << "\n";
    std::cout << "checks: " << checkss << "\n";
}
