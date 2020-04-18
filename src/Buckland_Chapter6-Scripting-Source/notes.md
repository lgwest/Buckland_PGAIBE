# What to use for the lua-c++ bindings?
## Some search results
- https://gamedev.stackexchange.com/questions/7829/what-is-the-recommended-library-for-using-lua-from-c
- https://stackoverflow.com/questions/19381301/how-to-expose-c-functions-to-a-lua-script
- https://github.com/vinniefalco/LuaBridge
- https://stackoverflow.com/questions/52564364/automated-lua-binding-using-c
- https://github.com/progschj/luacpp11
- https://www.lua.org/wshop14/Zykov.pdf
- https://github.com/jeremyong/Selene
- https://stackoverflow.com/questions/52564364/automated-lua-binding-using-c
- https://eliasdaler.wordpress.com/2014/07/18/using-lua-with-cpp-luabridge/
- https://github.com/shybovycha/lua-bridge-sample
- https://eliasdaler.wordpress.com/2014/11/01/using-lua-with-c-luabridge-part-2-using-scripts-for-object-behaviour/
- https://github.com/ThePhD/sol2
- https://sol2.readthedocs.io/en/latest/
- https://sol2.readthedocs.io/en/latest/tutorial/cxx-in-lua.html

## Conclusion
I try to use [LuaBridge](https://github.com/vinniefalco/LuaBridge) instead of  [LuaBind](https://github.com/luabind/luabind/tree/master/luabind) because it is a stansalone header only library
and LuaBind seems to depend on [boost](https://www.boost.org/) which can be a bit cumbersome to install.

Also check [Sol](https://github.com/ThePhD/sol2)

Another interesting alternative is [luacpp11](https://github.com/progschj/luacpp11), maybe to low-level?
