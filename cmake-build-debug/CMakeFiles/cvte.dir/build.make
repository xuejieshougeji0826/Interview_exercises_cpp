# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_SOURCE_DIR = /Users/gzc/Downloads/研二下+实习/程序员面试宝典

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/gzc/Downloads/研二下+实习/程序员面试宝典/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cvte.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cvte.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cvte.dir/flags.make

CMakeFiles/cvte.dir/cvte.cpp.o: CMakeFiles/cvte.dir/flags.make
CMakeFiles/cvte.dir/cvte.cpp.o: ../cvte.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/gzc/Downloads/研二下+实习/程序员面试宝典/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cvte.dir/cvte.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cvte.dir/cvte.cpp.o -c /Users/gzc/Downloads/研二下+实习/程序员面试宝典/cvte.cpp

CMakeFiles/cvte.dir/cvte.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cvte.dir/cvte.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/gzc/Downloads/研二下+实习/程序员面试宝典/cvte.cpp > CMakeFiles/cvte.dir/cvte.cpp.i

CMakeFiles/cvte.dir/cvte.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cvte.dir/cvte.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/gzc/Downloads/研二下+实习/程序员面试宝典/cvte.cpp -o CMakeFiles/cvte.dir/cvte.cpp.s

# Object files for target cvte
cvte_OBJECTS = \
"CMakeFiles/cvte.dir/cvte.cpp.o"

# External object files for target cvte
cvte_EXTERNAL_OBJECTS =

cvte: CMakeFiles/cvte.dir/cvte.cpp.o
cvte: CMakeFiles/cvte.dir/build.make
cvte: CMakeFiles/cvte.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/gzc/Downloads/研二下+实习/程序员面试宝典/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cvte"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cvte.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cvte.dir/build: cvte

.PHONY : CMakeFiles/cvte.dir/build

CMakeFiles/cvte.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cvte.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cvte.dir/clean

CMakeFiles/cvte.dir/depend:
	cd /Users/gzc/Downloads/研二下+实习/程序员面试宝典/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/gzc/Downloads/研二下+实习/程序员面试宝典 /Users/gzc/Downloads/研二下+实习/程序员面试宝典 /Users/gzc/Downloads/研二下+实习/程序员面试宝典/cmake-build-debug /Users/gzc/Downloads/研二下+实习/程序员面试宝典/cmake-build-debug /Users/gzc/Downloads/研二下+实习/程序员面试宝典/cmake-build-debug/CMakeFiles/cvte.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cvte.dir/depend

