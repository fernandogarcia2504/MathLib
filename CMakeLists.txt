cmake_minimum_required(VERSION 3.30)
project(unit_test)

set(CMAKE_CXX_STANDARD 17)

# Agregar el directorio src a las rutas de búsqueda de encabezados
include_directories(${CMAKE_SOURCE_DIR})

# Archivos fuente para la compilación principal
set(SOURCES
    BasicOperations.cpp
    AdvancedOperations.cpp
    MyMathLib.h
)

add_executable(unit_test ${SOURCES})

# Opciones
option(ENABLE_TESTING "Enable a Unit Testing build." ON)

# Descargar GoogleTest usando FetchContent
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

# Si se habilitan las pruebas, agregar GoogleTest y las pruebas unitarias
if(ENABLE_TESTING)
    enable_testing()

    # Archivos de prueba
    set(TEST_SOURCES
        tests/test.cpp
        tests/BasicOperations_test.cpp  
        tests/AdvancedOperations_test.cpp
    )

    # Crear el ejecutable para las pruebas
    add_executable(test_suite ${TEST_SOURCES})

    # Enlazar GoogleTest
    target_link_libraries(test_suite PRIVATE gtest gtest_main)

    # Enlazar la biblioteca de operaciones básicas y avanzadas
    target_link_libraries(test_suite PRIVATE unit_test)

    # Registrar las pruebas con CTest
    add_test(NAME AllTests COMMAND test_suite)
endif()
