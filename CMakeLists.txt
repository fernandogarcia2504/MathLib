cmake_minimum_required(VERSION 3.10)  
project(unit_test)

set(CMAKE_CXX_STANDARD 17)

# Fuente principal (main)
set(SOURCES
    main.cpp
    MyMathLib.h
    BasicOperations.cpp
    AdvancedOperations.cpp
)

# Ejecutable principal
add_executable(unit_test ${SOURCES})

# Opciones
option(ENABLE_TESTING "Enable a Unit Testing build." ON)

# Descarga GoogleTest usando FetchContent
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

# Si se habilitan las pruebas, agrega GoogleTest y las pruebas unitarias
if(ENABLE_TESTING)
    enable_testing()

    # Archivos de pruebas
    set(TEST_SOURCES
        tests/BasicOperationsTest.cpp
        tests/AdvancedOperationsTest.cpp
    )

    # Crear ejecutable de pruebas
    add_executable(test_suite ${TEST_SOURCES} ${SOURCES})  

    # Enlazar GoogleTest
    target_link_libraries(test_suite PRIVATE gtest gtest_main)

    # Registrar pruebas con CTest
    add_test(NAME AllTests COMMAND test_suite)
endif()
