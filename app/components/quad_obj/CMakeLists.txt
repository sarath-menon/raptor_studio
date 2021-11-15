
add_library(quad_obj_lib STATIC
src/quad_obj.cpp
src/quad_obj.ui
include/quad_obj.h
)

target_include_directories(quad_obj_lib PUBLIC include)

target_link_libraries(quad_obj_lib PRIVATE
Qt${QT_VERSION_MAJOR}::Widgets 
Qt${QT_VERSION_MAJOR}::PrintSupport
)