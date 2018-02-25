#include "libs.h"

static int tools_add(lua_State* l) {
    int paramNum = lua_gettop(l);
    double sum = 0;
    for (int i = 1; i <= paramNum; i++) {
        double value = luaL_checknumber(l, i);
        sum += value;
    }
    lua_pushnumber(l, sum);

    return 1;
}

static const luaL_Reg toolslib[] = {
    {"add",     tools_add},
    {nullptr, nullptr}
};

int luaopen_tools (lua_State* L) {
    luaL_newlib(L, toolslib);
    return 1;
}
