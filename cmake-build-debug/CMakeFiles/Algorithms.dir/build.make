# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/cekomo/Documents/GitHub/Algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/cekomo/Documents/GitHub/Algorithms/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Algorithms.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Algorithms.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Algorithms.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Algorithms.dir/flags.make

CMakeFiles/Algorithms.dir/InsertionSort.cpp.o: CMakeFiles/Algorithms.dir/flags.make
CMakeFiles/Algorithms.dir/InsertionSort.cpp.o: /Users/cekomo/Documents/GitHub/Algorithms/InsertionSort.cpp
CMakeFiles/Algorithms.dir/InsertionSort.cpp.o: CMakeFiles/Algorithms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cekomo/Documents/GitHub/Algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Algorithms.dir/InsertionSort.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Algorithms.dir/InsertionSort.cpp.o -MF CMakeFiles/Algorithms.dir/InsertionSort.cpp.o.d -o CMakeFiles/Algorithms.dir/InsertionSort.cpp.o -c /Users/cekomo/Documents/GitHub/Algorithms/InsertionSort.cpp

CMakeFiles/Algorithms.dir/InsertionSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Algorithms.dir/InsertionSort.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cekomo/Documents/GitHub/Algorithms/InsertionSort.cpp > CMakeFiles/Algorithms.dir/InsertionSort.cpp.i

CMakeFiles/Algorithms.dir/InsertionSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Algorithms.dir/InsertionSort.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cekomo/Documents/GitHub/Algorithms/InsertionSort.cpp -o CMakeFiles/Algorithms.dir/InsertionSort.cpp.s

CMakeFiles/Algorithms.dir/NumberGenerator.cpp.o: CMakeFiles/Algorithms.dir/flags.make
CMakeFiles/Algorithms.dir/NumberGenerator.cpp.o: /Users/cekomo/Documents/GitHub/Algorithms/NumberGenerator.cpp
CMakeFiles/Algorithms.dir/NumberGenerator.cpp.o: CMakeFiles/Algorithms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cekomo/Documents/GitHub/Algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Algorithms.dir/NumberGenerator.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Algorithms.dir/NumberGenerator.cpp.o -MF CMakeFiles/Algorithms.dir/NumberGenerator.cpp.o.d -o CMakeFiles/Algorithms.dir/NumberGenerator.cpp.o -c /Users/cekomo/Documents/GitHub/Algorithms/NumberGenerator.cpp

CMakeFiles/Algorithms.dir/NumberGenerator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Algorithms.dir/NumberGenerator.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cekomo/Documents/GitHub/Algorithms/NumberGenerator.cpp > CMakeFiles/Algorithms.dir/NumberGenerator.cpp.i

CMakeFiles/Algorithms.dir/NumberGenerator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Algorithms.dir/NumberGenerator.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cekomo/Documents/GitHub/Algorithms/NumberGenerator.cpp -o CMakeFiles/Algorithms.dir/NumberGenerator.cpp.s

CMakeFiles/Algorithms.dir/main.cpp.o: CMakeFiles/Algorithms.dir/flags.make
CMakeFiles/Algorithms.dir/main.cpp.o: /Users/cekomo/Documents/GitHub/Algorithms/main.cpp
CMakeFiles/Algorithms.dir/main.cpp.o: CMakeFiles/Algorithms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cekomo/Documents/GitHub/Algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Algorithms.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Algorithms.dir/main.cpp.o -MF CMakeFiles/Algorithms.dir/main.cpp.o.d -o CMakeFiles/Algorithms.dir/main.cpp.o -c /Users/cekomo/Documents/GitHub/Algorithms/main.cpp

CMakeFiles/Algorithms.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Algorithms.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cekomo/Documents/GitHub/Algorithms/main.cpp > CMakeFiles/Algorithms.dir/main.cpp.i

CMakeFiles/Algorithms.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Algorithms.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cekomo/Documents/GitHub/Algorithms/main.cpp -o CMakeFiles/Algorithms.dir/main.cpp.s

