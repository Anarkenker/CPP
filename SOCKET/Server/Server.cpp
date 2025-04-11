#include "../tcpSocket/tcpSocket.h"

int main(){
    InitSocket();

    SOCKET Serfd = CreatServerSocket();
    printf("Wait client connect...\n");
    //如果有客户端请求链接
    SOCKET Clifd = accept(Serfd, NULL, NULL);
    if(INVALID_SOCKET == Clifd){
        err("accept");
    }
    //可以和客户端进行通信了
    char buf[BUFSIZ] = {0};
    if(0 < recv(Clifd, buf, BUFSIZ, 0)){
        printf("recv:%s\n", buf);
    }
    closesocket(Clifd);
    closesocket(Serfd);

    CloseSocket();

    printf("---ServerEnd---");
    getchar();
    return 0;
}