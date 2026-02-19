cmake_minimum_required(VERSION 3.18)
project(Calendar LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK4 REQUIRED IMPORTED_TARGET gtkmm-4.0)

add_executable(Calendar src/main.cpp src/windows/mainWindow.cpp src/widgets/calendar/calendar.cpp src/widgets/calendar/calendarDay.cpp src/backend/Event.cpp)
target_link_libraries(Calendar PRIVATE PkgConfig::GTK4)