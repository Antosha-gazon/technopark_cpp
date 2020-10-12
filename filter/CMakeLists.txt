cmake_minimum_required(VERSION 3.17)
project(filter C)

set(CMAKE_C_STANDARD 11)
include_directories("${PROJECT_SOURCE_DIR}/inc")
add_executable(filter src/main.c inc/string.h inc/vector.h inc/filter.h src/string.c src/vector.c src/filter.c src/vector.c)