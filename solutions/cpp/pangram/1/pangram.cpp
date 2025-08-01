#include "pangram.h"

namespace pangram {

// TODO: add your solution here
bool is_pangram(const std::string& sen) {
    bool present[26] = {false};
    for(auto& ch: sen)
        present[tolower(ch) - 'a'] = true;
    for(int i = 0; i < 26; ++i) 
        if (!present[i]) 
            return false;
    return true;
}

}  // namespace pangram
