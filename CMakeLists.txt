cmake_minimum_required(VERSION 3.7)
project(Vulkan)

include_directories(./lib/glm ./lib/GLFW/include lib/1.0.46.0/Include ClassUtils VulkanCore TestApplication)

link_directories(./lib/GLFW/lib-mingw lib/1.0.46.0/Lib32)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -W -Wall -Wextra")

set(SOURCE_FILES main.cpp VulkanCore/BasicConfiguration.hh VulkanCore/UrcanInstance.cpp VulkanCore/UrcanInstance.hh
        ClassUtils/ScopeLock.cpp ClassUtils/ScopeLock.hh TestApplication/UrcanApp.cpp TestApplication/UrcanApp.hh VulkanCore/VDeleter.hpp)
add_executable(Vulkan ${SOURCE_FILES})

target_link_libraries(Vulkan glfw3 gdi32 opengl32 vulkan-1 pthread)