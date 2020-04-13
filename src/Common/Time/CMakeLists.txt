project(Common_Timer)

set(SOURCE
CrudeTimer.cpp
CrudeTimer.h
PrecisionTimer.cpp
PrecisionTimer.h
Regulator.h
)

add_library(${PROJECT_NAME} ${SOURCE})
