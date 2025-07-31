// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#pragma once
#include <string>

namespace star_map {
enum class System {BetaHydri, Sol, EpsilonEridani, AlphaCentauri, DeltaEridani, Omicron2Eridani};
}

namespace heaven {
class Vessel {
public:
    std::string name;
    int generation;
    star_map::System current_system;
    int busters = 0;

    Vessel(const std::string& name, int generation)
        : name(name), generation(generation), current_system(star_map::System::Sol) {}
    Vessel(const std::string& name, int generation, star_map::System system)
        : name(name), generation(generation), current_system(system) {}

    Vessel replicate(std::string name) const;
    void make_buster();
    bool shoot_buster();
};

std::string get_older_bob(const Vessel& bob1, const Vessel& bob2);
bool in_the_same_system(const Vessel& v1, const Vessel& v2);
}

