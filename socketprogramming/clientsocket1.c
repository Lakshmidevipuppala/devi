//............TCP/IP...............//

//..........CLIENT................//

#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<unistd.h>
void main()
{

	int sockfd,ret;
	struct sockaddr_in serv;
	char buf[256]="hi user";

	sockfd=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);

	bzero(&serv,sizeof(serv));

	serv.sin_addr.s_addr=inet_addr("192.168.143.58");

	serv.sin_port=htons(5000);

	serv.sin_family=AF_INET;

	connect(sockfd,(struct sockaddr*)&serv,sizeof(serv));

	while(1)
	{
		scanf("%[^\n]s",buf);
		__fpurge(stdin);

		ret=send(sockfd,buf,strlen(buf),0);

		ret=recv(sockfd,buf,256,0);

		write(1,buf,ret);

		printf("\n");


	}
		close(sockfd);
}

