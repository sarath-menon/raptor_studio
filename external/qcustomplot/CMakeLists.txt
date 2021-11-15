
add_library(qcustomplot_lib STATIC
src/qcustomplot.cpp
include/qcustomplot.h
)

target_include_directories(qcustomplot_lib PUBLIC include)

target_link_libraries(qcustomplot_lib PRIVATE
Qt${QT_VERSION_MAJOR}::Widgets 
Qt${QT_VERSION_MAJOR}::PrintSupport
)