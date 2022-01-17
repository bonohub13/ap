#include "err.hpp"

std::string ap::ERR_MSG_t::get_FILE_NOT_EXIST(const char &key) const {
    switch (key) {
    case 'H':
        return "ERR: File ";
    case 'T':
        return " does not exist.";
    default:
        return "";
    }
}
std::string ap::ERR_MSG_t::get_DIRECTORY_NOT_EXIST(const char &key) const {
    switch (key) {
    case 'H':
        return "ERR: Directory ";
    case 'T':
        return " does not exist.";
    default:
        return "";
    }

}
std::string ap::ERR_MSG_t::get_FAILED_TO_REMOVE_FILE(const char &key) const {
    switch (key) {
    case 'H':
        return "ERR: Failed to remove file ";
    case 'T':
        return ".";
    default:
        return "";
    }
}
std::string ap::ERR_MSG_t::get_INVALID_ARGUMENT(const char &key) const {
    switch (key) {
    case 'H':
        return "ERR: Argument";
    case 'T':
        return " is invalid.\nCheck the manual with \"--help\" option.";
    default:
        return "";
    }
}
