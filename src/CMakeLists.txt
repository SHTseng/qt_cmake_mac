file(GLOB UI_FILES *.ui)
file(GLOB SRC_FILES *.cpp)

qt5_wrap_ui(UI_HEADERS main_window.ui)
qt5_add_resources(RESOURCE_FILES ../resources/resources.qrc)

add_executable(${PROJECT_NAME} ${SRC_FILES} ${UI_HEADERS} ${RESOURCE_FILES})
target_link_libraries(${PROJECT_NAME} ${QT_LIBRARIES})