
# ###############################################################################
# # Library of UI components
# ###############################################################################

add_library(components_lib INTERFACE)

target_link_libraries(components_lib INTERFACE
quad_obj_lib
)

add_subdirectory(quad_obj)