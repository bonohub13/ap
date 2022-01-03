#pragma once
#include <map>
#include <string>

namespace ap {
    /**
     * Error codes for when the program fails
     */
    enum class ERR_CODE {
        NO_ERROR,
        FILE_NOT_EXIST,
        DIRECTORY_NOT_EXIST,
        INVALID_ARGUMENT
    };

    /**
     * Error messages to inform the user why the program failed.
     *
     * Example:
     *      std::ostringstream ostr;
     *
     *      ostr << ERR_MSG.FILE_NOT_EXIST['H'] << "something..."
     *           << ERR_MSG.FILE_NOT_EXIST['T'];
     *      // Extract string
     *      ostr.str();
     */
    const struct ERR_MSG {
        std::map<char, std::string> FILE_NOT_EXIST;
        std::map<char, std::string> DIRECTORY_NOT_EXIST;
        std::map<char, std::string> INVALID_ARGUMENT;
    } ERR_MSG = {
        // FILE_NOT_EXIST
        {
            {'H', "ERR: File "},
            {'T', " does not exist."},
        },
        // DIRECTORY_NOT_EXIST
        {
            {'H', "ERR: Directory "},
            {'T', " does not exist."},
        },
        // INVALID_ARGUMENT
        {
            {'H', "ERR: Argument "},
            {'T', " is invalid.\nCheck the manual with \"--help\" option"},
        }
    };
} // namespace ap
