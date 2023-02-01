//.........exec family of calls.........//

//........execv....////

#include<stdio.h>
#include<unistd.h>
void main()
{
	char *const argv[]={"/bin/ps","ps","-ef",0};
	execv(argv[0],&argv[1]);
}
