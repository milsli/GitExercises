cmake_minimum_required(VERSION 3.5)

project(GitExerc LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(GitExerc main.cpp
    addings.h addings.cpp
    constans.h)

include(GNUInstallDirs)
install(TARGETS GitExerc
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
