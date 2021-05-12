#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<ctime>
#include<chrono>
#include<ratio>
#include<iostream>
#include<fstream>
//#include "base.h"
//#define MAXLINE 4096
using namespace std;
using namespace std::chrono;
int main(int argc, char** argv){
    // main 函数
    // int argc    参数个数，执行文件本身为第一个，参数的第一个为2
    // char** argv 参数的值, argv[0] argv[1]

    // ----------------- 检查命令行参数 -----------------
    if( argc != 5){
        printf("usage: ./tcpC <ipaddress> <msg size> <send how many msg> <sleep time in us between two sends>\n");
        return 0;
    }
    ofstream outfile;
    outfile.open("tcpLog.txt");
    int bufSize = atoi(argv[2])+8;
    int count = atoi(argv[3]);
    int sleepTime = atoi(argv[4]);
    string message = string(bufSize,'a');

    // ------------------ 声明/初始化变量 -----------------------------
    int  sockfd ;
    int  end_index;
    char recvline[bufSize];
    struct sockaddr_in  servaddr;

    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(10233);
    if( inet_pton(AF_INET, argv[1], &servaddr.sin_addr) <= 0){
        printf("inet_pton error for %s\n",argv[1]);
        return 0;
    }
    
    // ------------------ 创建套接字 -----------------------------
    if( (sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0){
        printf("create socket error: %s(errno: %d)\n", strerror(errno),errno);
        return 0;
    }

    // ------------------ 连接服务器 -----------------------------
    if( connect(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) < 0){
        printf("connect error: %s(errno: %d)\n",strerror(errno),errno);
        return 0;
    }

    for(int i=0;i<count;i++){
    // ------------------ 发送消息 -----------------------------
    unsigned long long* sendTime = new unsigned long long(duration_cast<nanoseconds>(high_resolution_clock::now().time_since_epoch()).count());
    //char* trans = (char*)sendTime;
    memcpy(&message[0],sendTime,8);
    /*for(int i=0;i<8;i++){
    message[i] = trans[i];
    }*/
    //printf("send msg to server:%lld \n",*sendTime);
    //fgets(sendline, 4096, stdin); // 获取终端输入
    if( send(sockfd, message.c_str(),bufSize, 0) < 0){
        printf("send msg error: %s(errno: %d)\n", strerror(errno), errno);
        return 0;
    }

    // ------------------ 接收消息 -----------------------------
    int oneRecv = bufSize;
    while(oneRecv>0){
    end_index = recv(sockfd, &(recvline[bufSize-oneRecv]), oneRecv, 0);
    oneRecv-=end_index;
    }
    unsigned long long* recvTime = new unsigned long long(duration_cast<nanoseconds>(high_resolution_clock::now().time_since_epoch()).count());
    //recvline[end_index] = '\0';
    //printf("recv msg from server \n");
	outfile<<*recvTime-*sendTime<<endl;
    usleep(sleepTime);
    }

    // ------------------ 关闭套接字，断开连接 --------------------
    close(sockfd);
    outfile.close();
    return 0;
}


