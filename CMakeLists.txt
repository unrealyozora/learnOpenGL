cmake_minimum_required(VERSION 3.10)

project(LearnOpenGL VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(../Libraries/OpenGL/include/)
include_directories(../Libraries/OpenGL/GLAD/include/)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp src/*.c)

link_directories(${CMAKE_SOURCE_DIR}/../Libraries/OpenGL)

set_source_files_properties(src/glad.c PROPERTIES LANGUAGE C)
add_executable(main ${SOURCES})

target_link_libraries(main glfw3)
message(STATUS "Sorgenti inclusi: ${SOURCES}")


