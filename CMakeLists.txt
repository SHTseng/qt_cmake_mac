cmake_minimum_required(VERSION 3.0)
project(macos_qt_app)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Add a compiler flag, showing more detail
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
# Set C++11
set (CMAKE_CXX_STANDARD 11)

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

if(APPLE AND EXISTS /usr/local/opt/qt)
	# Homebrew installs Qt5 (up to at least 5.9.1) in
	# /usr/local/qt5, ensure it can be found by CMake since
	# it is not in the default /usr/local prefix.
    message("Include brewed Qt path")
	list(APPEND CMAKE_PREFIX_PATH "/usr/local/opt/qt")
endif()

find_package(Qt5Widgets REQUIRED)
set(QT_LIBRARIES Qt5::Widgets)

# We need add -DQT_WIDGETS_LIB when using QtWidgets in Qt 5.
add_definitions(${Qt5Widgets_DEFINITIONS})
include_directories(${Qt5Widgets_INCLUDE_DIRS})

add_subdirectory(src)
