# CMakeList.txt: COgenerator 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 将源代码添加到此项目的可执行文件。
add_executable (COgenerator "COgenerator.cpp" "COgenerator.h" "Environment.h" "Random.h" "macro.h" "Instruction.h" "IM.h" "Environment.cpp" "IM.cpp" "Random.cpp" "global.h" "Instruction.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET COgenerator PROPERTY CXX_STANDARD 20)
endif()

# TODO: 如有需要，请添加测试并安装目标。
