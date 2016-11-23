cmake_minimum_required(VERSION 3.5)
project(unit_test)

include_directories(lib/gtest-1.7.0/include)
add_subdirectory(lib/gtest-1.7.0)

set(SRCS
        lexer_tests/lexer.cpp)

add_executable(runLexerTest ${SRCS})

target_link_libraries(runLexerTest ft)
target_link_libraries(runLexerTest gtest gtest_main)