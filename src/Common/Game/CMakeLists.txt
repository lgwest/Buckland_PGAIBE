project(Common_Game)

set(SOURCE
BaseGameEntity.cpp
BaseGameEntity.h
CMakeLists.txt
EntityFunctionTemplates.h
EntityManager.cpp
EntityManager.h
MovingEntity.h
Region.h
)

add_library(${PROJECT_NAME} ${SOURCE})

