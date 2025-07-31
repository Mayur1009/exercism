#include "leap.h"

namespace leap {

// TODO: add your solution here
bool is_leap_year(int year) {
    if (year % 4 != 0) return false;
    else if (year % 100 == 0 && year % 400 == 0) return true;
    else if (year % 100 == 0) return false;
    else return true;
}

}  // namespace leap
