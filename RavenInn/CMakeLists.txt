project(RavenInn)

add_executable(RavenInn RavenInn.cpp)

target_link_libraries(RavenInn
    PRIVATE
    RavenInnclude)
