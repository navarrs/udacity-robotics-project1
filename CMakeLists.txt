cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

# Required packages
find_package(gazebo REQUIRED)

# Include necessary directories
include_directories(
	${GAZEBO_INCLUDE_DIRS}
)
link_directories(
	${GAZEBO_LIBRARY_DIRS}
)

# Flags
list(APPEND CMAKE_CXX_FLAGS "${GAZEBO_CXX_FLAGS}")

# Executable
add_library(plugin SHARED script/plugin.cpp)
target_link_libraries(plugin ${GAZEBO_LIBRARIES})