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

# Object files for target TextEditor
TextEditor_OBJECTS = \
"CMakeFiles/TextEditor.dir/main.cpp.o" \
"CMakeFiles/TextEditor.dir/TextEditorModel.cpp.o" \
"CMakeFiles/TextEditor.dir/TextEditorRender.cpp.o"

# External object files for target TextEditor
TextEditor_EXTERNAL_OBJECTS =

TextEditor: CMakeFiles/TextEditor.dir/main.cpp.o
TextEditor: CMakeFiles/TextEditor.dir/TextEditorModel.cpp.o
TextEditor: CMakeFiles/TextEditor.dir/TextEditorRender.cpp.o
TextEditor: CMakeFiles/TextEditor.dir/build.make
TextEditor: /Library/Frameworks/./sfml-graphics.framework/Versions/2.5.1/sfml-graphics
TextEditor: /Library/Frameworks/./sfml-audio.framework/Versions/2.5.1/sfml-audio
TextEditor: /usr/local/lib/libboost_filesystem-mt.dylib
TextEditor: /usr/local/lib/libboost_system-mt.dylib
TextEditor: /Library/Frameworks/./sfml-window.framework/Versions/2.5.1/sfml-window
TextEditor: /Library/Frameworks/./sfml-system.framework/Versions/2.5.1/sfml-system
TextEditor: CMakeFiles/TextEditor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/simonchubenko/Documents/C++/TextEditor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable TextEditor"
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

