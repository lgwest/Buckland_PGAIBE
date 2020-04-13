project(3-SteeringBehaviors)

set(SOURCE
BaseGameEntity.h
constants.h
EntityFunctionTemplates.h
GameWorld.cpp
GameWorld.h
main.cpp
MovingEntity.h
Obstacle.cpp
Obstacle.h
ParamLoader.cpp
ParamLoader.h
params.ini
params_ini_dir.h
params_ini_dir.h.in
Path.cpp
Path.h
resource.h
Script1.rc
SteeringBehaviors.cpp
SteeringBehaviors.h
Vehicle.cpp
Vehicle.h
)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/params_ini_dir.h.in ${CMAKE_CURRENT_SOURCE_DIR}/params_ini_dir.h)

add_executable(${PROJECT_NAME} WIN32 ${SOURCE})
target_link_libraries(${PROJECT_NAME} Common_Timer Common_Misc Common_2D)
