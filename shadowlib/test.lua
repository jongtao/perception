-- Lua test for shadow library

require("shadowlib")
print("Lua is passing 2 arguments to C function, and")
print("the C function says:")
ctrig_shadow(1, 2)

