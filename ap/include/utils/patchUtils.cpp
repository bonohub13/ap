#include "patchUtils.hpp"

std::string ap::PatchUtils::get_today() {
    typedef unsigned int uint;

    uint year, month, day;
    std::ostringstream ostr;
    std::time_t t = std::time(0);
    std::tm *today_ptr;

    today_ptr = std::localtime(&t);
    year = today_ptr->tm_year + 1900;
    month = today_ptr->tm_mon + 1;
    day = today_ptr->tm_mday;

    ostr << year;

    // If month and/or day is single digit (less than 10), add 0 in front of the
    // month/day.
    // 202111 (January 1st, 2022) -> 20220101
    if (month < 10) {
        ostr << 0 << month;
    } else {
        ostr << month;
    }

    if (day < 10) {
        ostr << 0 << day;
    } else {
        ostr << day;
    }

    this->date = ostr.str();

    return this->date;
}

int ap::PatchUtils::applyPatch(const std::string &tgt_path,
        const std::string &src_path) {
    typedef unsigned int uint;

    int ret_val;
    // If tgt_path contains a file, change the value to true;
    bool contains_file = false;
    std::string file_included;
    std::ostringstream filename_with_date;
    std::vector<std::string> file_path_split;
    File ap_file(tgt_path, src_path);
    // List of files under src_path
    std::vector<std::string> files_tgt;
    std::vector<std::string> files_src;

    files_tgt = ap_file.list_files(ap_file.get_patch_path());
    files_src = ap_file.list_files(ap_file.get_src_path());

    // check if destination directory/subdirectory includes the file
    for (const auto &p_src : files_src) {
        for (const auto &p_tgt : files_tgt) {
            // Check if p_tgt contains file
            if (p_tgt.find(p_src.substr(p_src.rfind("/") + 1))
                    != std::string::npos) {
                file_included = p_tgt;
                filename_with_date << "." << this->get_today();
                contains_file = true;
                break;
            }
        }
        if (contains_file) {
            // Checks if <file_included>.<date of today> exists in files_tgt
            // returns true if exists
            if (std::find(files_tgt.begin(), files_tgt.end(),
                          filename_with_date.str()) != files_tgt.end()) {
                uint i = 1;
                std::ostringstream ostr;
                filename_with_date << "_";
                while (true) {
                    ostr << filename_with_date.str() << std::to_string(i);
                    // If <filename>.<date>_<i> exists in files_tgt, increment
                    // i and check if that exists
                    if (std::find(files_tgt.begin(), files_tgt.end(),
                                  ostr.str()) != files_tgt.end()) {
                        i++;
                        ostr = std::ostringstream();
                    // If <filename>.<date>_<i> doesn't exist, rename
                    // <filename>.<date> to <filename>.<date>_<i>
                    // Then, copy patch as <filename>
                    } else {
                        ap_file.fmove(file_included, ostr.str());
                        ap_file.fcopy(p_src, file_included);
                        break;
                    }
                }
            // If <filename>.<date> doesn't exist, rename <filename> as
            // <filename>.<date>
            } else {
                ap_file.fmove(file_included, filename_with_date.str());
                ap_file.fcopy(p_src, file_included);
            }
        // If file does not exist, copy the directory structure of the patch,
        // and apply.
        } else {
            std::string tmp_src_path = p_src;
            std::ostringstream oss_tgt_path;
            size_t pos = tmp_p_path.find(ap_file.get_src_path());

            tmp_src_path.erase(pos, ap_file.get_src_path().length());
            if (tmp_src_path.starts_with('/')) {
                oss_tgt_path << ap_file.get_patch_path() << tmp_src_path;
            } else {
                oss_tgt_path << ap_file.get_patch_path() << "/" << tmp_src_path;
            }
            file_path_split = split_string_by_delimiter(oss_tgt_path.str(),
                                                        '/');
            // Checks if subdirectory exists.
            // If it doesn't exist, create subdirectory.
            for (const auto &path : file_path_split) {
                if (path != p_src.substr(p_src.rfind("/") + 1)) {
                    // Going to use filename_with_date because it's unused.
                    // It has nothing to do with date here!
                    filename_with_date << "/" << path;
                    if (!std::filesystem::exists(filename_with_date.str())) {
                        std::filesystem::create_directory(
                                filename_with_date.str());
                    }
                }
            }
            ap_file.fcopy(p_src, oss_tgt_path.str());
        }
    }
}

std::vector<std::string> ap::PatchUtils::split_string_by_delimiter(
        const std::string &str, const char &delimiter) {
    std::vector<std::string> ret_val;
    std::string line;
    std::ostringstream oss(str);

    while (std::getline(ss, line, delimiter)) {
        ret_val.push_back(line);
    }

    return ret_val;
}
