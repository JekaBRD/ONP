
# cmake version to be used
cmake_minimum_required( VERSION 3.0 )

# project name
project( ONP )

# flags
add_compile_options(-std=c++11)

# files

# include
include_directories( ./include/ONP ./src ./libs/Logger/include ./libs/Randomize/include )

# target
add_executable( main ./src/main.cpp ./src/ONP.cpp ./src/Helper_functions.cpp ./src/Files.cpp ./include/ONP/Files.h ./include/ONP/ONP.h ./include/ONP/Helper_functions.h)

# external libs
add_subdirectory( ./libs/Logger )
target_link_libraries( main logger )

# add_subdirectory( ./libs/Randomize )
# target_link_libraries( main randomize )

add_library(randomize STATIC IMPORTED)
set_property(TARGET randomize PROPERTY IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/libs/Randomize/librandomize.a)
target_link_libraries( main randomize )
