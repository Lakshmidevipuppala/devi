void rotate_elements(int *arr,int n)       //rotate_elements fun definition//
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		temp=arr[0];
		for(j=0;j<5-1;j++)
		{
			arr[j]=arr[j+1];
		}
		arr[5-1]=temp;
	}
	for(i=0;i<5;i++)
		printf("%d ",arr[i]);
}


