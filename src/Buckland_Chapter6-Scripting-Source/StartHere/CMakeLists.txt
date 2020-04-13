project(6-1-StartHere)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/this_dir.h.in ${CMAKE_CURRENT_SOURCE_DIR}/this_dir.h)

set(SOURCE
main.cpp
this_dir.h
this_dir.h.in
your_first_lua_script.lua
)

add_executable(${PROJECT_NAME} ${SOURCE})
target_link_libraries(${PROJECT_NAME} lua-5.3.5)

