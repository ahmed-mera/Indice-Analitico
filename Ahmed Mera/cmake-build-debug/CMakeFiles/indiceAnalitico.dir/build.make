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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\xampp\htdocs\Ahmed_php\C & C++\indiceAnalitico"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\xampp\htdocs\Ahmed_php\C & C++\indiceAnalitico\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/indiceAnalitico.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/indiceAnalitico.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/indiceAnalitico.dir/flags.make

CMakeFiles/indiceAnalitico.dir/main.c.obj: CMakeFiles/indiceAnalitico.dir/flags.make
CMakeFiles/indiceAnalitico.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\xampp\htdocs\Ahmed_php\C & C++\indiceAnalitico\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/indiceAnalitico.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\indiceAnalitico.dir\main.c.obj   -c "C:\xampp\htdocs\Ahmed_php\C & C++\indiceAnalitico\main.c"

CMakeFiles/indiceAnalitico.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/indiceAnalitico.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\xampp\htdocs\Ahmed_php\C & C++\indiceAnalitico\main.c" > CMakeFiles\indiceAnalitico.dir\main.c.i

CMakeFiles/indiceAnalitico.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/indiceAnalitico.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\xampp\htdocs\Ahmed_php\C & C++\indiceAnalitico\main.c" -o CMakeFiles\indiceAnalitico.dir\main.c.s

# Object files for target indiceAnalitico
indiceAnalitico_OBJECTS = \
"CMakeFiles/indiceAnalitico.dir/main.c.obj"

# External object files for target indiceAnalitico
indiceAnalitico_EXTERNAL_OBJECTS =

indiceAnalitico.exe: CMakeFiles/indiceAnalitico.dir/main.c.obj
indiceAnalitico.exe: CMakeFiles/indiceAnalitico.dir/build.make
indiceAnalitico.exe: CMakeFiles/indiceAnalitico.dir/linklibs.rsp
indiceAnalitico.exe: CMakeFiles/indiceAnalitico.dir/objects1.rsp
indiceAnalitico.exe: CMakeFiles/indiceAnalitico.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\xampp\htdocs\Ahmed_php\C & C++\indiceAnalitico\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable indiceAnalitico.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\indiceAnalitico.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/indiceAnalitico.dir/build: indiceAnalitico.exe

.PHONY : CMakeFiles/indiceAnalitico.dir/build

CMakeFiles/indiceAnalitico.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\indiceAnalitico.dir\cmake_clean.cmake
.PHONY : CMakeFiles/indiceAnalitico.dir/clean

CMakeFiles/indiceAnalitico.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\xampp\htdocs\Ahmed_php\C & C++\indiceAnalitico" "C:\xampp\htdocs\Ahmed_php\C & C++\indiceAnalitico" "C:\xampp\htdocs\Ahmed_php\C & C++\indiceAnalitico\cmake-build-debug" "C:\xampp\htdocs\Ahmed_php\C & C++\indiceAnalitico\cmake-build-debug" "C:\xampp\htdocs\Ahmed_php\C & C++\indiceAnalitico\cmake-build-debug\CMakeFiles\indiceAnalitico.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/indiceAnalitico.dir/depend

