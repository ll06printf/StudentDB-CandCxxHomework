cmake_minimum_required(VERSION 3.20)
project(StudentDB)

set(CMAKE_CXX_STANDARD 20)

set(START_SRC
    start/input.cpp
        start/inputEntry.cpp
        start/displayEntry.cpp
        start/output.cpp
        start/del.cpp
        start/modify.cpp
        start/findWithId.cpp
        start/search.cpp
        start/sortArr.cpp
        start/sort_sa.cpp
        start/compareWithName.cpp
        start/compareWithScore.cpp
        start/sort_sd.cpp
        start/sort_nd.cpp
        start/sort_na.cpp
        start/write_to_file.cpp
        start/read_from_file.cpp
)

add_library(start ${START_SRC})
add_executable(StudentDB main.cpp)

target_link_libraries(StudentDB start)
