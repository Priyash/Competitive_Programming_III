# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BinaryTreeInorder.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BinaryTreeInorder.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BinaryTreeInorder.dir/flags.make

CMakeFiles/BinaryTreeInorder.dir/BinaryTreeInorder.cpp.obj: CMakeFiles/BinaryTreeInorder.dir/flags.make
CMakeFiles/BinaryTreeInorder.dir/BinaryTreeInorder.cpp.obj: ../BinaryTreeInorder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BinaryTreeInorder.dir/BinaryTreeInorder.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\BinaryTreeInorder.dir\BinaryTreeInorder.cpp.obj -c D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\BinaryTreeInorder.cpp

CMakeFiles/BinaryTreeInorder.dir/BinaryTreeInorder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BinaryTreeInorder.dir/BinaryTreeInorder.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\BinaryTreeInorder.cpp > CMakeFiles\BinaryTreeInorder.dir\BinaryTreeInorder.cpp.i

CMakeFiles/BinaryTreeInorder.dir/BinaryTreeInorder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BinaryTreeInorder.dir/BinaryTreeInorder.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\BinaryTreeInorder.cpp -o CMakeFiles\BinaryTreeInorder.dir\BinaryTreeInorder.cpp.s

# Object files for target BinaryTreeInorder
BinaryTreeInorder_OBJECTS = \
"CMakeFiles/BinaryTreeInorder.dir/BinaryTreeInorder.cpp.obj"

# External object files for target BinaryTreeInorder
BinaryTreeInorder_EXTERNAL_OBJECTS =

BinaryTreeInorder.exe: CMakeFiles/BinaryTreeInorder.dir/BinaryTreeInorder.cpp.obj
BinaryTreeInorder.exe: CMakeFiles/BinaryTreeInorder.dir/build.make
BinaryTreeInorder.exe: CMakeFiles/BinaryTreeInorder.dir/linklibs.rsp
BinaryTreeInorder.exe: CMakeFiles/BinaryTreeInorder.dir/objects1.rsp
BinaryTreeInorder.exe: CMakeFiles/BinaryTreeInorder.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BinaryTreeInorder.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\BinaryTreeInorder.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BinaryTreeInorder.dir/build: BinaryTreeInorder.exe

.PHONY : CMakeFiles/BinaryTreeInorder.dir/build

CMakeFiles/BinaryTreeInorder.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\BinaryTreeInorder.dir\cmake_clean.cmake
.PHONY : CMakeFiles/BinaryTreeInorder.dir/clean

CMakeFiles/BinaryTreeInorder.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug\CMakeFiles\BinaryTreeInorder.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BinaryTreeInorder.dir/depend

