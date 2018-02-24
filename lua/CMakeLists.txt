cmake_minimum_required(VERSION 2.8)

aux_source_directory(. LUA_SRC)

add_library(lua STATIC ${LUA_SRC})
