# setup test
set(BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(TEST_NAME ${TARGET_NAME}.UnitTests)
set(TEST_SOURCES
	${BASE_DIR}/ArgumentIncorrectTypeExceptionTests.cpp
	${BASE_DIR}/ArgumentNullExceptionTests.cpp)

add_executable(${TEST_NAME} EXCLUDE_FROM_ALL ${TEST_SOURCES})
add_dependencies(${TARGET_NAME}Tests ${TEST_NAME})
target_include_directories(${TEST_NAME} PRIVATE ${DIR_INCLUDE})
target_link_libraries(${TEST_NAME} ${TARGET_NAME} CONAN_PKG::gtest)

gtest_add_tests(TARGET ${TEST_NAME})
