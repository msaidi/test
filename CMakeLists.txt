cmake_minimum_required(VERSION 2.8)
add_executable(qsort qsort.c)
set(CMAKE_C_FLAGS "-std=c99")

enable_testing()
add_test(qsort qsort)
set_tests_properties(qsort PROPERTIES PASS_REGULAR_EXPRESSION "1 2 3 4 5 6 7 8 9 10")

