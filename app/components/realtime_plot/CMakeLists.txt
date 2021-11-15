
add_library(realtime_plot_lib STATIC
src/realtime_plot.cpp
src/realtime_plot.ui
include/realtime_plot.h
)

target_include_directories(realtime_plot_lib PUBLIC include)

target_link_libraries(realtime_plot_lib PRIVATE
Qt${QT_VERSION_MAJOR}::Widgets 
Qt${QT_VERSION_MAJOR}::PrintSupport
qcustomplot_lib
)