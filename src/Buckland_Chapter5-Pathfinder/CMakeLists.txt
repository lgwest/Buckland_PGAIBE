project(PathFinder)

set(SOURCE
constants.h
icon1.ico
main.cpp
no_obstacles_source_target_close.map
Pathfinder.cpp
Pathfinder.h
resource.h
test_with_walls.map
toolbar.rc
toolbar1.bmp
)

add_executable(${PROJECT_NAME} WIN32 ${SOURCE})
target_link_libraries(${PROJECT_NAME} Common_Misc Common_Timer)
