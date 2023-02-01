//.....................project question -2.....................//

//............................client......................//

#include "structure.h"
#include "header.h"

void main()
{
	int opt;
	int sockfd,ret;
	struct sockaddr_in serv;
	char buf[500];

	sockfd=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	bzero(&serv,sizeof(serv));

	serv.sin_addr.s_addr=inet_addr("127.0.0.1");
	serv.sin_port=htons(5000);
	serv.sin_family=AF_INET;

	connect(sockfd,(struct sockaddr*)&serv,sizeof(serv));
	ret=send(sockfd,"hi",strlen("hi"),0);
	ret=recv(sockfd,buf,256,0);

	write(1,buf,ret);
	close(sockfd);
}


