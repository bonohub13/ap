#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <memory>

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
    std::string err_msg;
    ap::File ap_file;
    ap::ERR_MSG_t *ERR_MSG;

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
    
            oss << ERR_MSG->get_INVALID_ARGUMENT('H') << args[0];
            for (uint i = 1; i < args.size(); i++) {
                oss << " " << args[i];
            }
            oss << ERR_MSG->get_INVALID_ARGUMENT('T');
    
            std::cout << oss.str() << std::endl;
    
            return ap::ERR_CODE::INVALID_ARGUMENT;
        }
    } else if (args.size() == 3) {
        if (check_if_element_exists(args, expected_args[2])) {
        } else {
            std::ostringstream oss;
    
            oss << ERR_MSG->get_INVALID_ARGUMENT('H') << args[0];
            for (uint i = 1; i < args.size(); i++) {
                oss << " " << args[i];
            }
            oss << ERR_MSG->get_INVALID_ARGUMENT('T');
    
            std::cout << oss.str() << std::endl;
    
            return ap::ERR_CODE::INVALID_ARGUMENT;
        }
    } else {
        err_msg = ERR_MSG->get_INVALID_ARGUMENT('H');
        if (argc == 2) {
            err_msg.append(args[0]);
            for (uint i = 1; i < args.size(); i++) {
                err_msg.append(" ");
                err_msg.append(args[i]);
            }
        }
        err_msg.append(ERR_MSG->get_INVALID_ARGUMENT('T'));

        std::cout << err_msg << std::endl;

        return ap::ERR_CODE::INVALID_ARGUMENT;
    }

    return ap::ERR_CODE::NO_ERROR;
}

bool check_if_element_exists(std::vector<std::string> &v,
                             std::string &element) {
    if (std::find(v.begin(), v.end(), element) != v.end()) {

        return true;
    } else {
        return false;
    }
}
