#include <cstddef>
#include <string>
// "[<LEVEL>]: <MESSAGE>"

namespace log_line {
std::string message(std::string line) {
    // return the message
    std::size_t pos = line.find(":");
    return line.substr(pos+2);
}

std::string log_level(std::string line) {
    // return the log level
    std::size_t start = 1;
    std::size_t end = line.find("]", start);
    return line.substr(start, end - start);
}

std::string reformat(std::string line) {
    // return the reformatted message
    return message(line) + " (" + log_level(line) + ")";
}
}  // namespace log_line
