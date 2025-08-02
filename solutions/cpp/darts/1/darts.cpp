#include "darts.h"
#include <cmath>

namespace darts {

// TODO: add your solution here
int score(double x, double y) {
    double dist = std::sqrt(x * x + y * y);
    if(dist <= 1) return 10;
    else if(dist <= 5) return 5;
    else if(dist <= 10) return 1;
    else return 0;
}

}  // namespace darts
