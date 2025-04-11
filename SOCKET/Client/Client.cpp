#include "../tcpSocket/tcpSocket.h"

int main(){
    InitSocket();

    SOCKET fd = CreatClientSocket("127.0.0.1");

    char buf[BUFSIZ] = "Hello I'm Client QAQ";
    //先说一句话， 打个招呼
    if(SOCKET_ERROR == send(fd, buf, strlen(buf), 0)){
        err("send");
    }

    Sleep(100);

    closesocket(fd);

    CloseSocket();
    printf("---ClientEnd---\n");

    getchar();
    return 0;
}