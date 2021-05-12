#include <stdio.h>   
#include <string.h>   
#include <errno.h>   
#include <stdlib.h>   
#include <unistd.h>   
#include <sys/types.h>   
#include <sys/socket.h>   
#include <netinet/in.h>   
#include <arpa/inet.h>   
#include<unistd.h>
#include<ctime>
#include<chrono>
#include<ratio>
#include<iostream>
  
#define DEST_PORT 9003   
#define DSET_IP_ADDRESS  "127.0.0.1"   
using namespace std;
using namespace std::chrono;

int main(int argc, char** argv)  
{  
if( argc != 4){
        printf("usage: ./client <msg size> <send how many msg> <sleep time in us between two sends>\n");
        return 0;
    }
    int bufSize = atoi(argv[1])+8;
    cout<<bufSize<<endl;
    int count = atoi(argv[2]);
    int sleepTime = atoi(argv[3]);
    string message = string(bufSize,'a');

  // ------------------- 声明/初始化变量 ---------------------------------
  cout<<"start init\n";
  int sock_fd;
  //char send_buf[bufSize];  
  //char recv_buf[bufSize];
  cout<<"0\n";
  int send_num;  
  int recv_num;
  int len;
  struct sockaddr_in addr_serv; 
 cout<<"1\n"; 
  memset(&addr_serv, 0, sizeof(addr_serv));  
  addr_serv.sin_family = AF_INET;  
  addr_serv.sin_addr.s_addr = inet_addr(DSET_IP_ADDRESS);  
  addr_serv.sin_port = htons(DEST_PORT);  
  len = sizeof(addr_serv);  


  // ------------------- 创建udp套接字 ---------------------------------
  cout<<"create socket\n";
  sock_fd = socket(AF_INET, SOCK_DGRAM, 0);  
  if(sock_fd < 0)  
  {  
    perror("socket");  
    exit(1);  
  }  
    
  // ------------------- 直接发送数据 ---------------------------------
  printf("send msg to server: \n");

    for(int i=0;i<count;i++){
  //fgets(send_buf, 4096, stdin); // 获取终端输入
unsigned long long* sendTime = new unsigned long long(duration_cast<nanoseconds>(high_resolution_clock::now().time_since_epoch()).count());
    //char* trans = (char*)sendTime;
    memcpy(&message[0],sendTime,8);

  send_num = sendto(sock_fd, message.c_str(), bufSize, 0, (struct sockaddr *)&addr_serv, len);  
  if(send_num < 0)  
  {  
    perror("sendto error:"); 
    exit(1);  
  }

    usleep(sleepTime);
    }

  // ------------------- 接收 返回数据 ---------------------------------
  /*recv_num = recvfrom(sock_fd, recv_buf, sizeof(recv_buf), 0, (struct sockaddr *)&addr_serv, (socklen_t *)&len);  
  if(recv_num < 0)  
  {  
    perror("recvfrom error:");  
    exit(1);  
  }

  recv_buf[recv_num] = '\0';  
  printf("client receive %d bytes: %s\n", recv_num, recv_buf);  
  */
  // ------------------- 关闭套接字 ---------------------------------
  close(sock_fd);  
  
  return 0;
}

