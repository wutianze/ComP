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
#include<fstream>  
#define DEST_PORT 9003   
#define DSET_IP_ADDRESS  "127.0.0.1"   
using namespace std;
using namespace std::chrono;

int main(int argc, char** argv)  
{  
if( argc != 5){
        printf("usage: ./udpC <msg size> <send how many msg> <sleep time in us between two sends> <max datagram content>\n");
        return 0;
    }
ofstream outfile;
    outfile.open("udpLog.txt");

    int bufSize = atoi(argv[1])+8;
    cout<<bufSize<<endl;
    int count = atoi(argv[2]);
    int sleepTime = atoi(argv[3]);
    int datagramSize = atoi(argv[4]);// local: 65507
    string message = string(bufSize,'a');

  // ------------------- 声明/初始化变量 ---------------------------------
  int sock_fd;
  //char send_buf[bufSize];  
  char recv_buf[bufSize];
  int send_num;  
  int recv_num;
  int len;
  struct sockaddr_in addr_serv; 
  memset(&addr_serv, 0, sizeof(addr_serv));  
  addr_serv.sin_family = AF_INET;  
  addr_serv.sin_addr.s_addr = inet_addr(DSET_IP_ADDRESS);  
  addr_serv.sin_port = htons(DEST_PORT);  
  len = sizeof(addr_serv);  


  // ------------------- 创建udp套接字 ---------------------------------
  sock_fd = socket(AF_INET, SOCK_DGRAM, 0);  
  if(sock_fd < 0)  
  {  
    perror("socket");  
    exit(1);  
  }  
    
  // ------------------- 直接发送数据 ---------------------------------
    for(int i=0;i<count;i++){
  //fgets(send_buf, 4096, stdin); // 获取终端输入
unsigned long long* sendTime = new unsigned long long(duration_cast<nanoseconds>(high_resolution_clock::now().time_since_epoch()).count());
    //char* trans = (char*)sendTime;
    memcpy(&message[0],sendTime,8);
int to_send = bufSize;
    for(int to_send = bufSize;to_send>0;to_send=to_send-datagramSize){
	    if(to_send>datagramSize){
  send_num = sendto(sock_fd, &message[bufSize-to_send], datagramSize, 0, (struct sockaddr *)&addr_serv, len); 
	    }else{
  send_num = sendto(sock_fd, &message[bufSize-to_send], to_send, 0, (struct sockaddr *)&addr_serv, len); 
	    }
  if(send_num < 0)  
  {  
    perror("sendto error:"); 
    exit(1);  
  }
//cout<<"send_num:"<<send_num<<endl;
usleep(1);
    }

  // ------------------- 接收 返回数据 ---------------------------------
  int oneRecv = bufSize;
    while(oneRecv>0){
	  recv_num = recvfrom(sock_fd, recv_buf, oneRecv, 0, (struct sockaddr *)&addr_serv, (socklen_t *)&len);  
    // UDP套接字不会保持连接状态，每次传输数据都要添加目标地址信息，这相当于在邮寄包裹前填写收件人地址。
    //cout<<"recv_num:"<<recv_num<<endl;
    if(recv_num < 0)  
    {  
      perror("recvfrom error:");  
      exit(1);  
    }  
    oneRecv-=recv_num;
    //recv_buf[recv_num] = '\0';  
    }

    if(oneRecv!=0){
    cout<<"one datagram may be lost\n";
    }
unsigned long long* recvTime = new unsigned long long(duration_cast<nanoseconds>(high_resolution_clock::now().time_since_epoch()).count());
	outfile<<*recvTime-*sendTime<<endl;
    
    /*recv_num = recvfrom(sock_fd, recv_buf, sizeof(recv_buf), 0, (struct sockaddr *)&addr_serv, (socklen_t *)&len);  
  if(recv_num < 0)  
  {  
    perror("recvfrom error:");  
    exit(1);  
  }

  recv_buf[recv_num] = '\0';  
  printf("client receive %d bytes: %s\n", recv_num, recv_buf);  
  */
usleep(sleepTime);
    }
  // ------------------- 关闭套接字 ---------------------------------
  close(sock_fd);  
  outfile.close();
  
  return 0;
}

