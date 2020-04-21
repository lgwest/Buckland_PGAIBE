#include "lua.hpp"
#include <string>
#include <iostream>
using namespace std;

#include "this_dir.h"

#include "luabridge/LuaBridge.h"
#include "LuaHelper/LuaHelperFunctions.h"



int main()
{
  //create a lua state
  lua_State* L = luaL_newstate();

  //open the lua libaries - new in lua5.1
  luaL_openlibs(L);

 
  //load and run the script
  RunLuaScript(L, THIS_DIR"classes_in_lua.lua");

  lua_close(L);
    
  return 0;
}