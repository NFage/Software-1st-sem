# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Bruger\CLionProjects\lecture-1-NFage\src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Bruger\CLionProjects\lecture-1-NFage\src\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/exercise2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/exercise2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/exercise2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exercise2.dir/flags.make

CMakeFiles/exercise2.dir/exercise2.c.obj: CMakeFiles/exercise2.dir/flags.make
CMakeFiles/exercise2.dir/exercise2.c.obj: ../exercise2.c
CMakeFiles/exercise2.dir/exercise2.c.obj: CMakeFiles/exercise2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Bruger\CLionProjects\lecture-1-NFage\src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/exercise2.dir/exercise2.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/exercise2.dir/exercise2.c.obj -MF CMakeFiles\exercise2.dir\exercise2.c.obj.d -o CMakeFiles\exercise2.dir\exercise2.c.obj -c C:\Users\Bruger\CLionProjects\lecture-1-NFage\src\exercise2.c

CMakeFiles/exercise2.dir/exercise2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/exercise2.dir/exercise2.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Bruger\CLionProjects\lecture-1-NFage\src\exercise2.c > CMakeFiles\exercise2.dir\exercise2.c.i

CMakeFiles/exercise2.dir/exercise2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/exercise2.dir/exercise2.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Bruger\CLionProjects\lecture-1-NFage\src\exercise2.c -o CMakeFiles\exercise2.dir\exercise2.c.s

# Object files for target exercise2
exercise2_OBJECTS = \
"CMakeFiles/exercise2.dir/exercise2.c.obj"

# External object files for target exercise2
exercise2_EXTERNAL_OBJECTS =

exercise2.exe: CMakeFiles/exercise2.dir/exercise2.c.obj
exercise2.exe: CMakeFiles/exercise2.dir/build.make
exercise2.exe: CMakeFiles/exercise2.dir/linklibs.rsp
exercise2.exe: CMakeFiles/exercise2.dir/objects1.rsp
exercise2.exe: CMakeFiles/exercise2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Bruger\CLionProjects\lecture-1-NFage\src\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable exercise2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\exercise2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exercise2.dir/build: exercise2.exe
.PHONY : CMakeFiles/exercise2.dir/build

CMakeFiles/exercise2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\exercise2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/exercise2.dir/clean

CMakeFiles/exercise2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Bruger\CLionProjects\lecture-1-NFage\src C:\Users\Bruger\CLionProjects\lecture-1-NFage\src C:\Users\Bruger\CLionProjects\lecture-1-NFage\src\cmake-build-debug C:\Users\Bruger\CLionProjects\lecture-1-NFage\src\cmake-build-debug C:\Users\Bruger\CLionProjects\lecture-1-NFage\src\cmake-build-debug\CMakeFiles\exercise2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exercise2.dir/depend

