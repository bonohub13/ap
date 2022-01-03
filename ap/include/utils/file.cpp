#include "file.hpp"
#include "err.hpp"

ap::File::File(std::string &tgt_path, std::string &src_path) {
    std::ostringstream oss;

    if (std::filesystem::exists(tgt_path)) {
        this->patch_path = tgt_path;
    } else {
        oss = std::ostringstream();
        oss << ERR_MSG::DIRECTORY_NOT_EXIST['H'] << tgt_path
            << ERR_MSG::DIRECTORY_NOT_EXIST['T'];
        std::cout << oss.str() << std::endl;
        std::exit(ERR_CODE::DIRECTORY_NOT_EXIST);
    }

    if (std::filesystem::exists(src_path)) {
        this->src_path = src_path;
    } else {
        oss = std::ostringstream();
        oss << ERR_MSG::DIRECTORY_NOT_EXIST['H'] << src_path
            << ERR_MSG::DIRECTORY_NOT_EXIST['T'];
        std::cout << oss.str() << std::endl;
        std::exit(ERR_CODE::DIRECTORY_NOT_EXIST);
    }
}

bool ap::File::check_if_file_exists(std::string &file) {
    return std::filesystem::exists(file);
}

std::vector<std::string> ap::File::list_files(std::string &path) {
    std::vector<std::string> ret_val;

    for (const auto &p :
            std::filesystem::recursive_directory_iterator(path)) {
        if (!std::filesystem::is_directory(p)) {
            if (filename_only) {
                ret_val.push_back(p.path().filename().string());
            } else {
                ret_val.push_back(p.path().string());
            }
        }
    }

    return ret_val;
}

void ap::File::fmove(std::string &src_file, std::string &dst_file) {
    std::ifstream src;
    if (std::filesystem::exists(src_file)) {
        src = std::ifstream(src_file, std::ios::binary);
    } else {
        std::ostringstream oss;

        oss << ERR_MSG::FILE_NOT_EXIST['H'] << src_file
            << ERR_MSG::FILE_NOT_EXIST['T'];
        std::cout << oss.str() << std::endl;
        std::exit(ERR_CODE::FILE_NOT_EXIST);
    }
    std::ofstream dst(dst_file, std::ios::binary);

    dst << src.rdbuf();

    std::remove(src_file);
}

void ap::File::fcopy(std::string &src_file, std::string &dst_file) {
    std::ifstream src;
    if (std::filesystem::exists(src_file)) {
        src = std::ifstream(src_file, std::ios::binary);
    } else {
        std::ostringstream oss;

        oss << ERR_MSG::FILE_NOT_EXIST['H'] << src_file
            << ERR_MSG::FILE_NOT_EXIST['T'];
        std::cout << oss.str() << std::endl;
        std::exit(ERR_CODE::FILE_NOT_EXIST);
    }
    std::ofstream dst(dst_file, std::ios::binary);

    dst << src.rdbuf();
}

std::string ap::File::get_patch_path() {
    return this->patch_path;
}

std::string ap::File::get_src_path() {
    return this->src_path;
}

