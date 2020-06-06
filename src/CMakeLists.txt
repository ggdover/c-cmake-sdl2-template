# One of two lines present depending on if output is a library (shared or static) or an executable
#add_library(mytarget)
add_executable(mytarget mytarget.c)

# List here all header files that users of this target (if it's a library) needs to access
# (To be specific the files listed here is what will appear in /usr/include or /usr/local/include 
# or something else of this sort when a user build and cmake-installs this repository)
#target_include_directories(mytarget
#    PUBLIC
#       ../include
#)

# Both all source and header files (.c and .h) should be listed in target_sources
# (So basically all files in 'src' directory and recursivley in all subdirectories)
target_sources(mytarget
	PRIVATE
		mytarget.c
)

# Incase there are any shared or static libraries that we are linking to
#target_link_libraries(mytarget
#
#)
