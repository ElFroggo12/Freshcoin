cmake_minimum_required(VERSION 3.5)

# Config
project(BchainApp 
VERSION 1.0.0 
DESCRIPTION "Block Chain Test App"
LANGUAGES CXX)


#target
add_executable(BchainAppBinary  main.cpp    src/Block.cpp   src/Blockchain.cpp  src/sha256.cpp)
target_include_directories(BchainAppBinary PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_compile_features(BchainAppBinary PRIVATE cxx_std_20)
