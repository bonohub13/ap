add_library(ap_pkg
  SHARED
    err.cpp
    file.cpp
    patchUtils.cpp
)

target_include_directories(ap_pkg
  PUBLIC ${PROJECT_SOURCE_DIR}/include
)
