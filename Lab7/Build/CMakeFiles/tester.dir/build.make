# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\Build

# Include any dependencies generated for this target.
include CMakeFiles/tester.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tester.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tester.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tester.dir/flags.make

CMakeFiles/tester.dir/src/Maze.cpp.obj: CMakeFiles/tester.dir/flags.make
CMakeFiles/tester.dir/src/Maze.cpp.obj: CMakeFiles/tester.dir/includes_CXX.rsp
CMakeFiles/tester.dir/src/Maze.cpp.obj: ../src/Maze.cpp
CMakeFiles/tester.dir/src/Maze.cpp.obj: CMakeFiles/tester.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\Build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tester.dir/src/Maze.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tester.dir/src/Maze.cpp.obj -MF CMakeFiles\tester.dir\src\Maze.cpp.obj.d -o CMakeFiles\tester.dir\src\Maze.cpp.obj -c C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\src\Maze.cpp

CMakeFiles/tester.dir/src/Maze.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tester.dir/src/Maze.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\src\Maze.cpp > CMakeFiles\tester.dir\src\Maze.cpp.i

CMakeFiles/tester.dir/src/Maze.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tester.dir/src/Maze.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\src\Maze.cpp -o CMakeFiles\tester.dir\src\Maze.cpp.s

CMakeFiles/tester.dir/src/Robot.cpp.obj: CMakeFiles/tester.dir/flags.make
CMakeFiles/tester.dir/src/Robot.cpp.obj: CMakeFiles/tester.dir/includes_CXX.rsp
CMakeFiles/tester.dir/src/Robot.cpp.obj: ../src/Robot.cpp
CMakeFiles/tester.dir/src/Robot.cpp.obj: CMakeFiles/tester.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\Build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tester.dir/src/Robot.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tester.dir/src/Robot.cpp.obj -MF CMakeFiles\tester.dir\src\Robot.cpp.obj.d -o CMakeFiles\tester.dir\src\Robot.cpp.obj -c C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\src\Robot.cpp

CMakeFiles/tester.dir/src/Robot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tester.dir/src/Robot.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\src\Robot.cpp > CMakeFiles\tester.dir\src\Robot.cpp.i

CMakeFiles/tester.dir/src/Robot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tester.dir/src/Robot.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\src\Robot.cpp -o CMakeFiles\tester.dir\src\Robot.cpp.s

CMakeFiles/tester.dir/src/main.cpp.obj: CMakeFiles/tester.dir/flags.make
CMakeFiles/tester.dir/src/main.cpp.obj: CMakeFiles/tester.dir/includes_CXX.rsp
CMakeFiles/tester.dir/src/main.cpp.obj: ../src/main.cpp
CMakeFiles/tester.dir/src/main.cpp.obj: CMakeFiles/tester.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\Build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/tester.dir/src/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tester.dir/src/main.cpp.obj -MF CMakeFiles\tester.dir\src\main.cpp.obj.d -o CMakeFiles\tester.dir\src\main.cpp.obj -c C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\src\main.cpp

CMakeFiles/tester.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tester.dir/src/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\src\main.cpp > CMakeFiles\tester.dir\src\main.cpp.i

CMakeFiles/tester.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tester.dir/src/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\src\main.cpp -o CMakeFiles\tester.dir\src\main.cpp.s

CMakeFiles/tester.dir/src/RandomRobot.cpp.obj: CMakeFiles/tester.dir/flags.make
CMakeFiles/tester.dir/src/RandomRobot.cpp.obj: CMakeFiles/tester.dir/includes_CXX.rsp
CMakeFiles/tester.dir/src/RandomRobot.cpp.obj: ../src/RandomRobot.cpp
CMakeFiles/tester.dir/src/RandomRobot.cpp.obj: CMakeFiles/tester.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\Build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/tester.dir/src/RandomRobot.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tester.dir/src/RandomRobot.cpp.obj -MF CMakeFiles\tester.dir\src\RandomRobot.cpp.obj.d -o CMakeFiles\tester.dir\src\RandomRobot.cpp.obj -c C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\src\RandomRobot.cpp

CMakeFiles/tester.dir/src/RandomRobot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tester.dir/src/RandomRobot.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\src\RandomRobot.cpp > CMakeFiles\tester.dir\src\RandomRobot.cpp.i

CMakeFiles/tester.dir/src/RandomRobot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tester.dir/src/RandomRobot.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\src\RandomRobot.cpp -o CMakeFiles\tester.dir\src\RandomRobot.cpp.s

# Object files for target tester
tester_OBJECTS = \
"CMakeFiles/tester.dir/src/Maze.cpp.obj" \
"CMakeFiles/tester.dir/src/Robot.cpp.obj" \
"CMakeFiles/tester.dir/src/main.cpp.obj" \
"CMakeFiles/tester.dir/src/RandomRobot.cpp.obj"

# External object files for target tester
tester_EXTERNAL_OBJECTS =

tester.exe: CMakeFiles/tester.dir/src/Maze.cpp.obj
tester.exe: CMakeFiles/tester.dir/src/Robot.cpp.obj
tester.exe: CMakeFiles/tester.dir/src/main.cpp.obj
tester.exe: CMakeFiles/tester.dir/src/RandomRobot.cpp.obj
tester.exe: CMakeFiles/tester.dir/build.make
tester.exe: libRandomRobot.a
tester.exe: libMaze.a
tester.exe: libRobot.a
tester.exe: CMakeFiles/tester.dir/linklibs.rsp
tester.exe: CMakeFiles/tester.dir/objects1.rsp
tester.exe: CMakeFiles/tester.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\Build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable tester.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\tester.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tester.dir/build: tester.exe
.PHONY : CMakeFiles/tester.dir/build

CMakeFiles/tester.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\tester.dir\cmake_clean.cmake
.PHONY : CMakeFiles/tester.dir/clean

CMakeFiles/tester.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7 C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7 C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\Build C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\Build C:\Users\zincalex\Desktop\Laboratorio-di-Programmazione\Lab7\Build\CMakeFiles\tester.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tester.dir/depend

