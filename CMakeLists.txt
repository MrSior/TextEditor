cmake_minimum_required(VERSION 3.19)
project(TextEditor)

set(CMAKE_CXX_STANDARD 17)

add_executable(TextEditor main.cpp TextEditorModel.h TextEditorModel.cpp TextEditorController.h TextEditorRender.h TextEditorRender.cpp TextEditorController.cpp)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
target_link_libraries(TextEditor sfml-graphics sfml-audio)

find_package(Boost COMPONENTS system filesystem REQUIRED)
#...
target_link_libraries(TextEditor
        ${Boost_FILESYSTEM_LIBRARY}
        ${Boost_SYSTEM_LIBRARY}
        )