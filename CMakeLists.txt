cmake_minimum_required(VERSION 3.10)

project(LearnOpenGL VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(../Libraries/OpenGL/include/)
include_directories(../Libraries/OpenGL/GLAD/include/)

#file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp src/*.c)

link_directories(${CMAKE_SOURCE_DIR}/../Libraries/OpenGL)

set_source_files_properties(src/glad.c PROPERTIES LANGUAGE C)
set(GLAD_SRC src/glad.c)
set(SHADER_SRC src/shader.cpp)
set(STBI_SRC src/stb_image.cpp)

function(add_lesson_executable name source)
  add_executable(${name} ${source} ${GLAD_SRC} ${SHADER_SRC} ${STBI_SRC})
    target_link_libraries(${name} glfw3)
endfunction()

add_lesson_executable(lesson1 src/lesson1/lesson1.cpp)
add_lesson_executable(lesson1-ex1 src/lesson1/lesson1-ex1.cpp)
add_lesson_executable(lesson1-ex2 src/lesson1/lesson1-ex2.cpp)
add_lesson_executable(lesson1-ex3 src/lesson1/lesson1-ex3.cpp)
add_lesson_executable(lesson2 src/lesson2/lesson2.cpp)
add_lesson_executable(lesson2-ex1 src/lesson2/lesson2-ex1.cpp)
add_lesson_executable(lesson2-ex2 src/lesson2/lesson2-ex2.cpp)
add_lesson_executable(lesson2-ex3 src/lesson2/lesson2-ex3.cpp)
add_lesson_executable(lesson3 src/lesson3/lesson3.cpp)
add_lesson_executable(lesson3-ex1 src/lesson3/lesson3-ex1.cpp)
add_lesson_executable(lesson3-ex2 src/lesson3/lesson3-ex2.cpp)
add_lesson_executable(lesson3-ex3 src/lesson3/lesson3-ex3.cpp)
add_lesson_executable(lesson3-ex4 src/lesson3/lesson3-ex4.cpp)
