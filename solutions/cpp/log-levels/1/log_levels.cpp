#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int message_pos = line.find(":") + 2;
    
    return line.length() > 0 ? (line.substr(message_pos)) : "";
}

std::string log_level(std::string line) {
    // return the log level
    int LogLevelInitialPos = line.find("[") + 1;
    int LogLevelFinalPos = line.find("]") - 1;

    return line.substr(LogLevelInitialPos, LogLevelFinalPos);
}

std::string reformat(std::string line) {
    // return the reformatted message
    return message(line) + " " + "(" + log_level(line) + ")";
}
}  // namespace log_line
