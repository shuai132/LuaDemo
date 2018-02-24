#include "luahelper.h"

#include <iostream>

using namespace std;

LuaHelper::LuaHelper()
{
    L = luaL_newstate();
    luaL_openlibs(L);
}

LuaHelper::~LuaHelper()
{
    lua_close(L);
    L = nullptr;
}

int LuaHelper::runMain(int argc, char *argv[])
{
    int status = luaL_dofile(L, "../main.lua");
    if(status != 0) {
        cout<<"load lua file failed! status = "<<status<<endl;
        cout<<lua_tostring(L, -1)<<endl;
        lua_close(L);
        return -1;
    }

    lua_getglobal(L, "main");
    lua_pushinteger(L, argc);
    for(int i = 0; i<argc; i++) {
        lua_pushstring(L, argv[i]);
    }
    status = lua_pcall(L, argc + 1, 1, 0);
    if (status == 0) {
        int ret = lua_tointeger(L, -1);
        cout<<"lua main function return value = "<<ret<<endl;
    } else {
        cout<<lua_tostring(L, -1)<<endl;
    }

    return 0;
}

lua_State *LuaHelper::getLuaState()
{
    return L;
}
