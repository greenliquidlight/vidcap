# This cmake file is ment to be used from a higher level cmake file

# pull in the opencv library
include(FetchContent)
FetchContent_Declare(
        opencv
        GIT_REPOSITORY https://github.com/opencv/opencv.git
        GIT_TAG 4.8.1
        GIT_SHALLOW TRUE
        GIT_PROGRESS TRUE
)
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