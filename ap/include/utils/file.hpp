#pragma once
#include <iostream> 
#include <sstream> 
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>

#include "err.hpp"

namespace ap {
    /**
     * Utilities to check the existance, copy, and find files.
     *
     * @params tgt_path : Target directory to apply patch
     * @params src_path : Source of patch
     */
    class File {
    public:
        File(const std::string &tgt_path, const std::string &src_path);
        File(){};
        ~File(){};
    private: // variables
        // Target path to apply patch
        std::string patch_path;
        // Path where the patch exists
        std::string src_path;
        // Error messages
        ap::ERR_MSG_t ERR_MSG;
    public: // methods (public)
        /**
         * Checks if file exists
         *
         * @params file : Name of file with complete path
         * @return If exists, returns true, else then false
         */
        bool check_if_file_exists(const std::string &file);

        /**
         * Lists files under directory which the patch exists.
         *
         * @return List of file names under directory and its subdirectory
         */
        std::vector<std::string> list_files(const std::string &path);

        /**
         * Moves file to directory.
         *
         * @params src_file : File and path of source
         * @params dst_file : File and path of destination.
         * @return returns 0 if no problems occurred, else if otherwise
         */
        int fmove(const std::string &src_file, const std::string &dst_file);

        /**
         * Copies file to directory.
         *
         * @params src_file : File and path of source (patch and/or existing file)
         * @params dst_file : File and path of destination.
         * @return returns 0 if no problems occurred, else if otherwise
         */
        int fcopy(const std::string &src_file, const std::string &dst_file);
    public: // setters and getters
        std::string get_patch_path() const;
        std::string get_src_path() const;
    }; // File
} // namespace ap
