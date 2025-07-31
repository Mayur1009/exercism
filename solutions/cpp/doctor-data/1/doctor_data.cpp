// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#include "doctor_data.h"

#include <string>

heaven::Vessel heaven::Vessel::replicate(std::string name) const {
    return Vessel{name, generation + 1, current_system};
}

void heaven::Vessel::make_buster() {
    ++busters;
}

bool heaven::Vessel::shoot_buster() {
    if (busters > 0) {
        --busters;
        return true;
    }
    return false;
}

std::string heaven::get_older_bob(const Vessel& bob1, const Vessel& bob2) {
    return (bob1.generation < bob2.generation) ? bob1.name : bob2.name;
}

bool heaven::in_the_same_system(const Vessel& v1, const Vessel& v2) {
    return v1.current_system == v2.current_system;
}
