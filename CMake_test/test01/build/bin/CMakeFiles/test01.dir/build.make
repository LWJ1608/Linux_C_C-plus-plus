# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/Linux_C_C-plus-plus/CMake_test/test01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/Linux_C_C-plus-plus/CMake_test/test01/build

# Include any dependencies generated for this target.
include bin/CMakeFiles/test01.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include bin/CMakeFiles/test01.dir/compiler_depend.make

# Include the progress variables for this target.
include bin/CMakeFiles/test01.dir/progress.make

# Include the compile flags for this target's objects.
include bin/CMakeFiles/test01.dir/flags.make

bin/CMakeFiles/test01.dir/test01.o: bin/CMakeFiles/test01.dir/flags.make
bin/CMakeFiles/test01.dir/test01.o: ../src/test01.cpp
bin/CMakeFiles/test01.dir/test01.o: bin/CMakeFiles/test01.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/Linux_C_C-plus-plus/CMake_test/test01/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object bin/CMakeFiles/test01.dir/test01.o"
	cd /root/Linux_C_C-plus-plus/CMake_test/test01/build/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT bin/CMakeFiles/test01.dir/test01.o -MF CMakeFiles/test01.dir/test01.o.d -o CMakeFiles/test01.dir/test01.o -c /root/Linux_C_C-plus-plus/CMake_test/test01/src/test01.cpp

bin/CMakeFiles/test01.dir/test01.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test01.dir/test01.i"
	cd /root/Linux_C_C-plus-plus/CMake_test/test01/build/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/Linux_C_C-plus-plus/CMake_test/test01/src/test01.cpp > CMakeFiles/test01.dir/test01.i

bin/CMakeFiles/test01.dir/test01.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test01.dir/test01.s"
	cd /root/Linux_C_C-plus-plus/CMake_test/test01/build/bin && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/Linux_C_C-plus-plus/CMake_test/test01/src/test01.cpp -o CMakeFiles/test01.dir/test01.s

# Object files for target test01
test01_OBJECTS = \
"CMakeFiles/test01.dir/test01.o"

# External object files for target test01
test01_EXTERNAL_OBJECTS =

bin/test01: bin/CMakeFiles/test01.dir/test01.o
bin/test01: bin/CMakeFiles/test01.dir/build.make
bin/test01: bin/CMakeFiles/test01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/Linux_C_C-plus-plus/CMake_test/test01/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test01"
	cd /root/Linux_C_C-plus-plus/CMake_test/test01/build/bin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
bin/CMakeFiles/test01.dir/build: bin/test01
.PHONY : bin/CMakeFiles/test01.dir/build

bin/CMakeFiles/test01.dir/clean:
	cd /root/Linux_C_C-plus-plus/CMake_test/test01/build/bin && $(CMAKE_COMMAND) -P CMakeFiles/test01.dir/cmake_clean.cmake
.PHONY : bin/CMakeFiles/test01.dir/clean

bin/CMakeFiles/test01.dir/depend:
	cd /root/Linux_C_C-plus-plus/CMake_test/test01/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/Linux_C_C-plus-plus/CMake_test/test01 /root/Linux_C_C-plus-plus/CMake_test/test01/src /root/Linux_C_C-plus-plus/CMake_test/test01/build /root/Linux_C_C-plus-plus/CMake_test/test01/build/bin /root/Linux_C_C-plus-plus/CMake_test/test01/build/bin/CMakeFiles/test01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : bin/CMakeFiles/test01.dir/depend

