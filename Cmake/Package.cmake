list (APPEND CMAKE_PREFIX_PATH ${CMAKE_SOURCE_DIR}/External)

if (CMAKE_SYSTEM_NAME MATCHES "Linux")
	find_package (Threads REQUIRED)
endif ()

add_subdirectory (D:\Programming\Git\BS_Engine\External\Eigen3\CMakeLists.txt)