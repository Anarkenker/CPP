cmake_minimum_required(VERSION 3.10)

project(SOCKET)

set(SOURCE_FILES
    tcpSocket/tcpSocket.cpp
    tcpSocket/tcpSocket.h
)

add_executable(Server Server/server.cpp ${SOURCE_FILES})
add_executable(Client Client/Client.cpp ${SOURCE_FILES})

target_link_libraries(Server ws2_32)
target_link_libraries(Client ws2_32)