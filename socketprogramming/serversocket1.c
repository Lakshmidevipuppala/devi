//............TCP/IP...............//

//..........SERVER................//

#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>
#include<netinet/in.h>
#include<sys/socket.h>
#include<unistd.h>
void main()
{
	int sockfd,newsockfd,client_size,ret;
	char buf[256];
	struct sockaddr_in serv,client;

	sockfd=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);

	memset(&serv,0,sizeof(struct sockaddr_in));

	bzero(&serv,sizeof(struct sockaddr_in));

	serv.sin_family=AF_INET;
	serv.sin_port=htons(5000);
	serv.sin_addr.s_addr=INADDR_ANY;

	ret=bind(sockfd,(struct sockaddr*)&serv,sizeof(serv));
	printf("ret=%d\n",ret);

	listen(sockfd,5);

	client_size=sizeof(client);

	newsockfd=accept(sockfd,(struct sockaddr*)&client,&client_size);
	while(1)
	{

	ret=read(newsockfd,buf,256);
	scanf("%[^\n]s",buf);
	__fpurge(stdin);

	write(1,buf,ret);
	printf("\n");

	ret=write(newsockfd,"hello",strlen("hello"));
	}

	close(newsockfd);
}

