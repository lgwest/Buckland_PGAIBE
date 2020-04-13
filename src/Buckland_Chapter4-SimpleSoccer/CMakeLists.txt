project(4-SimpleSocker)

set(SOURCE 
constants.h
FieldPlayer.cpp
FieldPlayer.h
FieldPlayerStates.cpp
FieldPlayerStates.h
Goal.cpp
Goal.h
Goalkeeper.cpp
Goalkeeper.h
GoalKeeperStates.cpp
GoalKeeperStates.h
icon1.ico
main.cpp
ParamLoader.cpp
ParamLoader.h
Params.ini
PlayerBase.cpp
PlayerBase.h
resource.h
Script1.rc
SoccerBall.cpp
SoccerBall.h
SoccerMessages.cpp
SoccerMessages.h
SoccerPitch.cpp
SoccerPitch.h
SoccerTeam.cpp
SoccerTeam.h
SteeringBehaviors.cpp
SteeringBehaviors.h
SupportSpotCalculator.cpp
SupportSpotCalculator.h
TeamStates.cpp
TeamStates.h
)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/params_ini_dir.h.in ${CMAKE_CURRENT_SOURCE_DIR}/params_ini_dir.h)

add_executable(${PROJECT_NAME} WIN32 ${SOURCE})
target_link_libraries(${PROJECT_NAME} Common_Timer Common_Misc Common_2D Common_DebugConsole Common_Messaging Common_Game)
