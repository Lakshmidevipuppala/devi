//...........using SIGINT SIGCONT signals..................//

#include<stdio.h>
#include<unistd.h>
void main()
{
	int x=1;
	while(x>0)
	{
		printf("hii\n");
		x++;
	}
}

