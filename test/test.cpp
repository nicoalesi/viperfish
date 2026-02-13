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
    parse_fen(starting_pos);
    make_move(encode_move(e2, e4, P, 0, 0, 1, 0, 0));
    make_move(encode_move(c7, c5, p, 0, 0, 1, 0, 0));
    make_move(encode_move(b2, b4, P, 0, 0, 1, 0, 0));
    // make_move(encode_move(c5, b4, p, 0, 1, 0, 0, 0));
    print_board();
    run_perft(3);
    std::cout << "captures: " << capturess << "\n";
    std::cout << "checks: " << checkss << "\n";
}
