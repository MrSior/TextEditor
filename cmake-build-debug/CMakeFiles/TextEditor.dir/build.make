# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_SOURCE_DIR = /Users/simonchubenko/Documents/C++/TextEditor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TextEditor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TextEditor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TextEditor.dir/flags.make

CMakeFiles/TextEditor.dir/main.cpp.o: CMakeFiles/TextEditor.dir/flags.make
CMakeFiles/TextEditor.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TextEditor.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TextEditor.dir/main.cpp.o -c /Users/simonchubenko/Documents/C++/TextEditor/main.cpp

CMakeFiles/TextEditor.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextEditor.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/simonchubenko/Documents/C++/TextEditor/main.cpp > CMakeFiles/TextEditor.dir/main.cpp.i

CMakeFiles/TextEditor.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextEditor.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/simonchubenko/Documents/C++/TextEditor/main.cpp -o CMakeFiles/TextEditor.dir/main.cpp.s

CMakeFiles/TextEditor.dir/TextEditorModel.cpp.o: CMakeFiles/TextEditor.dir/flags.make
CMakeFiles/TextEditor.dir/TextEditorModel.cpp.o: ../TextEditorModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TextEditor.dir/TextEditorModel.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TextEditor.dir/TextEditorModel.cpp.o -c /Users/simonchubenko/Documents/C++/TextEditor/TextEditorModel.cpp

CMakeFiles/TextEditor.dir/TextEditorModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextEditor.dir/TextEditorModel.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/simonchubenko/Documents/C++/TextEditor/TextEditorModel.cpp > CMakeFiles/TextEditor.dir/TextEditorModel.cpp.i

CMakeFiles/TextEditor.dir/TextEditorModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextEditor.dir/TextEditorModel.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/simonchubenko/Documents/C++/TextEditor/TextEditorModel.cpp -o CMakeFiles/TextEditor.dir/TextEditorModel.cpp.s

CMakeFiles/TextEditor.dir/TextEditorRender.cpp.o: CMakeFiles/TextEditor.dir/flags.make
CMakeFiles/TextEditor.dir/TextEditorRender.cpp.o: ../TextEditorRender.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/TextEditor.dir/TextEditorRender.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TextEditor.dir/TextEditorRender.cpp.o -c /Users/simonchubenko/Documents/C++/TextEditor/TextEditorRender.cpp

CMakeFiles/TextEditor.dir/TextEditorRender.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextEditor.dir/TextEditorRender.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/simonchubenko/Documents/C++/TextEditor/TextEditorRender.cpp > CMakeFiles/TextEditor.dir/TextEditorRender.cpp.i

CMakeFiles/TextEditor.dir/TextEditorRender.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextEditor.dir/TextEditorRender.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/simonchubenko/Documents/C++/TextEditor/TextEditorRender.cpp -o CMakeFiles/TextEditor.dir/TextEditorRender.cpp.s

CMakeFiles/TextEditor.dir/TextEditorController.cpp.o: CMakeFiles/TextEditor.dir/flags.make
CMakeFiles/TextEditor.dir/TextEditorController.cpp.o: ../TextEditorController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/TextEditor.dir/TextEditorController.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TextEditor.dir/TextEditorController.cpp.o -c /Users/simonchubenko/Documents/C++/TextEditor/TextEditorController.cpp

CMakeFiles/TextEditor.dir/TextEditorController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextEditor.dir/TextEditorController.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/simonchubenko/Documents/C++/TextEditor/TextEditorController.cpp > CMakeFiles/TextEditor.dir/TextEditorController.cpp.i

CMakeFiles/TextEditor.dir/TextEditorController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextEditor.dir/TextEditorController.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/simonchubenko/Documents/C++/TextEditor/TextEditorController.cpp -o CMakeFiles/TextEditor.dir/TextEditorController.cpp.s

CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuModel.cpp.o: CMakeFiles/TextEditor.dir/flags.make
CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuModel.cpp.o: ../SaveMenu/SaveMenuModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuModel.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuModel.cpp.o -c /Users/simonchubenko/Documents/C++/TextEditor/SaveMenu/SaveMenuModel.cpp

CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuModel.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/simonchubenko/Documents/C++/TextEditor/SaveMenu/SaveMenuModel.cpp > CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuModel.cpp.i

CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuModel.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/simonchubenko/Documents/C++/TextEditor/SaveMenu/SaveMenuModel.cpp -o CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuModel.cpp.s

CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuRender.cpp.o: CMakeFiles/TextEditor.dir/flags.make
CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuRender.cpp.o: ../SaveMenu/SaveMenuRender.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuRender.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuRender.cpp.o -c /Users/simonchubenko/Documents/C++/TextEditor/SaveMenu/SaveMenuRender.cpp

CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuRender.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuRender.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/simonchubenko/Documents/C++/TextEditor/SaveMenu/SaveMenuRender.cpp > CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuRender.cpp.i

CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuRender.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuRender.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/simonchubenko/Documents/C++/TextEditor/SaveMenu/SaveMenuRender.cpp -o CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuRender.cpp.s

CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuController.cpp.o: CMakeFiles/TextEditor.dir/flags.make
CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuController.cpp.o: ../SaveMenu/SaveMenuController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuController.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuController.cpp.o -c /Users/simonchubenko/Documents/C++/TextEditor/SaveMenu/SaveMenuController.cpp

CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuController.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/simonchubenko/Documents/C++/TextEditor/SaveMenu/SaveMenuController.cpp > CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuController.cpp.i

CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuController.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/simonchubenko/Documents/C++/TextEditor/SaveMenu/SaveMenuController.cpp -o CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuController.cpp.s

CMakeFiles/TextEditor.dir/Finder/FinderModel.cpp.o: CMakeFiles/TextEditor.dir/flags.make
CMakeFiles/TextEditor.dir/Finder/FinderModel.cpp.o: ../Finder/FinderModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/TextEditor.dir/Finder/FinderModel.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TextEditor.dir/Finder/FinderModel.cpp.o -c /Users/simonchubenko/Documents/C++/TextEditor/Finder/FinderModel.cpp

CMakeFiles/TextEditor.dir/Finder/FinderModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextEditor.dir/Finder/FinderModel.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/simonchubenko/Documents/C++/TextEditor/Finder/FinderModel.cpp > CMakeFiles/TextEditor.dir/Finder/FinderModel.cpp.i

CMakeFiles/TextEditor.dir/Finder/FinderModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextEditor.dir/Finder/FinderModel.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/simonchubenko/Documents/C++/TextEditor/Finder/FinderModel.cpp -o CMakeFiles/TextEditor.dir/Finder/FinderModel.cpp.s

CMakeFiles/TextEditor.dir/Finder/FinderRender.cpp.o: CMakeFiles/TextEditor.dir/flags.make
CMakeFiles/TextEditor.dir/Finder/FinderRender.cpp.o: ../Finder/FinderRender.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/TextEditor.dir/Finder/FinderRender.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TextEditor.dir/Finder/FinderRender.cpp.o -c /Users/simonchubenko/Documents/C++/TextEditor/Finder/FinderRender.cpp

CMakeFiles/TextEditor.dir/Finder/FinderRender.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextEditor.dir/Finder/FinderRender.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/simonchubenko/Documents/C++/TextEditor/Finder/FinderRender.cpp > CMakeFiles/TextEditor.dir/Finder/FinderRender.cpp.i

CMakeFiles/TextEditor.dir/Finder/FinderRender.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextEditor.dir/Finder/FinderRender.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/simonchubenko/Documents/C++/TextEditor/Finder/FinderRender.cpp -o CMakeFiles/TextEditor.dir/Finder/FinderRender.cpp.s

CMakeFiles/TextEditor.dir/Finder/FinderController.cpp.o: CMakeFiles/TextEditor.dir/flags.make
CMakeFiles/TextEditor.dir/Finder/FinderController.cpp.o: ../Finder/FinderController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/TextEditor.dir/Finder/FinderController.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TextEditor.dir/Finder/FinderController.cpp.o -c /Users/simonchubenko/Documents/C++/TextEditor/Finder/FinderController.cpp

CMakeFiles/TextEditor.dir/Finder/FinderController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextEditor.dir/Finder/FinderController.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/simonchubenko/Documents/C++/TextEditor/Finder/FinderController.cpp > CMakeFiles/TextEditor.dir/Finder/FinderController.cpp.i

CMakeFiles/TextEditor.dir/Finder/FinderController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextEditor.dir/Finder/FinderController.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/simonchubenko/Documents/C++/TextEditor/Finder/FinderController.cpp -o CMakeFiles/TextEditor.dir/Finder/FinderController.cpp.s

CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementModel.cpp.o: CMakeFiles/TextEditor.dir/flags.make
CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementModel.cpp.o: ../ContextualReplacementMenu/ContextualReplacementModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementModel.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementModel.cpp.o -c /Users/simonchubenko/Documents/C++/TextEditor/ContextualReplacementMenu/ContextualReplacementModel.cpp

CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementModel.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/simonchubenko/Documents/C++/TextEditor/ContextualReplacementMenu/ContextualReplacementModel.cpp > CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementModel.cpp.i

CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementModel.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/simonchubenko/Documents/C++/TextEditor/ContextualReplacementMenu/ContextualReplacementModel.cpp -o CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementModel.cpp.s

CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementRender.cpp.o: CMakeFiles/TextEditor.dir/flags.make
CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementRender.cpp.o: ../ContextualReplacementMenu/ContextualReplacementRender.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementRender.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementRender.cpp.o -c /Users/simonchubenko/Documents/C++/TextEditor/ContextualReplacementMenu/ContextualReplacementRender.cpp

CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementRender.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementRender.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/simonchubenko/Documents/C++/TextEditor/ContextualReplacementMenu/ContextualReplacementRender.cpp > CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementRender.cpp.i

CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementRender.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementRender.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/simonchubenko/Documents/C++/TextEditor/ContextualReplacementMenu/ContextualReplacementRender.cpp -o CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementRender.cpp.s

CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementController.cpp.o: CMakeFiles/TextEditor.dir/flags.make
CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementController.cpp.o: ../ContextualReplacementMenu/ContextualReplacementController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementController.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementController.cpp.o -c /Users/simonchubenko/Documents/C++/TextEditor/ContextualReplacementMenu/ContextualReplacementController.cpp

CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementController.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/simonchubenko/Documents/C++/TextEditor/ContextualReplacementMenu/ContextualReplacementController.cpp > CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementController.cpp.i

CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementController.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/simonchubenko/Documents/C++/TextEditor/ContextualReplacementMenu/ContextualReplacementController.cpp -o CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementController.cpp.s

# Object files for target TextEditor
TextEditor_OBJECTS = \
"CMakeFiles/TextEditor.dir/main.cpp.o" \
"CMakeFiles/TextEditor.dir/TextEditorModel.cpp.o" \
"CMakeFiles/TextEditor.dir/TextEditorRender.cpp.o" \
"CMakeFiles/TextEditor.dir/TextEditorController.cpp.o" \
"CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuModel.cpp.o" \
"CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuRender.cpp.o" \
"CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuController.cpp.o" \
"CMakeFiles/TextEditor.dir/Finder/FinderModel.cpp.o" \
"CMakeFiles/TextEditor.dir/Finder/FinderRender.cpp.o" \
"CMakeFiles/TextEditor.dir/Finder/FinderController.cpp.o" \
"CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementModel.cpp.o" \
"CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementRender.cpp.o" \
"CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementController.cpp.o"

# External object files for target TextEditor
TextEditor_EXTERNAL_OBJECTS =

TextEditor: CMakeFiles/TextEditor.dir/main.cpp.o
TextEditor: CMakeFiles/TextEditor.dir/TextEditorModel.cpp.o
TextEditor: CMakeFiles/TextEditor.dir/TextEditorRender.cpp.o
TextEditor: CMakeFiles/TextEditor.dir/TextEditorController.cpp.o
TextEditor: CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuModel.cpp.o
TextEditor: CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuRender.cpp.o
TextEditor: CMakeFiles/TextEditor.dir/SaveMenu/SaveMenuController.cpp.o
TextEditor: CMakeFiles/TextEditor.dir/Finder/FinderModel.cpp.o
TextEditor: CMakeFiles/TextEditor.dir/Finder/FinderRender.cpp.o
TextEditor: CMakeFiles/TextEditor.dir/Finder/FinderController.cpp.o
TextEditor: CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementModel.cpp.o
TextEditor: CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementRender.cpp.o
TextEditor: CMakeFiles/TextEditor.dir/ContextualReplacementMenu/ContextualReplacementController.cpp.o
TextEditor: CMakeFiles/TextEditor.dir/build.make
TextEditor: /Library/Frameworks/./sfml-graphics.framework/Versions/2.5.1/sfml-graphics
TextEditor: /Library/Frameworks/./sfml-audio.framework/Versions/2.5.1/sfml-audio
TextEditor: /usr/local/lib/libboost_filesystem-mt.dylib
TextEditor: /usr/local/lib/libboost_system-mt.dylib
TextEditor: /Library/Frameworks/./sfml-window.framework/Versions/2.5.1/sfml-window
TextEditor: /Library/Frameworks/./sfml-system.framework/Versions/2.5.1/sfml-system
TextEditor: CMakeFiles/TextEditor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable TextEditor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TextEditor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TextEditor.dir/build: TextEditor

.PHONY : CMakeFiles/TextEditor.dir/build

CMakeFiles/TextEditor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TextEditor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TextEditor.dir/clean

CMakeFiles/TextEditor.dir/depend:
	cd /Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/simonchubenko/Documents/C++/TextEditor /Users/simonchubenko/Documents/C++/TextEditor /Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug /Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug /Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug/CMakeFiles/TextEditor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TextEditor.dir/depend

