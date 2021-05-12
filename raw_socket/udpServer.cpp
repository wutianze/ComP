#include <stdio.h>   
#include <sys/types.h>   
#include <sys/socket.h>   
#include <netinet/in.h>   
#include <unistd.h>   
#include <errno.h>   
#include <string.h>   
#include <stdlib.h>   
#include <iostream>
#include<ctime>
#include<chrono>
#include<ratio>

#define SERV_PORT   9003   
using namespace std;
using namespace std::chrono;
int main(int argc, char** argv)  
{  
if( argc != 3){
        printf("usage: ./udpS <msg size> <receive how many msg>\n");
        return 0;
    }
    int bufSize = atoi(argv[1])+8;
    int count = atoi(argv[2]);

  // ------------------- 声明/初始化变量 ---------------------------------
  int sock_fd; 
  int len; // sizeof(addr_serv)
  struct sockaddr_in addr_serv;
  struct sockaddr_in addr_client;
  int send_num; 
  int recv_num;  
  char recv_buf[bufSize];
  // char send_buf[512];  // 我们接收什么返回什么，所以这个不需要
  
  memset(&addr_serv, 0, sizeof(addr_serv));
  addr_serv.sin_family = AF_INET;                //使用IPV4地址
  addr_serv.sin_addr.s_addr = htonl(INADDR_ANY); //0.0.0.0
  addr_serv.sin_port = htons(SERV_PORT);         //端口号 9003
  len = sizeof(addr_serv);

  // ------------------- 创建udp套接字 ---------------------------------
  if( (sock_fd = socket(AF_INET, SOCK_DGRAM, 0)) < 0)  
  {  
    perror("socket");  
    exit(1);  
  }  
  
  // ------------------- 绑定端口号 ---------------------------------
  if(bind(sock_fd, (struct sockaddr *)&addr_serv, sizeof(addr_serv)) < 0)  
  {  
    perror("bind error:");  
    exit(1);  
  }
  
  while(1)  
  {  
    // ----------------- 接收数据 ---------------------------------
    printf("server wait:\n");  
    recv_num = recvfrom(sock_fd, recv_buf, sizeof(recv_buf), 0, (struct sockaddr *)&addr_client, (socklen_t *)&len);  
    // UDP套接字不会保持连接状态，每次传输数据都要添加目标地址信息，这相当于在邮寄包裹前填写收件人地址。
    cout<<"recv_num:"<<recv_num<<endl;
    if(recv_num < 0)  
    {  
      perror("recvfrom error:");  
      exit(1);  
    }  

    recv_buf[recv_num] = '\0';  
    //printf("server receive %d bytes: %s\n", recv_num, recv_buf);  
unsigned long long* recvTime = new unsigned long long(duration_cast<nanoseconds>(high_resolution_clock::now().time_since_epoch()).count());
    unsigned long long costTime = *recvTime - *((unsigned long long*)recv_buf);
cout<<"cost time:"<<costTime<<endl;	

    // ----------------- 发送 返回消息 ---------------------------------
    // 发的什么 我返回什么 sizeof(recv_buf) recv_num
    //send_num = sendto(sock_fd, recv_buf, recv_num, 0, (struct sockaddr *)&addr_client, len);  
      
    /*if(send_num < 0)  
    {  
      perror("sendto error:");  
      exit(1);  
    }*/
  }
  
  // ------------------- 关闭套接字 ---------------------------------
  close(sock_fd);  
    
  return 0;  
}

