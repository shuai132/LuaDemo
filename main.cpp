#include <iostream>

#include "luahelper.h"

using namespace std;

int main(int argc, char *argv[])
{
    LuaHelper luaHelper;
    luaHelper.runMain(argc, argv);

    return 0;
}
