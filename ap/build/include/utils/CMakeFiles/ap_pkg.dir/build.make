# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build

# Include any dependencies generated for this target.
include include/utils/CMakeFiles/ap_pkg.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include include/utils/CMakeFiles/ap_pkg.dir/compiler_depend.make

# Include the progress variables for this target.
include include/utils/CMakeFiles/ap_pkg.dir/progress.make

# Include the compile flags for this target's objects.
include include/utils/CMakeFiles/ap_pkg.dir/flags.make

include/utils/CMakeFiles/ap_pkg.dir/file.cpp.o: include/utils/CMakeFiles/ap_pkg.dir/flags.make
include/utils/CMakeFiles/ap_pkg.dir/file.cpp.o: ../include/utils/file.cpp
include/utils/CMakeFiles/ap_pkg.dir/file.cpp.o: include/utils/CMakeFiles/ap_pkg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object include/utils/CMakeFiles/ap_pkg.dir/file.cpp.o"
	cd /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/include/utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT include/utils/CMakeFiles/ap_pkg.dir/file.cpp.o -MF CMakeFiles/ap_pkg.dir/file.cpp.o.d -o CMakeFiles/ap_pkg.dir/file.cpp.o -c /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/include/utils/file.cpp

include/utils/CMakeFiles/ap_pkg.dir/file.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ap_pkg.dir/file.cpp.i"
	cd /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/include/utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/include/utils/file.cpp > CMakeFiles/ap_pkg.dir/file.cpp.i

include/utils/CMakeFiles/ap_pkg.dir/file.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ap_pkg.dir/file.cpp.s"
	cd /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/include/utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/include/utils/file.cpp -o CMakeFiles/ap_pkg.dir/file.cpp.s

include/utils/CMakeFiles/ap_pkg.dir/patchUtils.cpp.o: include/utils/CMakeFiles/ap_pkg.dir/flags.make
include/utils/CMakeFiles/ap_pkg.dir/patchUtils.cpp.o: ../include/utils/patchUtils.cpp
include/utils/CMakeFiles/ap_pkg.dir/patchUtils.cpp.o: include/utils/CMakeFiles/ap_pkg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object include/utils/CMakeFiles/ap_pkg.dir/patchUtils.cpp.o"
	cd /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/include/utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT include/utils/CMakeFiles/ap_pkg.dir/patchUtils.cpp.o -MF CMakeFiles/ap_pkg.dir/patchUtils.cpp.o.d -o CMakeFiles/ap_pkg.dir/patchUtils.cpp.o -c /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/include/utils/patchUtils.cpp

include/utils/CMakeFiles/ap_pkg.dir/patchUtils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ap_pkg.dir/patchUtils.cpp.i"
	cd /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/include/utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/include/utils/patchUtils.cpp > CMakeFiles/ap_pkg.dir/patchUtils.cpp.i

include/utils/CMakeFiles/ap_pkg.dir/patchUtils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ap_pkg.dir/patchUtils.cpp.s"
	cd /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/include/utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/include/utils/patchUtils.cpp -o CMakeFiles/ap_pkg.dir/patchUtils.cpp.s

# Object files for target ap_pkg
ap_pkg_OBJECTS = \
"CMakeFiles/ap_pkg.dir/file.cpp.o" \
"CMakeFiles/ap_pkg.dir/patchUtils.cpp.o"

# External object files for target ap_pkg
ap_pkg_EXTERNAL_OBJECTS =

include/utils/libap_pkg.so: include/utils/CMakeFiles/ap_pkg.dir/file.cpp.o
include/utils/libap_pkg.so: include/utils/CMakeFiles/ap_pkg.dir/patchUtils.cpp.o
include/utils/libap_pkg.so: include/utils/CMakeFiles/ap_pkg.dir/build.make
include/utils/libap_pkg.so: include/utils/CMakeFiles/ap_pkg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libap_pkg.so"
	cd /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/include/utils && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ap_pkg.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
include/utils/CMakeFiles/ap_pkg.dir/build: include/utils/libap_pkg.so
.PHONY : include/utils/CMakeFiles/ap_pkg.dir/build

include/utils/CMakeFiles/ap_pkg.dir/clean:
	cd /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/include/utils && $(CMAKE_COMMAND) -P CMakeFiles/ap_pkg.dir/cmake_clean.cmake
.PHONY : include/utils/CMakeFiles/ap_pkg.dir/clean

include/utils/CMakeFiles/ap_pkg.dir/depend:
	cd /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/include/utils /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/include/utils /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/include/utils/CMakeFiles/ap_pkg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : include/utils/CMakeFiles/ap_pkg.dir/depend
