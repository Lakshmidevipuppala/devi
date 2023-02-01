//..............exec family of calls................//

//..........execvp............//

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
	char *const argv[]={"ps","-ef",0};
	execvp(argv[0],argv);
}
