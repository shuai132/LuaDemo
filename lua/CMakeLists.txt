cmake_minimum_required(VERSION 2.8)

aux_source_directory(. LUA_SRC)

add_library(lualib STATIC ${LUA_SRC})

add_executable(lua lua.c)
target_link_libraries(lua lualib m)

add_executable(luac luac.c)
target_link_libraries(luac lualib m)
