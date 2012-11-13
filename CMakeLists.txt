##
#   CmakeLists.txt file to make rename_dir project
#   Change Log :
#       Version: 0.0.1
#           building skeleton
#   
#

# Project Name
set (PRO_NAME rename_dir)
set (LIB_NAME renamedir)

# Include Directory
set (INC_DIR ../include/)
set (SRC_DIR ../src/)

# Include SRC Directories

set ( SRC_FILES 
    "${SRC_DIR}/rename_dir.c"
)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories(${INC_DIR})
cmake_minimum_required (VERSION 2.6)
project (${PRO_NAME})
add_library (${LIB_NAME} SHARED ${SRC_FILES})
add_executable(${PRO_NAME} ../test/main.c)
target_link_libraries(${PRO_NAME} ${LIB_NAME})
