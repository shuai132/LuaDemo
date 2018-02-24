#ifndef LUAHELPER_H
#define LUAHELPER_H

#include "lua.hpp"

class LuaHelper
{
public:
    LuaHelper();
    ~LuaHelper();
    int runMain(int argc, char *argv[]);
    lua_State* getLuaState();

private:
    lua_State* L = nullptr;
    LuaHelper* lua;
};

#endif // LUAHELPER_H
