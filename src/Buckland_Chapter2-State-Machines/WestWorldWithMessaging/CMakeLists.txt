project(2-3-WestWorldWitMessaging)

set(SOURCE
BaseGameEntity.cpp
BaseGameEntity.h
CMakeLists.txt
EntityManager.cpp
EntityManager.h
EntityNames.h
Locations.h
main.cpp
MessageDispatcher.cpp
MessageDispatcher.h
MessageTypes.h
Miner.cpp
Miner.h
MinerOwnedStates.cpp
MinerOwnedStates.h
MinersWife.cpp
MinersWife.h
MinersWifeOwnedStates.cpp
MinersWifeOwnedStates.h
)

add_executable(${PROJECT_NAME} ${SOURCE})
target_link_libraries(${PROJECT_NAME} Common_Timer)
