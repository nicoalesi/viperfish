#include "unit_tests.hpp"

int main (void) {
    init_board_state();

    if (run_pawn_move_gen_test()) {
        std::cout << "[+] Pawn move gen test passed.\n";
    } else {
        std::cout << "[X] Pawn move gen test failed.\n";
        return EXIT_FAILURE;
    }

    if (run_rook_move_gen_test()) {
        std::cout << "[+] Rook move gen test passed.\n";
    } else {
        std::cout << "[X] Rook move gen test failed.\n";
        return EXIT_FAILURE;
    }

    if (run_knight_move_gen_test()) {
        std::cout << "[+] Knight move gen test passed.\n";
    } else {
        std::cout << "[X] Knight move gen test failed.\n";
        return EXIT_FAILURE;
    }

    if (run_bishop_move_gen_test()) {
        std::cout << "[+] Bishop move gen test passed.\n";
    } else {
        std::cout << "[X] Bishop move gen test failed.\n";
        return EXIT_FAILURE;
    }

    if (run_king_move_gen_test()) {
        std::cout << "[+] King move gen test passed.\n";
    } else {
        std::cout << "[X] King move gen test failed.\n";
        return EXIT_FAILURE;
    }

    if (run_queen_move_gen_test()) {
        std::cout << "[+] Queen move gen test passed.\n";
    } else {
        std::cout << "[X] Queen move gen test failed.\n";
        return EXIT_FAILURE;
    }

    if (run_sq_att_detection_test()) {
        std::cout << "[+] Square attack detection test passed.\n";
    } else {
        std::cout << "[X] Square attack detection test failed.\n";
        return EXIT_FAILURE;
    }

    if (run_find_checkers_test()) {
        std::cout << "[+] Checkers detection test passed.\n";
    } else {
        std::cout << "[X] Checkers detection test failed.\n";
        return EXIT_FAILURE;
    }

    if (run_pin_detection_test()) {
        std::cout << "[+] Pin detection test passed.\n";
    } else {
        std::cout << "[X] Pin detection test failed.\n";
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
