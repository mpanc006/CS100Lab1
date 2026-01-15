CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(shape_area_project)

ADD_EXECUTABLE(area_calculator
    src/main1.cpp
    src/rectangle.cpp
)

ADD_EXECUTABLE(shape_area_calculator
    src/shape_main.cpp
    src/triangle.cpp
    src/rectangle.cpp
)

