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
include CMakeFiles/LastStoneWeight.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LastStoneWeight.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LastStoneWeight.dir/flags.make

CMakeFiles/LastStoneWeight.dir/LastStoneWeight.cpp.obj: CMakeFiles/LastStoneWeight.dir/flags.make
CMakeFiles/LastStoneWeight.dir/LastStoneWeight.cpp.obj: ../LastStoneWeight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LastStoneWeight.dir/LastStoneWeight.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LastStoneWeight.dir\LastStoneWeight.cpp.obj -c D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\LastStoneWeight.cpp

CMakeFiles/LastStoneWeight.dir/LastStoneWeight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LastStoneWeight.dir/LastStoneWeight.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\LastStoneWeight.cpp > CMakeFiles\LastStoneWeight.dir\LastStoneWeight.cpp.i

CMakeFiles/LastStoneWeight.dir/LastStoneWeight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LastStoneWeight.dir/LastStoneWeight.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\LastStoneWeight.cpp -o CMakeFiles\LastStoneWeight.dir\LastStoneWeight.cpp.s

# Object files for target LastStoneWeight
LastStoneWeight_OBJECTS = \
"CMakeFiles/LastStoneWeight.dir/LastStoneWeight.cpp.obj"

# External object files for target LastStoneWeight
LastStoneWeight_EXTERNAL_OBJECTS =

LastStoneWeight.exe: CMakeFiles/LastStoneWeight.dir/LastStoneWeight.cpp.obj
LastStoneWeight.exe: CMakeFiles/LastStoneWeight.dir/build.make
LastStoneWeight.exe: CMakeFiles/LastStoneWeight.dir/linklibs.rsp
LastStoneWeight.exe: CMakeFiles/LastStoneWeight.dir/objects1.rsp
LastStoneWeight.exe: CMakeFiles/LastStoneWeight.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LastStoneWeight.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LastStoneWeight.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LastStoneWeight.dir/build: LastStoneWeight.exe

.PHONY : CMakeFiles/LastStoneWeight.dir/build

CMakeFiles/LastStoneWeight.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LastStoneWeight.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LastStoneWeight.dir/clean

CMakeFiles/LastStoneWeight.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug\CMakeFiles\LastStoneWeight.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LastStoneWeight.dir/depend

