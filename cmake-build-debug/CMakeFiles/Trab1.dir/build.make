# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/rocha/Desktop/faculdade/ED/trab 1/RadixSort"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/rocha/Desktop/faculdade/ED/trab 1/RadixSort/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Trab1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Trab1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Trab1.dir/flags.make

CMakeFiles/Trab1.dir/main.c.o: CMakeFiles/Trab1.dir/flags.make
CMakeFiles/Trab1.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/rocha/Desktop/faculdade/ED/trab 1/RadixSort/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Trab1.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Trab1.dir/main.c.o   -c "/Users/rocha/Desktop/faculdade/ED/trab 1/RadixSort/main.c"

CMakeFiles/Trab1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Trab1.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/rocha/Desktop/faculdade/ED/trab 1/RadixSort/main.c" > CMakeFiles/Trab1.dir/main.c.i

CMakeFiles/Trab1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Trab1.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/rocha/Desktop/faculdade/ED/trab 1/RadixSort/main.c" -o CMakeFiles/Trab1.dir/main.c.s

# Object files for target Trab1
Trab1_OBJECTS = \
"CMakeFiles/Trab1.dir/main.c.o"

# External object files for target Trab1
Trab1_EXTERNAL_OBJECTS =

Trab1: CMakeFiles/Trab1.dir/main.c.o
Trab1: CMakeFiles/Trab1.dir/build.make
Trab1: CMakeFiles/Trab1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/rocha/Desktop/faculdade/ED/trab 1/RadixSort/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Trab1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Trab1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Trab1.dir/build: Trab1

.PHONY : CMakeFiles/Trab1.dir/build

CMakeFiles/Trab1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Trab1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Trab1.dir/clean

CMakeFiles/Trab1.dir/depend:
	cd "/Users/rocha/Desktop/faculdade/ED/trab 1/RadixSort/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/rocha/Desktop/faculdade/ED/trab 1/RadixSort" "/Users/rocha/Desktop/faculdade/ED/trab 1/RadixSort" "/Users/rocha/Desktop/faculdade/ED/trab 1/RadixSort/cmake-build-debug" "/Users/rocha/Desktop/faculdade/ED/trab 1/RadixSort/cmake-build-debug" "/Users/rocha/Desktop/faculdade/ED/trab 1/RadixSort/cmake-build-debug/CMakeFiles/Trab1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Trab1.dir/depend

