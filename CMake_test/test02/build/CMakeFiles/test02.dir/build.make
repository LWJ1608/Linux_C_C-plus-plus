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
CMAKE_SOURCE_DIR = /root/Linux_C_C-plus-plus/CMake_test/test02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/Linux_C_C-plus-plus/CMake_test/test02/build

# Include any dependencies generated for this target.
include CMakeFiles/test02.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test02.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test02.dir/flags.make

CMakeFiles/test02.dir/商品管理.cpp.o: CMakeFiles/test02.dir/flags.make
CMakeFiles/test02.dir/商品管理.cpp.o: ../商品管理.cpp
CMakeFiles/test02.dir/商品管理.cpp.o: CMakeFiles/test02.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/Linux_C_C-plus-plus/CMake_test/test02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test02.dir/商品管理.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test02.dir/商品管理.cpp.o -MF CMakeFiles/test02.dir/商品管理.cpp.o.d -o CMakeFiles/test02.dir/商品管理.cpp.o -c /root/Linux_C_C-plus-plus/CMake_test/test02/商品管理.cpp

CMakeFiles/test02.dir/商品管理.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test02.dir/商品管理.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/Linux_C_C-plus-plus/CMake_test/test02/商品管理.cpp > CMakeFiles/test02.dir/商品管理.cpp.i

CMakeFiles/test02.dir/商品管理.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test02.dir/商品管理.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/Linux_C_C-plus-plus/CMake_test/test02/商品管理.cpp -o CMakeFiles/test02.dir/商品管理.cpp.s

CMakeFiles/test02.dir/src/函数定义.cpp.o: CMakeFiles/test02.dir/flags.make
CMakeFiles/test02.dir/src/函数定义.cpp.o: ../src/函数定义.cpp
CMakeFiles/test02.dir/src/函数定义.cpp.o: CMakeFiles/test02.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/Linux_C_C-plus-plus/CMake_test/test02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test02.dir/src/函数定义.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test02.dir/src/函数定义.cpp.o -MF CMakeFiles/test02.dir/src/函数定义.cpp.o.d -o CMakeFiles/test02.dir/src/函数定义.cpp.o -c /root/Linux_C_C-plus-plus/CMake_test/test02/src/函数定义.cpp

CMakeFiles/test02.dir/src/函数定义.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test02.dir/src/函数定义.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/Linux_C_C-plus-plus/CMake_test/test02/src/函数定义.cpp > CMakeFiles/test02.dir/src/函数定义.cpp.i

CMakeFiles/test02.dir/src/函数定义.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test02.dir/src/函数定义.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/Linux_C_C-plus-plus/CMake_test/test02/src/函数定义.cpp -o CMakeFiles/test02.dir/src/函数定义.cpp.s

# Object files for target test02
test02_OBJECTS = \
"CMakeFiles/test02.dir/商品管理.cpp.o" \
"CMakeFiles/test02.dir/src/函数定义.cpp.o"

# External object files for target test02
test02_EXTERNAL_OBJECTS =

test02: CMakeFiles/test02.dir/商品管理.cpp.o
test02: CMakeFiles/test02.dir/src/函数定义.cpp.o
test02: CMakeFiles/test02.dir/build.make
test02: CMakeFiles/test02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/Linux_C_C-plus-plus/CMake_test/test02/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable test02"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test02.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test02.dir/build: test02
.PHONY : CMakeFiles/test02.dir/build

CMakeFiles/test02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test02.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test02.dir/clean

CMakeFiles/test02.dir/depend:
	cd /root/Linux_C_C-plus-plus/CMake_test/test02/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/Linux_C_C-plus-plus/CMake_test/test02 /root/Linux_C_C-plus-plus/CMake_test/test02 /root/Linux_C_C-plus-plus/CMake_test/test02/build /root/Linux_C_C-plus-plus/CMake_test/test02/build /root/Linux_C_C-plus-plus/CMake_test/test02/build/CMakeFiles/test02.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test02.dir/depend

