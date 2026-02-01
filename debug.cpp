#include "debug.hpp"

void print_bboard (bboard bb) {
    for (uint8_t rank = 0; rank < 8; rank++) {
        for (uint8_t file = 0; file < 8; file++) {
            std::cout << getbit(bb, rank * 8 + file);
        }
        std::cout << "\n";
    }

    std::cout << "\n\n";
}
