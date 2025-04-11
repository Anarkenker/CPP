#ifndef _TCP_SOCKET_H_
#define _TCP_SOCKET_H_

#include <WinSock2.h>//windows平台的网络库头文件
// #pragma comment(lib, "ws2_32.lib")//库文件
#include <bits/stdc++.h>

#define PORT 8888
#define err(errMsg) printf("[line: %d ] %s failed code %d", __LINE__, errMsg, WSAGetLastError())//__LINE__可以输出行数

//打开网络库
bool InitSocket();
//关闭网络库
bool CloseSocket();
//创建服务器socket
SOCKET CreatServerSocket();

SOCKET CreatClientSocket(const char* IP);

#endif