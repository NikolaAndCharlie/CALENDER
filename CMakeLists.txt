cmake_minimum_required(VERSION 3.5)
project(calendar)


set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)


find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
set(Qt_libs Qt5::Widgets Qt5::Core Qt5::Gui)


file(GLOB hdr src/*.cpp)
file(GLOB src src/*.h)



add_executable(calendar WIN32 ${hdr} ${src})
target_link_libraries(calendar ${Qt_libs})
