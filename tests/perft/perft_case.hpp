#pragma once

#include <cstdint>
#include <string>

typedef struct {
    std::string fen;
    uint8_t depth;
    uint64_t expected;
} PerftCase;
