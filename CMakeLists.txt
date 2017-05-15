cmake_minimum_required(VERSION 3.7)
project(Vulkan)

include_directories(./lib/glm ./lib/GLFW/include lib/1.0.46.0/Include ClassUtils VulkanCore
        TestApplication VulkanCore/GLFWCore Patterns Terrain)

link_directories(./lib/GLFW/lib-mingw lib/1.0.46.0/Lib32)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -W -Wall -Wextra -O3 -Ofast")

set(SOURCE_FILES main.cpp VulkanCore/BasicConfiguration.hpp VulkanCore/UrcanInstance.cpp VulkanCore/UrcanInstance.hh
        ClassUtils/ScopeLock.cpp ClassUtils/ScopeLock.hh TestApplication/UrcanApp.cpp TestApplication/UrcanApp.hh
        VulkanCore/VDeleter.hpp VulkanCore/VCallback.cpp VulkanCore/VCallback.hh VulkanCore/GLFWCore/GLFWCore.cpp
        VulkanCore/GLFWCore/GLFWCore.hh ClassUtils/Utils.cpp ClassUtils/Utils.h Patterns/Singleton.hpp
        VulkanCore/Buffers/Vertex.cpp VulkanCore/Buffers/Vertex.hh VulkanCore/Buffers/UniformBufferObject.cpp
        VulkanCore/Buffers/UniformBufferObject.hh VulkanCore/HeightToVertexConvertor.cpp VulkanCore/HeightToVertexConvertor.hh
        Terrain/FallingSand.hh Terrain/FallingSand.cpp ClassUtils/Color.cpp ClassUtils/Color.hpp VulkanCore/Camera.cpp VulkanCore/Camera.hh)
add_executable(Vulkan ${SOURCE_FILES})

target_link_libraries(Vulkan glfw3 gdi32 opengl32 vulkan-1 pthread)