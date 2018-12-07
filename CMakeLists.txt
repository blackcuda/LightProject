cmake_minimum_required(VERSION 2.8)

project(LightProject)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 11)            # Enable c++11 standard


set(SOURCE_FILES
    main.cpp
    CLed.cpp
    CCollection.cpp
    CLightCollection.cpp
    CDriverWrapper.cpp
    )

set(HEADER_FILES
    CLed.h
    ILight.h
    ILedDriver.h
    CLightCollection.h
    CCollection.h
    CDriverWrapper.h
    )


add_executable(${PROJECT_NAME} ${SOURCE_FILES})
