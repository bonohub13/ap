#pragma once
#include <algorithm>
#include <ctime>

#include "file.hpp"

namespace ap {
    class PatchUtils {
    public:
        PatchUtils(){};
        ~PatchUtils(){};
    private: // variables
        std::string date;
    public: // methods (public)
        /**
         * Gets the date of today in the format of 'YYYYMMDD'
         *
         * @return Date of today in the format of 'YYYYMMDD'
         */
        std::string get_today();

        /**
         * Finds if patched source code exists.
         * If the source code exists, renames the existing code with date at the
         * end. If it doesn't exist, copies the patch to the main developement
         * directory.
         * eg. source_code.cpp -> source_code.cpp.20220101 (patch date)
         *
         * @return Error code
         */
        int applyPatch(const std::string &tgt_path,
                       const std::string &src_path);
    private: // methods (private)
        /**
         * Splits the string by delimiter.
         *
         * @params str : String to split by delimiter.
         * @params delimiter : Character to split by.
         * @return Vector of strings that have been split by specified
         *         delimiter.
         */
        std::vector<std::string> split_string_by_delimiter(
                const std::string& str,
                const char &delimiter);
    };
} // namespace ap
