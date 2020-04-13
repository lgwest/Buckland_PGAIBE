project(6-2-cpp_using_lua)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/this_dir.h.in ${CMAKE_CURRENT_SOURCE_DIR}/this_dir.h)

set(SOURCE
cpp_using_lua.lua
main.cpp
this_dir.h
this_dir.h.in
)

add_executable(${PROJECT_NAME} ${SOURCE})
target_link_libraries(${PROJECT_NAME} lua-5.3.5)

