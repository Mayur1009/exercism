#include "raindrops.h"

namespace raindrops {

// TODO: add your solution here
std::string convert(int n) {
    std::string result;
    if (n % 3 == 0) 
        result += "Pling";
     if (n % 5 == 0) 
        result += "Plang";
     if (n % 7 == 0) 
        result += "Plong";
     
    if (result.size() > 0) return result;
    return std::to_string(n);
}


}  // namespace raindrops
