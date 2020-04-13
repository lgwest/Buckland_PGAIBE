project(2-2-WestWorldWithWoman)

set(SOURCE
BaseGameEntity.cpp
BaseGameEntity.h
CMakeLists.txt
EntityNames.h
Locations.h
main.cpp
Miner.cpp
Miner.h
MinerOwnedStates.cpp
MinerOwnedStates.h
MinersWife.cpp
MinersWife.h
MinersWifeOwnedStates.cpp
MinersWifeOwnedStates.h
State.h
StateMachine.h
)

add_executable(${PROJECT_NAME} ${SOURCE})

