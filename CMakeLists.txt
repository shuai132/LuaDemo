cmake_minimum_required(VERSION 2.8)

project(luademo)

add_subdirectory(./lua)

include_directories(./lua)

add_definitions("-std=c++11 -Wall")

add_executable(${PROJECT_NAME}
    main.cpp
    luahelper.cpp
)

target_link_libraries(${PROJECT_NAME} lua)