CMakeFiles/Algorithms.dir/BubbleSort.cpp.o: CMakeFiles/Algorithms.dir/flags.make
CMakeFiles/Algorithms.dir/BubbleSort.cpp.o: /Users/cekomo/Documents/GitHub/Algorithms/BubbleSort.cpp
CMakeFiles/Algorithms.dir/BubbleSort.cpp.o: CMakeFiles/Algorithms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cekomo/Documents/GitHub/Algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Algorithms.dir/BubbleSort.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Algorithms.dir/BubbleSort.cpp.o -MF CMakeFiles/Algorithms.dir/BubbleSort.cpp.o.d -o CMakeFiles/Algorithms.dir/BubbleSort.cpp.o -c /Users/cekomo/Documents/GitHub/Algorithms/BubbleSort.cpp

CMakeFiles/Algorithms.dir/BubbleSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Algorithms.dir/BubbleSort.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cekomo/Documents/GitHub/Algorithms/BubbleSort.cpp > CMakeFiles/Algorithms.dir/BubbleSort.cpp.i

CMakeFiles/Algorithms.dir/BubbleSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Algorithms.dir/BubbleSort.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cekomo/Documents/GitHub/Algorithms/BubbleSort.cpp -o CMakeFiles/Algorithms.dir/BubbleSort.cpp.s

CMakeFiles/Algorithms.dir/SelectionSort.cpp.o: CMakeFiles/Algorithms.dir/flags.make
CMakeFiles/Algorithms.dir/SelectionSort.cpp.o: /Users/cekomo/Documents/GitHub/Algorithms/SelectionSort.cpp
CMakeFiles/Algorithms.dir/SelectionSort.cpp.o: CMakeFiles/Algorithms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cekomo/Documents/GitHub/Algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Algorithms.dir/SelectionSort.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Algorithms.dir/SelectionSort.cpp.o -MF CMakeFiles/Algorithms.dir/SelectionSort.cpp.o.d -o CMakeFiles/Algorithms.dir/SelectionSort.cpp.o -c /Users/cekomo/Documents/GitHub/Algorithms/SelectionSort.cpp

CMakeFiles/Algorithms.dir/SelectionSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Algorithms.dir/SelectionSort.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cekomo/Documents/GitHub/Algorithms/SelectionSort.cpp > CMakeFiles/Algorithms.dir/SelectionSort.cpp.i

CMakeFiles/Algorithms.dir/SelectionSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Algorithms.dir/SelectionSort.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cekomo/Documents/GitHub/Algorithms/SelectionSort.cpp -o CMakeFiles/Algorithms.dir/SelectionSort.cpp.s

CMakeFiles/Algorithms.dir/MergeSort.cpp.o: CMakeFiles/Algorithms.dir/flags.make
CMakeFiles/Algorithms.dir/MergeSort.cpp.o: /Users/cekomo/Documents/GitHub/Algorithms/MergeSort.cpp
CMakeFiles/Algorithms.dir/MergeSort.cpp.o: CMakeFiles/Algorithms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cekomo/Documents/GitHub/Algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Algorithms.dir/MergeSort.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Algorithms.dir/MergeSort.cpp.o -MF CMakeFiles/Algorithms.dir/MergeSort.cpp.o.d -o CMakeFiles/Algorithms.dir/MergeSort.cpp.o -c /Users/cekomo/Documents/GitHub/Algorithms/MergeSort.cpp

CMakeFiles/Algorithms.dir/MergeSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Algorithms.dir/MergeSort.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cekomo/Documents/GitHub/Algorithms/MergeSort.cpp > CMakeFiles/Algorithms.dir/MergeSort.cpp.i

CMakeFiles/Algorithms.dir/MergeSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Algorithms.dir/MergeSort.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cekomo/Documents/GitHub/Algorithms/MergeSort.cpp -o CMakeFiles/Algorithms.dir/MergeSort.cpp.s

CMakeFiles/Algorithms.dir/QuickSort.cpp.o: CMakeFiles/Algorithms.dir/flags.make
CMakeFiles/Algorithms.dir/QuickSort.cpp.o: /Users/cekomo/Documents/GitHub/Algorithms/QuickSort.cpp
CMakeFiles/Algorithms.dir/QuickSort.cpp.o: CMakeFiles/Algorithms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cekomo/Documents/GitHub/Algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Algorithms.dir/QuickSort.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Algorithms.dir/QuickSort.cpp.o -MF CMakeFiles/Algorithms.dir/QuickSort.cpp.o.d -o CMakeFiles/Algorithms.dir/QuickSort.cpp.o -c /Users/cekomo/Documents/GitHub/Algorithms/QuickSort.cpp

