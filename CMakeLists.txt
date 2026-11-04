
cmake_minimum_required(VERSION 3.20)

project(Showtime LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Showtime
    ShowtimeMain.cpp
    Movie.cpp
    MovieManager.cpp
)

target_include_directories(Showtime PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)
