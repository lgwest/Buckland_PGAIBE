project(6-4-2-ExposeCPPClasses-luabridge)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/this_dir.h.in ${CMAKE_CURRENT_SOURCE_DIR}/this_dir.h)

set(SOURCE
Animal.h
ExposingCPPClassesToLua.lua
main.cpp
Pet.h
this_dir.h
this_dir.h.in
)

add_executable(${PROJECT_NAME} ${SOURCE} ../../notes.md)
target_link_libraries(${PROJECT_NAME} lua-5.3.5)

