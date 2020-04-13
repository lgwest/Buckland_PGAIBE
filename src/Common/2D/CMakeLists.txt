project(Common_2D)

set(SOURCE
C2DMatrix.h
CMakeLists.txt
geometry.h
InvertedAABBox2D.h
Transformations.h
Wall2D.h
WallIntersectionTests.h
Vector2d.cpp
Vector2D.h
)

add_library(${PROJECT_NAME} ${SOURCE})

