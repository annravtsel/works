add_executable(sfml1.1 trafficlight.cpp)

set(SFML_STATIC_LIBRARIES TRUE)

find_package(Freetype)
find_package(JPEG)
find_package(SFML 2 COMPONENTS window graphics system)

target_compile_features(sfml1.1 PUBLIC cxx_std_17)
target_compile_definitions(sfml1.1 PRIVATE SFML_STATIC)

target_link_libraries(sfml1.1 ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
