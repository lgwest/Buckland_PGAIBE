//turn off the inevitable warnings
#pragma warning (disable : 4786)

#include "lua.hpp"
#include <iostream>

using namespace std;


//include the helper functions
#include "luahelper/LuaHelperFunctions.h"


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

  //open luabind
  open(L);

  module(L)
  [
	  def("HelloWorld", &HelloWorld),
    def("add", &add)
  ];
 
  //load and run the script
  RunLuaScript(L, "ExposingCPPFunctionsToLua.lua");

  
  //tidy up
  lua_close(L);

    
  return 0;
}