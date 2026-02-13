#include "perft.hpp"

int capturess = 0;
int checkss = 0;

void run_perft (int depth) {
    std::cout << "PERFORMANCE TEST\n";
    Moves move_list;
    unsigned long long nodes = 0;

    generate_moves(move_list);

    long long start_time = get_time_ms();

    for (uint8_t i = 0; i < move_list.index; i++) {
        move mv = move_list.moves[i];

        // Copy board state
        BoardState board;
        copy_board_state(board);

        make_move(mv);

        int old_nodes = nodes;
        perft_driver(depth - 1, nodes);
        std::cout << hr_squares[get_mv_src(mv)] << hr_squares[get_mv_trgt(mv)] << ": " << nodes - old_nodes << " nodes\n";

        restore_board_state(board);
    }

    std::cout << "Depth: " << depth << "\n";
    std::cout << "Nodes: " << nodes << "\n";
    std::cout << "Time: " << get_time_ms() - start_time << "\n";
}
