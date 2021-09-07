#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<netdb.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
int sd,cd;
struct sockaddr_in servaddr,cliaddr;
socklen_t clilen;
char buff[100],file[10000];
struct hostent *h;


h=gethostbyname(argv[1]);

servaddr.sin_family=h->h_addrtype;
memcpy((char *)&servaddr.sin_addr.s_addr,h->h_addr_list[0],h->h_length);

bzero(&servaddr,sizeof(servaddr));
servaddr.sin_port=htons(1818);
servaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
servaddr.sin_family=AF_INET;

sd=socket(AF_INET,SOCK_STREAM,0);
cd=connect(sd,(struct sockaddr*)&servaddr,sizeof(servaddr));

while(1)
{
printf("%s\n","Enter the File Name :");
scanf("%s",buff);
send(sd,buff,strlen(buff)+1,0);
printf("%s\n","File Output :");
recv(sd,file,sizeof(file),0);
printf("%s",file);
}
return 0;
}
