void remove_space(char *src)           // remove_space fun definition//
{
	int i,j;
	for(i=0;src[i]!='\0';i++)
	{
			if((src[i]==' ')&&(src[i+1]==' '))
			{
				for(j=i;src[j]!='\0';j++)
				src[j]=src[j+1];
				i--;
			}
	}
	printf("%s",src);
}