CMakeFiles/Algorithms.dir/QuickSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Algorithms.dir/QuickSort.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cekomo/Documents/GitHub/Algorithms/QuickSort.cpp > CMakeFiles/Algorithms.dir/QuickSort.cpp.i

CMakeFiles/Algorithms.dir/QuickSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Algorithms.dir/QuickSort.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cekomo/Documents/GitHub/Algorithms/QuickSort.cpp -o CMakeFiles/Algorithms.dir/QuickSort.cpp.s

CMakeFiles/Algorithms.dir/HeapSort.cpp.o: CMakeFiles/Algorithms.dir/flags.make
CMakeFiles/Algorithms.dir/HeapSort.cpp.o: /Users/cekomo/Documents/GitHub/Algorithms/HeapSort.cpp
CMakeFiles/Algorithms.dir/HeapSort.cpp.o: CMakeFiles/Algorithms.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/cekomo/Documents/GitHub/Algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Algorithms.dir/HeapSort.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Algorithms.dir/HeapSort.cpp.o -MF CMakeFiles/Algorithms.dir/HeapSort.cpp.o.d -o CMakeFiles/Algorithms.dir/HeapSort.cpp.o -c /Users/cekomo/Documents/GitHub/Algorithms/HeapSort.cpp

CMakeFiles/Algorithms.dir/HeapSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Algorithms.dir/HeapSort.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/cekomo/Documents/GitHub/Algorithms/HeapSort.cpp > CMakeFiles/Algorithms.dir/HeapSort.cpp.i

CMakeFiles/Algorithms.dir/HeapSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Algorithms.dir/HeapSort.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/cekomo/Documents/GitHub/Algorithms/HeapSort.cpp -o CMakeFiles/Algorithms.dir/HeapSort.cpp.s

# Object files for target Algorithms
Algorithms_OBJECTS = \
"CMakeFiles/Algorithms.dir/InsertionSort.cpp.o" \
"CMakeFiles/Algorithms.dir/NumberGenerator.cpp.o" \
"CMakeFiles/Algorithms.dir/main.cpp.o" \
"CMakeFiles/Algorithms.dir/BubbleSort.cpp.o" \
"CMakeFiles/Algorithms.dir/SelectionSort.cpp.o" \
"CMakeFiles/Algorithms.dir/MergeSort.cpp.o" \
"CMakeFiles/Algorithms.dir/QuickSort.cpp.o" \
"CMakeFiles/Algorithms.dir/HeapSort.cpp.o"

# External object files for target Algorithms
Algorithms_EXTERNAL_OBJECTS =

Algorithms: CMakeFiles/Algorithms.dir/InsertionSort.cpp.o
Algorithms: CMakeFiles/Algorithms.dir/NumberGenerator.cpp.o
Algorithms: CMakeFiles/Algorithms.dir/main.cpp.o
Algorithms: CMakeFiles/Algorithms.dir/BubbleSort.cpp.o
Algorithms: CMakeFiles/Algorithms.dir/SelectionSort.cpp.o
Algorithms: CMakeFiles/Algorithms.dir/MergeSort.cpp.o
Algorithms: CMakeFiles/Algorithms.dir/QuickSort.cpp.o
Algorithms: CMakeFiles/Algorithms.dir/HeapSort.cpp.o
Algorithms: CMakeFiles/Algorithms.dir/build.make
Algorithms: CMakeFiles/Algorithms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/cekomo/Documents/GitHub/Algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable Algorithms"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Algorithms.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Algorithms.dir/build: Algorithms
.PHONY : CMakeFiles/Algorithms.dir/build

CMakeFiles/Algorithms.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Algorithms.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Algorithms.dir/clean

CMakeFiles/Algorithms.dir/depend:
	cd /Users/cekomo/Documents/GitHub/Algorithms/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/cekomo/Documents/GitHub/Algorithms /Users/cekomo/Documents/GitHub/Algorithms /Users/cekomo/Documents/GitHub/Algorithms/cmake-build-debug /Users/cekomo/Documents/GitHub/Algorithms/cmake-build-debug /Users/cekomo/Documents/GitHub/Algorithms/cmake-build-debug/CMakeFiles/Algorithms.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Algorithms.dir/depend
