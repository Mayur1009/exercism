#include "kindergarten_garden.h"

namespace kindergarten_garden {

// TODO: add your solution here

Plants ch_to_plant(char c) {
    switch (c) {
        case 'C': return Plants::clover;
        case 'G': return Plants::grass;
        case 'R': return Plants::radishes;
        default: return Plants::violets;
    }
}

std::array<Plants, 4> plants(const std::string& garden, const std::string& name) {
    int index = (name[0] - 'A') * 2;
    int newline = garden.find('\n') + 1;
    return {
        ch_to_plant(garden[index]),
        ch_to_plant(garden[index + 1]),
        ch_to_plant(garden[newline + index]),
        ch_to_plant(garden[newline + index + 1])
    };
}

}  // namespace kindergarten_garden
