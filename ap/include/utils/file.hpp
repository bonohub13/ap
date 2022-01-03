#pragma once
#include <iostream> 
#include <sstream> 
#include <fstream>
#include <string>
#include <vector>
#include <filesystem>

namespace ap {
    /**
     * Utilities to check the existance, copy, and find files.
     *
     * @params tgt_path : Target directory to apply patch
     * @params src_path : Source of patch
     */
    class File {
    public:
        File(std::string &tgt_path, std::string &src_path);
        ~File(){};
    private: // variables
        // Target path to apply patch
        std::string patch_path;
        // Path where the patch exists
        std::string src_path;
    public: // methods (public)
        /**
         * Checks if file exists
         *
         * @params file : Name of file with complete path
         * @return If exists, returns true, else then false
         */
        bool check_if_file_exists(std::string &file);

        /**
         * Lists files under directory which the patch exists.
         *
         * @return List of file names under directory and its subdirectory
         */
        std::vector<std::string> list_files(std::string &path);

        /**
         * Moves file to directory.
         *
         * @params src_file : File and path of source
         * @params dst_file : File and path of destination.
         */
        void fmove(std::string &src_file, std::string &dst_file);

        /**
         * Copies file to directory.
         *
         * @params src_file : File and path of source (patch and/or existing file)
         * @params dst_file : File and path of destination.
         */
        void fcopy(std::string &src_file, std::string &dst_file);
    public: // setters and getters
        std::string get_patch_path();
        std::string get_src_path();
    }; // File
} // namespace ap
