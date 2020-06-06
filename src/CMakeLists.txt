cmake_minimum_required(VERSION 3.1)
project(myproj)

# Finds and loads settings from SDL2 project
# (See more info on 'find_package' and exactly what it does in cmakes online documentation.
#  Link: https://cmake.org/cmake/help/latest/command/find_package.html)
find_package(SDL2 REQUIRED)
# SDL2 header files are visible and SDL2 can be used for all targets
# In this directoy and all subdirectories. To only make SDL2 available
# to specific targets, use 'target_incude_directories' instead.
include_directories(${SDL2_INCLUDE_DIRS})

# One of two lines present depending on if output is a library (shared or static) or an executable
#add_library(mytarget)
add_executable(mytarget)

# List here all header files that users of this target (if it's a library) needs to access
# (To be specific the files listed here is what will appear in /usr/include or /usr/local/include 
# or something else of this sort when a user build and cmake-installs this repository)
#target_include_directories(mytarget
#    PUBLIC
#       ../include
#)

# Read CMakeLists.txt of module 'sdl_adapater'
# (This might seem a bit overkill when the project contains very few .h/.c files, 
#  but as it grows it is very nice to divide the code into smaller modules which
#  each have their own CMakeLists.txt file, in order to reduce the size of this
#  CMakeLists.txt file as much as possible.
add_subdirectory(sdl_adapter)

# Both all source and header files (.c and .h) should be listed in target_sources
# (So basically all files in 'src' directory and recursivley in all subdirectories)
target_sources(mytarget
	PRIVATE
		mytarget.c
)

# Incase there are any shared or static libraries that we are linking to
target_link_libraries(mytarget
	${SDL2_LIBRARIES}
)
