function printf(...)
    print(string.format(...))
end

table.toString = function(t)
    local str = {}
    for k, v in pairs(t) do
        str[#str + 1] = string.format("%-20s %s\n", k, v)
    end

    return table.concat(str)
end

table.print = function(t)
    print(table.toString(t))
end
