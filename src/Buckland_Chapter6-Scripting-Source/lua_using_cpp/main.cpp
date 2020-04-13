#include <iostream>
#include <string>
#include "lua.hpp"
#include "luahelper/LuaHelperFunctions.h"
#include "RockPaperScissors.h"

#include "this_dir.h"

using namespace std;

int main()
{
  //create a lua state
  lua_State* L = luaL_newstate();

  //open the lua libaries - new in lua5.1
  luaL_openlibs(L);

  //register the functions with lua
  lua_register(L, "cpp_GetAIMove", cpp_GetAIMove);
  lua_register(L, "cpp_EvaluateTheGuesses", cpp_EvaluateTheGuesses);

  //run the script
  RunLuaScript(L, THIS_DIR "Rock_Paper_Scissors_Using_C++_Funcs.lua");
  
  //tidy up
  lua_close(L);

  cout << "\n\n\n";
    
  return 0;
}
