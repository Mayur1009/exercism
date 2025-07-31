#pragma once

namespace space_age {

// TODO: add your solution here

struct space_age {
    long long sec;
    space_age(long long sec) : sec(sec) {}
    long long seconds() const { return sec; }
    double on_earth() const;
    double on_mercury() const;
    double on_venus() const;
    double on_mars() const;
    double on_jupiter() const;
    double on_saturn() const;
    double on_uranus() const;
    double on_neptune() const;
};

}  // namespace space_age
