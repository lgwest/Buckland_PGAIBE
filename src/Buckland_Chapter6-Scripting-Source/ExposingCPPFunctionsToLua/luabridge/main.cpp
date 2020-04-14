//turn off the inevitable warnings
#pragma warning (disable : 4786)

#include "lua.hpp"
#include <iostream>
#include "this_dir.h"
using namespace std;


//include the helper functions
#include "luahelper/LuaHelperFunctions.h"

#include "luabridge/LuaBridge.h"

//define a couple of simple functions
void HelloWorld()
{
  cout << "\n[C++]: Hello World!" << endl;
}

int add(int a, int b)
{
  return a + b;
}



int main()
{
  //create a lua state
  lua_State* L = luaL_newstate();

	
  //open the lua libaries - new in lua5.1
  luaL_openlibs(L);

  luabridge::getGlobalNamespace(L)
      .addFunction("HelloWorld", HelloWorld)
      .addFunction("add", add);
   
  //load and run the script
  RunLuaScript(L, THIS_DIR"ExposingCPPFunctionsToLua.lua");

  
  //tidy up
  lua_close(L);

    
  return 0;
}