cmake_minimum_required(VERSION 4.3)
project(ModZero)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(ModZero main.cpp
        src/controller/Controller.cpp
        src/controller/Controller.h
        src/model/Model.cpp
        src/model/Model.h
        src/view/View.cpp
        src/view/View.h)
target_link_libraries(ModZero
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

