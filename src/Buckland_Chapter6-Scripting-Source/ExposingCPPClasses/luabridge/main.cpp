#include "lua.hpp"
#include <string>
#include <iostream>
using namespace std;


#include "LuaHelper/LuaHelperFunctions.h"
#include "Animal.h"
#include "Pet.h"




void RegisterAnimalWithLua(lua_State* L)
{
  //module(L)
  //[
  //  class_<Animal>("Animal")
  //  .def(constructor<string, int>())
  //  .def("Speak", &Animal::Speak)
  //  .def("NumLegs", &Animal::NumLegs)   
  //];  
}

void RegisterPetWithLua(lua_State* L)
{
  //module(L)
  //  [
  //    class_<Pet, bases<Animal> >("Pet")
  //    .def(constructor<string, string, int>())
  //    .def("GetName", &Pet::GetName)  
  //  
  //  ];  
}


int main()
{
  //create a lua state
  lua_State* L = luaL_newstate();

  //open the lua libaries - new in lua5.1
  luaL_openlibs(L);

  RegisterAnimalWithLua(L);
  RegisterPetWithLua(L);
 
  //load and run the script
  RunLuaScript(L, "ExposingCPPClassesToLua.lua");

  lua_close(L);

    
  return 0;
}