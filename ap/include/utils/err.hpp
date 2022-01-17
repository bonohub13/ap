#pragma once
#include <map>
#include <string>

namespace ap {
    /**
     * Error codes for when the program fails
     */
    struct ERR_CODE {
        enum ERR_CODES {
            NO_ERROR,
            FILE_NOT_EXIST,
            DIRECTORY_NOT_EXIST,
            FAILED_TO_REMOVE_FILE,
            INVALID_ARGUMENT
        } ERR_CODES;
    };

    /**
     * Error messages to inform the user why the program failed.
     *
     * Example:
     *      std::ostringstream ostr;
     *
     *      ostr << ERR_MSG.FILE_NOT_EXIST.at('H') << "something..."
     *           << ERR_MSG.FILE_NOT_EXIST.at('T');
     *      // Extract string
     *      ostr.str();
     */
    class ERR_MSG_t {
        public:
            std::string get_FILE_NOT_EXIST(const char &key) const;
            std::string get_DIRECTORY_NOT_EXIST(const char &key) const;
            std::string get_FAILED_TO_REMOVE_FILE(const char &key) const;
            std::string get_INVALID_ARGUMENT(const char &key) const;
    };
} // namespace ap
