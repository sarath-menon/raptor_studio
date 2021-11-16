set(SRC_FILES
        src/main.cpp
        src/mainwindow.cpp
        src/mainwindow.ui
        src/fastdds_thread.cpp
        src/realtime_plot_thread.cpp
)

set(HEADER_FILES
        include/fastdds_thread.h
        include/realtime_plot_thread.h
        include/mainwindow.h
        include/sub_variables.h     
)


add_executable(raptor_studio
${HEADER_FILES}
${SRC_FILES}
)

target_include_directories(raptor_studio PUBLIC include)

# QT depenencies
target_link_libraries(raptor_studio PRIVATE 
Qt${QT_VERSION_MAJOR}::Widgets 
Qt${QT_VERSION_MAJOR}::PrintSupport
qcustomplot_lib
)

# Other dependencies
target_link_libraries(raptor_studio PRIVATE 
components_lib
copilot_lib
comm_lib
)


set_target_properties(raptor_studio PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
)

