cmake_minimum_required(VERSION 3.0)

add_executable(TPP_http-get-twice http-get-twice.cpp)

target_include_directories(TPP_http-get-twice PRIVATE ../TorPlusPlus) # Hacky, dont care