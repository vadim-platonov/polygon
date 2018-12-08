add_executable(algorithms_test insertion_sort_test.cpp)
target_link_libraries(algorithms_test algorithms gtest_main)

add_test(algorithms_test algorithms_test)