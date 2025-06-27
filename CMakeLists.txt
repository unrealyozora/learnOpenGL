cmake_minimum_required(VERSION 3.10)

project(LearnOpenGL VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(../Libraries/OpenGL/include/)
include_directories(../Libraries/OpenGL/GLAD/include/)

#file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp src/*.c)

link_directories(${CMAKE_SOURCE_DIR}/../Libraries/OpenGL)

set_source_files_properties(src/glad.c PROPERTIES LANGUAGE C)
set(GLAD_SRC src/glad.c)

function(add_lesson_executable name source)
    add_executable(${name} ${source} ${GLAD_SRC})
    target_link_libraries(${name} glfw3)
endfunction()

add_lesson_executable(lesson1 src/lesson1/lesson1.cpp)
add_lesson_executable(lesson1-ex1 src/lesson1/lesson1-ex1.cpp)
add_lesson_executable(lesson1-ex2 src/lesson1/lesson1-ex2.cpp)
add_lesson_executable(lesson1-ex3 src/lesson1/lesson1-ex3.cpp)
