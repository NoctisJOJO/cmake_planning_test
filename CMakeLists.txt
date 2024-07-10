cmake_minimum_required(VERSION 3.29.0)
project(planning)
set(CMAKE_CXX_STANDARD 17)

#set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin) #将动态库(.dll)和可执行文件(.exe)都指定至指定目录
#CMAKE_ARCHIVE_OUTPUT_DIRECTORY  静态库，不包括可执行文件
#CMAKE_LIBRARY_OUTPUT_DIRECTORY  LINUX用

# aux_source_directory(. SRC_LISTS)   #将源代码放至SRC_LISTS变量
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LISTS)

#生成动态库
add_library(common
SHARED
${SRC_LISTS}
)
#动态库链接头文件
target_include_directories(common
PUBLIC
${PROJECT_SOURCE_DIR}/include
)

# add_executable(planning_main ${SRC_LISTS})  #生成可执行文件
add_executable(planning_main planning_main.cpp)
#可执行文件链接头文件
target_include_directories(planning_main
PUBLIC
${PROJECT_SOURCE_DIR}/include
)

#链接动态库和可执行文件
target_link_libraries(planning_main
PUBLIC
common
)
