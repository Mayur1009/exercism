#include "grains.h"

namespace grains {

// TODO: add your solution here
unsigned long long square(int n){
    return 1ULL << (n - 1);
}

unsigned long long total() {
    return ~0ULL; // Sum of GP -> 2^64 - 1
}

}  // namespace grains
