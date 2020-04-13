project(Common_Misc)

set(SOURCE
autolist.h
CellSpacePartition.h
Cgdi.cpp
Cgdi.h
CMakeLists.txt
ConsoleUtils.h
FrameCounter.cpp
FrameCounter.h
iniFileLoaderBase.cpp
iniFileLoaderBase.h
PriorityQueue.h
Smoother.h
Stream_Utility_Functions.h
TypeToString.h
utils.h
WindowUtils.cpp
WindowUtils.h
)

add_library(${PROJECT_NAME} ${SOURCE})
