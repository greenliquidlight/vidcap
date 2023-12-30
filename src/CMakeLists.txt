# This cmake file is ment to be used from a higher level cmake file

# pull in the opencv library
include(FetchContent)
FetchContent_Declare(
        opencv
        GIT_REPOSITORY https://github.com/opencv/opencv.git
        GIT_TAG 4.9.0
        GIT_SHALLOW TRUE
        GIT_PROGRESS TRUE
)

# Do not run openCV tests during build
set(BUILD_TESTS OFF CACHE BOOL "" FORCE)  # Disable OpenCV tests
set(BUILD_PERF_TESTS OFF CACHE BOOL "" FORCE)  # Disable performance tests
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)  # Optionally, disable building examples

FetchContent_MakeAvailable(opencv)

add_executable(vidcap main.cpp)

# set the include directories for openCV
target_include_directories(vidcap PUBLIC
        ${OPENCV_CONFIG_FILE_INCLUDE_DIR}
        ${OPENCV_MODULE_opencv_core_LOCATION}/include
        ${OPENCV_MODULE_opencv_highgui_LOCATION}/include
        ${OPENCV_MODULE_opencv_videoio_LOCATION}/include
        ${OPENCV_MODULE_opencv_imgcodecs_LOCATION}/include
        )


target_link_libraries(vidcap opencv_core opencv_highgui opencv_videoio opencv_imgcodecs)
