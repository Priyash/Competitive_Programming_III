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
include CMakeFiles/Buy_Sell_Stock_II.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Buy_Sell_Stock_II.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Buy_Sell_Stock_II.dir/flags.make

CMakeFiles/Buy_Sell_Stock_II.dir/Buy_Sell_Stock_II.cpp.obj: CMakeFiles/Buy_Sell_Stock_II.dir/flags.make
CMakeFiles/Buy_Sell_Stock_II.dir/Buy_Sell_Stock_II.cpp.obj: ../Buy_Sell_Stock_II.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Buy_Sell_Stock_II.dir/Buy_Sell_Stock_II.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Buy_Sell_Stock_II.dir\Buy_Sell_Stock_II.cpp.obj -c D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\Buy_Sell_Stock_II.cpp

CMakeFiles/Buy_Sell_Stock_II.dir/Buy_Sell_Stock_II.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Buy_Sell_Stock_II.dir/Buy_Sell_Stock_II.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\Buy_Sell_Stock_II.cpp > CMakeFiles\Buy_Sell_Stock_II.dir\Buy_Sell_Stock_II.cpp.i

CMakeFiles/Buy_Sell_Stock_II.dir/Buy_Sell_Stock_II.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Buy_Sell_Stock_II.dir/Buy_Sell_Stock_II.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\Buy_Sell_Stock_II.cpp -o CMakeFiles\Buy_Sell_Stock_II.dir\Buy_Sell_Stock_II.cpp.s

# Object files for target Buy_Sell_Stock_II
Buy_Sell_Stock_II_OBJECTS = \
"CMakeFiles/Buy_Sell_Stock_II.dir/Buy_Sell_Stock_II.cpp.obj"

# External object files for target Buy_Sell_Stock_II
Buy_Sell_Stock_II_EXTERNAL_OBJECTS =

Buy_Sell_Stock_II.exe: CMakeFiles/Buy_Sell_Stock_II.dir/Buy_Sell_Stock_II.cpp.obj
Buy_Sell_Stock_II.exe: CMakeFiles/Buy_Sell_Stock_II.dir/build.make
Buy_Sell_Stock_II.exe: CMakeFiles/Buy_Sell_Stock_II.dir/linklibs.rsp
Buy_Sell_Stock_II.exe: CMakeFiles/Buy_Sell_Stock_II.dir/objects1.rsp
Buy_Sell_Stock_II.exe: CMakeFiles/Buy_Sell_Stock_II.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Buy_Sell_Stock_II.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Buy_Sell_Stock_II.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Buy_Sell_Stock_II.dir/build: Buy_Sell_Stock_II.exe

.PHONY : CMakeFiles/Buy_Sell_Stock_II.dir/build

CMakeFiles/Buy_Sell_Stock_II.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Buy_Sell_Stock_II.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Buy_Sell_Stock_II.dir/clean

CMakeFiles/Buy_Sell_Stock_II.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug D:\Projects\VS_CODE_PROJECTS\Competitive_Programming_III\cmake-build-debug\CMakeFiles\Buy_Sell_Stock_II.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Buy_Sell_Stock_II.dir/depend
