cmake_minimum_required (VERSION 3.0)
 
project (polygon)
 
add_compile_options(-Wall)
add_compile_options(-std=gnu++11)
 
add_subdirectory(polygon)

add_subdirectory(googletest)
 
# Turn on CMake testing capabilities
#enable_testing()
 
# Add test cases
#add_test(AppTest1 ${PROJECT_BINARY_DIR}/bin/app.exe 100)
#add_test(AppTest2 ${PROJECT_BINARY_DIR}/bin/app.exe 200)
#add_test(AppTest3 ${PROJECT_BINARY_DIR}/bin/app.exe 300)
