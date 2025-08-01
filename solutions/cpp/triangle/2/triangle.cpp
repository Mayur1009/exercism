#include "triangle.h"
#include <stdexcept>

namespace triangle {

// TODO: add your solution here
flavor kind(float a, float b, float c) {
    if ((a+b) <= c|| (b+c) <= a || (a+c) <= b) throw std::domain_error("");
    if (a == b && b == c) return flavor::equilateral;
    if (a == b || b == c || a == c) return flavor::isosceles;
    return flavor::scalene;
}

}  // namespace triangle
