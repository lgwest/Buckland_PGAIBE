#include "lua.hpp"
#include <iostream>

#include "this_dir.h"

int main()
{
  //create a lua state
  lua_State* L = luaL_newstate();

  //open the lua libaries - new in lua5.1
  luaL_openlibs(L);
  
  if (int error = luaL_dofile(L, THIS_DIR "your_first_lua_script.lua") != 0)
  {
    std::cout << "\n[C++]: ERROR(" << error << "): Problem with lua script file!\n\n" << std::endl;

    return 0;
  }

  //tidy up
  lua_close(L);

  return 0;
}
