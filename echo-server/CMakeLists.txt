cmake_minimum_required(VERSION 3.0)

add_executable(TPP_echo-server echo-server.cpp)

target_include_directories(TPP_echo-server PRIVATE ../TorPlusPlus) # Hacky, dont care