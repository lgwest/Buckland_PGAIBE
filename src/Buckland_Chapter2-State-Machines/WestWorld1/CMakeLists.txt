project(WestWorld1)
set(SOURCE
BaseGameEntity.cpp
BaseGameEntity.h
EntityNames.h
Locations.h
main.cpp
Miner.cpp
Miner.h
MinerOwnedStates.cpp
MinerOwnedStates.h
State.h
)
add_executable(westworld1 ${SOURCE})
