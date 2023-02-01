//...............project question -2............................//

//...................server...................................//

#include "structure.h"
#include "header.h"

void main()
{
	int opt;
	int sockfd,newsockfd,client_size,ret;
	char buf[500];
	struct sockaddr_in serv,client;

	sockfd=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	bzero(&serv,sizeof(struct sockaddr_in));

	serv.sin_family=AF_INET;
	serv.sin_port=htons(5000);
	serv.sin_addr.s_addr=INADDR_ANY;

	bind(sockfd,(struct sockaddr*)&serv,sizeof(serv));
	listen(sockfd,5);
	client_size=sizeof(client);
	newsockfd=accept(sockfd,(struct sockaddr*)&client,&client_size);

	ret=read(newsockfd,buf,256);
	write(1,buf,ret);
	ret=write(newsockfd,"hello",strlen("hello"));
	close(newsockfd);
}

