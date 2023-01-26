project(RavenInn)

add_library(RavenInnclude Interface.cpp Person.cpp)

target_include_directories(RavenInnclude
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include)
