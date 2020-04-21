#include "lua.hpp"
#include <string>
#include <iostream>
using namespace std;


#include "LuaHelper/LuaHelperFunctions.h"
#include "luabridge/LuaBridge.h"
#include "Animal.h"
#include "Pet.h"

#include "this_dir.h"


void RegisterAnimalWithLua(lua_State* L)
{
    luabridge::getGlobalNamespace(L)
        .beginClass<Animal>("Animal")
	        .addConstructor<void(*) (std::string, int)>()
	        .addFunction("Speak", &Animal::Speak)
			.addFunction("NumLegs", &Animal::NumLegs)
        .endClass();
}

void RegisterPetWithLua(lua_State* L)
{
    luabridge::getGlobalNamespace(L)
        .deriveClass<Pet, Animal>("Pet")
	        .addConstructor<void(*) (std::string, std::string, int)>()
	        .addFunction("GetName", &Pet::GetName)
        .endClass();
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
  RunLuaScript(L, THIS_DIR"ExposingCPPClassesToLua.lua");

  lua_close(L);

    
  return 0;
}