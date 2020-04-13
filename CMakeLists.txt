cmake_minimum_required(VERSION 3.0)

include_directories(${CMAKE_SOURCE_DIR}/src/Common)

add_subdirectory(src/Common/Time)
add_subdirectory(src/Common/Misc)
add_subdirectory(src/Common/2D)
add_subdirectory(src/Common/Debug)
add_subdirectory(src/Common/Messaging)
add_subdirectory(src/Common/Game)
add_subdirectory(src/Buckland_Chapter2-State-Machines/WestWorld1)
add_subdirectory(src/Buckland_Chapter2-State-Machines/WestWorldWithWoman)
add_subdirectory(src/Buckland_Chapter2-State-Machines/WestWorldWithMessaging)
add_subdirectory(src/Buckland_Chapter3-Steering-Behaviors)
add_subdirectory(src/Buckland_Chapter4-SimpleSoccer)
add_subdirectory(src/Buckland_Chapter5-Pathfinder)

