cmake_minimum_required(VERSION 3.12)
project(MeshMorph)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Set library output directories to binary directory
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})


# Add subdirectories
add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(ext)


add_executable(MeshMorph ${MESHMORPH_SOURCES})

target_compile_definitions(MeshMorph
    PUBLIC
        -DGRAPHICSUTILS_RES_PATH="${CMAKE_CURRENT_LIST_DIR}/ext/GraphicsUtils/res/")

target_link_libraries(MeshMorph
    PUBLIC
        OpenGLUtils)
