#pragma once

#include <array>
#include <string>
namespace kindergarten_garden {

// TODO: add your solution here
enum class Plants {
    clover,
    grass,
    radishes,
    violets
};
std::array<Plants, 4> plants(const std::string& garden, const std::string& name);

}  // namespace kindergarten_garden
