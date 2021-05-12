#include "base.h"
#include<ctime>
#include<chrono>
#include<ratio>
char* ul2chars(unsigned long long num){
	char* arr=new char[8];
	int wei=56;
	for(int i=7;i>=0;i--)
	{

		//unsigned long long temp=num<<wei;//左移到56-64位，将比它高的位丢失
		arr[i]=(temp<<wei)>>56;//右移到1-8位，将比它低的位丢失
		wei-=8;
	}
	return arr;
}
unsigned long long chars2ul(char* bytes){
unsigned long long ul=0;
return ul;

}
