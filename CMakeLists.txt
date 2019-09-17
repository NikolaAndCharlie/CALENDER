cmake_minimum_required(VERSION 3.5)
project(calendar)


set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)


find_package(Qt5Widgets)
find_package(Qt5Core)
find_package(Qt5Gui)
set(Qt_libs Qt5::widgets Qt5::Core Qt5::Gui)


file(GLOB hdr src/*.cpp)
file(GLOB src src/*.h)



add_executable(calendar WIN32 ${hdr} ${src})


target_link_libraries(calendar ${hdr} ${src})
