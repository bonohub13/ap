#include "file.hpp"

ap::File::File(const std::string &tgt_path, const std::string &src_path) {
    std::ostringstream oss;

    if (std::filesystem::exists(tgt_path)) {
        this->patch_path = tgt_path;
    } else {
        oss = std::ostringstream();
        oss << this->ERR_MSG.get_DIRECTORY_NOT_EXIST('H') << tgt_path
            << this->ERR_MSG.get_DIRECTORY_NOT_EXIST('T');
        std::cout << oss.str() << std::endl;
        std::exit(ERR_CODE::DIRECTORY_NOT_EXIST);
    }

    if (std::filesystem::exists(src_path)) {
        this->src_path = src_path;
    } else {
        oss = std::ostringstream();
        oss << this->ERR_MSG.get_DIRECTORY_NOT_EXIST('H') << src_path
            << this->ERR_MSG.get_DIRECTORY_NOT_EXIST('T');
        std::cout << oss.str() << std::endl;
        std::exit(ERR_CODE::DIRECTORY_NOT_EXIST);
    }
}

bool ap::File::check_if_file_exists(const std::string &file) {
    return std::filesystem::exists(file);
}

std::vector<std::string> ap::File::list_files(const std::string &path) {
    std::vector<std::string> ret_val;

    for (const auto &p :
            std::filesystem::recursive_directory_iterator(path)) {
        if (!std::filesystem::is_directory(p)) {
            ret_val.push_back(p.path().string());
        }
    }

    return ret_val;
}

int ap::File::fmove(const std::string &src_file, const std::string &dst_file) {
    std::ifstream src;
    if (std::filesystem::exists(src_file)) {
        src = std::ifstream(src_file, std::ios::binary);
    } else {
        std::ostringstream oss;

        oss << this->ERR_MSG.get_FILE_NOT_EXIST('H') << src_file
            << this->ERR_MSG.get_FILE_NOT_EXIST('T');
        std::cout << oss.str() << std::endl;

        return ERR_CODE::FILE_NOT_EXIST;
    }
    std::ofstream dst(dst_file, std::ios::binary);

    dst << src.rdbuf();

    if (!std::filesystem::exists(dst_file)) {
        std::ostringstream oss;

        oss << this->ERR_MSG.get_FILE_NOT_EXIST('H') << src_file
            << this->ERR_MSG.get_FILE_NOT_EXIST('T');
        std::cout << oss.str() << std::endl;

        return ERR_CODE::FILE_NOT_EXIST;
    }

    std::remove(src_file.c_str());

    return ERR_CODE::NO_ERROR;
}

int ap::File::fcopy(const std::string &src_file, const std::string &dst_file) {
    std::ifstream src;
    if (std::filesystem::exists(src_file)) {
        src = std::ifstream(src_file, std::ios::binary);
    } else {
        std::ostringstream oss;

        oss << this->ERR_MSG.get_FILE_NOT_EXIST('H') << src_file
            << this->ERR_MSG.get_FILE_NOT_EXIST('T');
        std::cout << oss.str() << std::endl;

        return ERR_CODE::FILE_NOT_EXIST;
    }
    std::ofstream dst(dst_file, std::ios::binary);

    dst << src.rdbuf();

    if (!std::filesystem::exists(dst_file)) {
        std::ostringstream oss;

        oss << this->ERR_MSG.get_FILE_NOT_EXIST('H') << src_file
            << this->ERR_MSG.get_FILE_NOT_EXIST('T');
        std::cout << oss.str() << std::endl;

        return ERR_CODE::FILE_NOT_EXIST;
    }

    return ERR_CODE::NO_ERROR;
}

std::string ap::File::get_patch_path() const {
    return this->patch_path;
}

std::string ap::File::get_src_path() const {
    return this->src_path;
}

