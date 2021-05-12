#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>
#include<ctime>
#include<chrono>
#include<ratio>
#include<iostream>
//#define MAXLINE 4096
using namespace std;
using namespace std::chrono;
int main(int argc, char** argv){
// ----------------- 检查命令行参数 -----------------
    if( argc != 3){
        printf("usage: ./tcpS <msg size> <receive how many msg>\n");
        return 0;
    }
    int bufSize = atoi(argv[1])+8;
    int count = atoi(argv[2]);
    //string message = string(bufSize,'a');
    // ------------------ 声明/初始化变量 -----------------------------
    int listenfd;                 // 监听的描述符
    int connfd;                   // 连接的描述符
    int end_position;             // 接收数据的结束位置           
    char buff[bufSize];              // 接收数据
    struct sockaddr_in  servaddr; // 地址结构体

    memset(&servaddr, 0, sizeof(servaddr));       // 重置内存数据为0，这一步是以防万一的操作
    servaddr.sin_family = AF_INET;                // IPV4协议
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY); // 监听 0.0.0.0
    servaddr.sin_port = htons(10233);             // 端口号为 10233

    // sockaddr 和 sockaddr_in 类 数据结构是一样的，就是名字不同
    // 为了防止警告/编译错误,不能混用，需要使用时 要进行类型转换
    // (struct sockaddr *)&servaddr


    // ------------------ 创建套接字 -----------------------------
    /*  socket(AF_INET,SOCK_STREAM,0)
     *  AF_INET IPV4
     *  SOCK_STREAM TCP
     *  0 协议编号，一般不需要特殊设置，设置为0即可
     *  if语句还可以这样写 if( (listenfd = socket(AF_INET, SOCK_STREAM, 0)) == -1 ){ ... }
     */
    listenfd = socket(AF_INET,SOCK_STREAM,0); 
    if(listenfd == -1 ){
        printf("create socket error: %s(errno: %d)\n",strerror(errno),errno);
        return 0;
    }

    // ------------------ 绑定ip地址和端口号  ------------------
    if( bind(listenfd, (struct sockaddr *)&servaddr, sizeof(servaddr)) == -1){
        printf("bind socket error: %s(errno: %d)\n",strerror(errno),errno);
        return 0;
    }

    // ------------------ 进行监听 ------------------
    // 10 表示可接收的连接数
    if( listen(listenfd, 10) == -1){
        printf("listen socket error: %s(errno: %d)\n",strerror(errno),errno);
        return 0;
    }

    // ------------------ 等待用户连接 ------------------
    printf("======waiting for client's request======\n");
        if( (connfd = accept(listenfd, (struct sockaddr*)NULL, NULL)) == -1){
            printf("accept socket error: %s(errno: %d)",strerror(errno),errno);
            return -1;
        }
        
        printf("hear from client\n");
        // -------------- 用户连接后 接收数据 ---------------
        // 返回接收的字符数  n+1，到时候我们将buff[n+1]='\n',\n表示结束符
	for(int i=0;i<count;i++){
		int oneRecv = bufSize;
while(oneRecv>0){
        end_position = recv(connfd, &(buff[bufSize-oneRecv]), oneRecv, 0);
	oneRecv-=end_position;
}
	//if(end_position!=bufSize)cout<<"recv not complete\n";
        //buff[end_position] = '\0'; 
    unsigned long long* recvTime = new unsigned long long(duration_cast<nanoseconds>(high_resolution_clock::now().time_since_epoch()).count());
    unsigned long long costTime = *recvTime - *((unsigned long long*)buff);
cout<<"cost time:"<<costTime<<endl;	
	}
    //unsigned long long* trans=(unsigned long long*)buff;
	//buff[8] = '\0';
	//unsigned long long numb = *trans;
	//cout<<"numb:"<<numb<<endl<<"trans:"<<*trans<<endl;

        // -------------- 向用户返回数据 ---------------
        // 原样返回
        //send(connfd, buff, strlen(buff), 0);

         // ------------- 关闭用户连接套接字 ---------------
	 printf("close tcp server");
        close(connfd);

    // ------------------ 关闭监听套接字 ------------------
    close(listenfd);
    return 0;
}
