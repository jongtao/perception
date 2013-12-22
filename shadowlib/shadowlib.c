// Wrapper for shadow generator

#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

#include "shadow.h"

static int ctrig_shadow(lua_State *L)
{
	int n = lua_gettop(L);
	printf("C Function received %d arguments.\n", n);
	return 0;
} // trig_shadow




int luaopen_shadowlib(lua_State *L)
{
	lua_register(L, "ctrig_shadow", ctrig_shadow);
	return 0;
} // luaopen_power()
