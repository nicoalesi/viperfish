#pragma once

#include <fstream>
#include <string>
#include <vector>

#include "perft_case.hpp"

void parse_epd (const std::string &filepath, std::vector<PerftCase> &cases);
