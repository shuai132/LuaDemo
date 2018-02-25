cmake_minimum_required(VERSION 2.8)

project(luademo)

set(LUA_SRC_DIR ./lua)
add_subdirectory(${LUA_SRC_DIR})
include_directories(${LUA_SRC_DIR})

set(LUA_EXTENSION_SRC_DIR luaextension/c)
add_subdirectory(${LUA_EXTENSION_SRC_DIR})

add_definitions("-std=c++11 -Wall")

add_executable(${PROJECT_NAME}
    main.cpp
    luahelper.cpp
)

target_link_libraries(${PROJECT_NAME} lua)
target_link_libraries(${PROJECT_NAME} luaextension)
