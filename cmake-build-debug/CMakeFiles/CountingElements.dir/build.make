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
include CMakeFiles/CountingElements.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CountingElements.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CountingElements.dir/flags.make

CMakeFiles/CountingElements.dir/CountingElements.cpp.obj: CMakeFiles/CountingElements.dir/flags.make
CMakeFiles/CountingElements.dir/CountingElements.cpp.obj: ../CountingElements.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CountingElements.dir/CountingElements.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CountingElements.dir\CountingElements.cpp.obj -c D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\CountingElements.cpp

CMakeFiles/CountingElements.dir/CountingElements.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CountingElements.dir/CountingElements.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\CountingElements.cpp > CMakeFiles\CountingElements.dir\CountingElements.cpp.i

CMakeFiles/CountingElements.dir/CountingElements.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CountingElements.dir/CountingElements.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\CountingElements.cpp -o CMakeFiles\CountingElements.dir\CountingElements.cpp.s

# Object files for target CountingElements
CountingElements_OBJECTS = \
"CMakeFiles/CountingElements.dir/CountingElements.cpp.obj"

# External object files for target CountingElements
CountingElements_EXTERNAL_OBJECTS =

CountingElements.exe: CMakeFiles/CountingElements.dir/CountingElements.cpp.obj
CountingElements.exe: CMakeFiles/CountingElements.dir/build.make
CountingElements.exe: CMakeFiles/CountingElements.dir/linklibs.rsp
CountingElements.exe: CMakeFiles/CountingElements.dir/objects1.rsp
CountingElements.exe: CMakeFiles/CountingElements.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CountingElements.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CountingElements.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CountingElements.dir/build: CountingElements.exe

.PHONY : CMakeFiles/CountingElements.dir/build

CMakeFiles/CountingElements.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CountingElements.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CountingElements.dir/clean

CMakeFiles/CountingElements.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug\CMakeFiles\CountingElements.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CountingElements.dir/depend

