
# ###############################################################################
# # Library of UI components
# ###############################################################################

add_library(components_lib INTERFACE)

target_link_libraries(components_lib INTERFACE
quad_window_lib
realtime_plot_lib
)

add_subdirectory(quad_window)
add_subdirectory(realtime_plot)
