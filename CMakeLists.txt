cmake_minimum_required(VERSION 3.17)
project(sdl C)
set(CMAKE_C_STANDARD 11)

add_executable(${PROJECT_NAME} main.c view/window.c view/window.h utils/utils.c utils/utils.h view/renderer.c view/renderer.h view/render.c view/render.h)
find_package(SDL2 CONFIG REQUIRED)
    target_link_libraries(${PROJECT_NAME} PRIVATE SDL2::SDL2main SDL2::SDL2-static)

find_package(EXPAT REQUIRED)
    target_link_libraries(${PROJECT_NAME} PRIVATE EXPAT::EXPAT)