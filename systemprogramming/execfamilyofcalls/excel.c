//.............exec family of class................//
       
  //...........excel..........//

#include<stdio.h>
#include<unistd.h>
void main()
{
	printf("process image is replaced\n");
	execl("/bin/ps","ps","-ef",0);
}

