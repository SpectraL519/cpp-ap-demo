#pragma once

#include <cstdint>
#include <iostream>

enum class verbosity_level : uint16_t { low, mid, high };
inline constexpr verbosity_level max_verbosity_level = verbosity_level::high;

std::istream& operator>>(std::istream& input, verbosity_level& v);
