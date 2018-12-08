enable_testing()

include_directories (${PROJECT_SOURCE_DIR}/include)

add_library(algorithms insertion_sort.cpp)

add_subdirectory(test)