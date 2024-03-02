#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int num;
	scanf("%d",&num);
	if(num<1||num>26)
	{
		printf("data error\n");
		exit(0);
	}
	for(int i=1;i<=num;i++)
	{
		for(int j=0;j<i;j++)
		{
			printf("%c",65+j);
		}
		putchar('\n');
	}
	return 0;
}
