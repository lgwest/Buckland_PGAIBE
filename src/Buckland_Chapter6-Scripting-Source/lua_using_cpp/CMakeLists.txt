project(6-3-lua_using_cpp)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/this_dir.h.in ${CMAKE_CURRENT_SOURCE_DIR}/this_dir.h)

set(SOURCE
main.cpp
Rock_Paper_Scissors_Using_C++_Funcs.lua
RockPaperScissors.h
this_dir.h
this_dir.h.in
)

add_executable(${PROJECT_NAME} ${SOURCE})
target_link_libraries(${PROJECT_NAME} lua-5.3.5)

