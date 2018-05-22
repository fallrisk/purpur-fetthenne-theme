cmake_minimum_required(VERSION 3.9 FATAL_ERROR)
project(imgui-theme VERSION 0.1.0 LANGUAGES CXX C)

find_package(OpenGL REQUIRED)

find_package(glfw3 REQUIRED)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ldl  -std=c++11")

include_directories(/home/jwatson/src/imgui/examples/libs/gl3w)
set(GL3W_SOURCES /home/jwatson/src/imgui/examples/libs/gl3w/GL/gl3w.c colors.h)

file(GLOB IMGUI_SOURCES /home/jwatson/src/imgui/*.cpp)
include_directories(/home/jwatson/src/imgui)

add_executable(${PROJECT_NAME} main.cpp imgui_impl_glfw_gl3.cpp colors.cpp ${GL3W_SOURCES} ${IMGUI_SOURCES})

# pkg-config --static --libs glfw3
# -lglfw -lrt -lm -ldl -lX11 -lpthread -lxcb -lXau -lXdmcp
target_link_libraries(${PROJECT_NAME} glfw)
target_link_libraries(${PROJECT_NAME} ${CMAKE_DL_LIBS})
target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARIES})
