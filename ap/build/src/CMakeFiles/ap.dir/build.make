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
include src/CMakeFiles/ap.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/ap.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/ap.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/ap.dir/flags.make

src/CMakeFiles/ap.dir/main.cpp.o: src/CMakeFiles/ap.dir/flags.make
src/CMakeFiles/ap.dir/main.cpp.o: ../src/main.cpp
src/CMakeFiles/ap.dir/main.cpp.o: src/CMakeFiles/ap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/ap.dir/main.cpp.o"
	cd /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/ap.dir/main.cpp.o -MF CMakeFiles/ap.dir/main.cpp.o.d -o CMakeFiles/ap.dir/main.cpp.o -c /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/src/main.cpp

src/CMakeFiles/ap.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ap.dir/main.cpp.i"
	cd /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/src/main.cpp > CMakeFiles/ap.dir/main.cpp.i

src/CMakeFiles/ap.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ap.dir/main.cpp.s"
	cd /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/src/main.cpp -o CMakeFiles/ap.dir/main.cpp.s

# Object files for target ap
ap_OBJECTS = \
"CMakeFiles/ap.dir/main.cpp.o"

# External object files for target ap
ap_EXTERNAL_OBJECTS =

src/ap: src/CMakeFiles/ap.dir/main.cpp.o
src/ap: src/CMakeFiles/ap.dir/build.make
src/ap: include/utils/libap_pkg.so
src/ap: src/CMakeFiles/ap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ap"
	cd /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/ap.dir/build: src/ap
.PHONY : src/CMakeFiles/ap.dir/build

src/CMakeFiles/ap.dir/clean:
	cd /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/src && $(CMAKE_COMMAND) -P CMakeFiles/ap.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/ap.dir/clean

src/CMakeFiles/ap.dir/depend:
	cd /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/src /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/src /home/kensuke/workspaces/c_cpp/utils/applyPatch/ap/build/src/CMakeFiles/ap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/ap.dir/depend

