project(6-4-1-ExposeCPPFuncToLua-luabridge)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/this_dir.h.in ${CMAKE_CURRENT_SOURCE_DIR}/this_dir.h)

set(SOURCE
ExposingCPPFunctionsToLua.lua
main.cpp 
)

add_executable(${PROJECT_NAME} ${SOURCE} ../../notes.md)
target_link_libraries(${PROJECT_NAME} lua-5.3.5)

