#include <stdio.h>
#include <string.h>
int main (int argc , char const **argv)
{
	if(argc == 0)
	{
		printf("0\n");
		return 0;
	}

	char buf[50];
	bzero(buf,50);
	int i;
	for(i=1; i<argc;i++)
	{	
		strcat(buf,argv[i]);
	}
	
while(1)
{
	printf("%s\n",buf);
}
	return 0;
}
