#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

#include "../include/utils/ap.hpp"

/**
 * Checks if vector includes an element (string)
 *
 * @params v : Source vector to check
 * @params element : Target string to find
 * @return True if element exists, false if otherwise.
 */
bool check_if_element_exists(std::vector<std::string> &v, std::string &element);

int main(int argc, char *argv[]) {
    typedef unsigned int uint;

    std::vector<std::string> expected_args = {"-t", "-s", "--config"};
    std::vector<std::string> args;
    std::string tgt_path;
    std::string src_path;
    ap::File ap_file;

    for (uint i = 1; i < argc; i++) {
        args.push_back(argv[i]);
    }

    if (args.size() == 4) {
        if (check_if_element_exists(args, expected_args[0]) && check_if_element_exists(args, expected_args[1])) {
            for (uint i = 0; i < args.size(); i++) {
                if (args[i] == expected_args[0]) {
                    tgt_path = args[i + 1];
                } else if (args[i] == expected_args[1]) {
                    src_path = args[i + 1];
                }
            }
            ap_file = ap::File(tgt_path, src_path);
        } else {
            std::ostringstream oss;
    
            oss << ap::ERR_MSG::INVALID_ARGUMENT['H'] << args[0];
            for (uint i = 1; i < args.size(); i++) {
                oss << " " << args[i];
            }
            oss << ap::ERR_MSG::INVALID_ARGUMENT['T'];
    
            std::cout << oss.str() << std::endl;
    
            return ap::ERR_CODE::INVALID_ARGUMENT;
        }
    } else if (args.size() == 2) {
        if (check_if_element_exists(args, expected_args[2])) {
        } else {
            std::ostringstream oss;
    
            oss << ap::ERR_MSG::INVALID_ARGUMENT['H'] << args[0];
            for (uint i = 1; i < args.size(); i++) {
                oss << " " << args[i];
            }
            oss << ap::ERR_MSG::INVALID_ARGUMENT['T'];
    
            std::cout << oss.str() << std::endl;
    
            return ap::ERR_CODE::INVALID_ARGUMENT;
        }
    } else {
        std::ostringstream oss;

        oss << ap::ERR_MSG::INVALID_ARGUMENT['H'] << args[0];
        for (uint i = 1; i < args.size(); i++) {
            oss << " " << args[i];
        }
        oss << ap::ERR_MSG::INVALID_ARGUMENT['T'];

        std::cout << oss.str() << std::endl;

        return ap::ERR_CODE::INVALID_ARGUMENT;
    }

    return ap::ERR_CODE::NO_ERROR;
}

bool check_if_element_exists(std::vector<std::string> &v,
                             std::string &element) {
    if (v.find(v.begin(), v.end(), element) != v.end()) {
        return true;
    } else {
        return false;
    }
}
