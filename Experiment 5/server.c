#include<time.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<netinet/in.h>
#include<netdb.h>
int main(int argc,char *argv[])
{
int sd,ad;
char buff[1024];
struct sockaddr_in servaddr,cliaddr;

time_t t1;
bzero(&servaddr,sizeof(servaddr));

servaddr.sin_family=AF_INET;
servaddr.sin_addr.s_addr=htonl(INADDR_ANY);

sd=socket(AF_INET,SOCK_STREAM,0);

bind(sd,(struct sockaddr*)&servaddr,sizeof(servaddr));


listen(sd,5);
printf("SERVER IS CONNECTED NOW ADD CLIENTS TO THE SERVER\n");


while(1)
{
ad=accept(sd,(struct sockaddr *)NULL,NULL);
bzero(&buff,sizeof(buff));

t1=time(NULL);

snprintf(buff,sizeof(buff),"%24s\r\n",ctime(&t1));
send(ad,buff,sizeof(buff),0);
}
}