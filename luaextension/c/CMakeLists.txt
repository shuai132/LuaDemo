cmake_minimum_required(VERSION 2.8)

include_directories(../../lua)
include_directories(./libs)

add_definitions("-std=c++11 -Wall")

aux_source_directory(. INIT_SRC)
aux_source_directory(./libs LIBS_SRC)
set(LUA_EXTEND_SRC ${INIT_SRC} ${LIBS_SRC})

add_library(luaextension STATIC ${LUA_EXTEND_SRC})
