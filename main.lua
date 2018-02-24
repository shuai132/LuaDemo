-- 注意当前路径与可执行文件一致
package.path = package.path .. ";../luaextern/?.lua"
require("extern")

function main(argc, ...)
    print("lua main function running...")
    print(argc, ...)
end
