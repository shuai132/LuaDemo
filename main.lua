-- 注意当前路径与可执行文件一致
package.path = package.path .. ";../luaextension/lua/?.lua"
require("extension")

function main(argc, ...)
    print(argc, ...)

    local sum = tools.add(1.1, 2, 3.0)
    print("sum = " .. sum)
end
