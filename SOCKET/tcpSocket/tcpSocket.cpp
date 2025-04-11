#include "tcpSocket.h"
#include <bits/stdc++.h>

bool InitSocket(){
    //wsa : windows socket async 异步套接字
    //parm1: 请求的socket版本2.2, 2.1, 1.0 parm2:传出参数(parm是参数的意思)
    WSADATA wsadata;
    if(0 != WSAStartup(MAKEWORD(2, 2), &wsadata)){
        std::cout << "WSAStartup failed code" << WSAGetLastError();
        return false;
    }
    return true;
}

bool CloseSocket(){
    if(WSACleanup() != 0){
        std::cout << "WSACleanup failed code" << WSAGetLastError();
        return false;
    }
    return true;;
}

SOCKET CreatServerSocket(){
    //1,创建空的Socket 类比为买一部新手机什么也没有需要一些东西才能使用
    //parm1:af 地址协议族 ipv4 ipv6
    //parm2:type 传输协议类型 流式套接字 数据报
    //parm3：protocl 使用具体的某个传输协议
    SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if(fd == INVALID_SOCKET){
        err("socket");
        return INVALID_SOCKET;
    }

    //2, 给socket绑定ip地址和端口号 买卡才能打电话
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(PORT);
    addr.sin_addr.S_un.S_addr = ADDR_ANY; //ADD_ANY是可以访问任意网卡任意地址//inet_addr("127.0.0.1");转换成二进制的
    if(SOCKET_ERROR ==  bind(fd, (sockaddr*)&addr, sizeof(addr))){
        err("bind");
        return false;
    }
    // struct sockaddr {
    //     u_short	sa_family;
    //     char	sa_data[14];
    // };
    
    // struct sockaddr_in {
    //     short	sin_family;
    //     u_short	sin_port;
    //     struct in_addr	sin_addr;
    //     char	sin_zero[8];
    // };

   //3.监听电话
    listen(fd, 10);
    return fd;
}

//创建客户端Socket

SOCKET CreatClientSocket(const char* IP){
    //1,创建空的Socket 类比为买一部新手机什么也没有需要一些东西才能使用
    //parm1:af 地址协议族 ipv4 ipv6
    //parm2:type 传输协议类型 流式套接字 数据报
    //parm3：protocl 使用具体的某个传输协议
    SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if(fd == INVALID_SOCKET){
        err("socket");
        return INVALID_SOCKET;
    }

    //2, 给socket绑定ip地址和端口号 买卡才能打电话
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(PORT);// 大端存储和小段存储
    addr.sin_addr.S_un.S_addr = inet_addr(IP);//转换成二进制的
    // struct sockaddr {
    //     u_short	sa_family;
    //     char	sa_data[14];
    // };
    if(INVALID_SOCKET == connect(fd, (sockaddr*)&addr, sizeof(addr))){
        err("connect");
        return false;
    }
    // struct sockaddr_in {
    //     short	sin_family;
    //     u_short	sin_port;
    //     struct in_addr	sin_addr;
    //     char	sin_zero[8];
    // };
    return fd;
}