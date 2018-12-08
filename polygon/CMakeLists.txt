enable_testing()

include_directories (${PROJECT_SOURCE_DIR}/include)
include_directories (${PROJECT_SOURCE_DIR}/googlemock/include)
include_directories (${PROJECT_SOURCE_DIR}/googletest/include)

add_subdirectory(algorithms)

# Set Properties-&gt;General-&gt;Configuration Type to Application(.exe)
# Creates app.exe with the listed sources (main.cxx)
# Adds sources to the Solution Explorer
add_executable (polygon main.cpp)

target_link_libraries(polygon algorithms)

# Creates a folder &quot;executables&quot; and adds target 
# project (app.vcproj) under it
set_property(TARGET polygon PROPERTY FOLDER executables)
 
# Adds logic to INSTALL.vcproj to copy app.exe to destination directory
install (TARGETS polygon
         RUNTIME DESTINATION ${PROJECT_BINARY_DIR}/bin)