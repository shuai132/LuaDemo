#include "init.h"

#include "libs.h"

static const luaL_Reg loadedlibs[] = {
    {"tools",   luaopen_tools},
    {nullptr, nullptr}
};

void openExtendLibs (lua_State *L) {
    const luaL_Reg *lib;
    for (lib = loadedlibs; lib->func; lib++) {
        luaL_requiref(L, lib->name, lib->func, 1);
        lua_pop(L, 1);
    }
}
