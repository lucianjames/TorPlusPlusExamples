cmake_minimum_required(VERSION 3.0)

add_executable(TPP_http-get http-get.cpp)

target_include_directories(TPP_http-get PRIVATE ../TorPlusPlus) # Hacky, dont care