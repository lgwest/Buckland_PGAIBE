project(Common_Messaging)

set(SOURCE
MessageDispatcher.cpp
MessageDispatcher.h
Telegram.h
)

add_library(${PROJECT_NAME} ${SOURCE})

