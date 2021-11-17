
add_library(quad_window_lib STATIC
src/quad_window.cpp
src/quad_window.ui
include/quad_window.h
)

target_include_directories(quad_window_lib PUBLIC include)

target_link_libraries(quad_window_lib PRIVATE
Qt${QT_VERSION_MAJOR}::Widgets 
Qt${QT_VERSION_MAJOR}::PrintSupport
)