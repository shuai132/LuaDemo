#include "luahelper.h"
#include "luaextension/c/init.h"

int main(int argc, char *argv[]) {
    LuaHelper luaHelper;
    openExtendLibs(luaHelper.getLuaState());
    luaHelper.runMain(argc, argv);

    return 0;
}
