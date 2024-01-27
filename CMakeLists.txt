cmake_minimum_required(VERSION 3.10)
project(CrappyNotesClient)

# Add Source files
set(SOURCES
    src/main.cpp
    src/version.cpp
    src/request.cpp)

# Add the header files
set(HEADERS
    inc/version.h
    inc/request.h
)

# Include directories
include_directories(inc)

add_executable(CrappyNotesClient ${SOURCES} ${HEADERS})