cmake_minimum_required(VERSION 3.17)
project(top_k_algorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(top_k_algorithm main.cpp max_heap.cpp max_heap.h max_heap.cpp max_heap.h select.cpp select.h top_k_algorithm.cpp top_k_algorithm.h)