#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{

	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d*%d=%-2d ",j,i,i*j);
		}
		putchar('\n');
	}
	return 0;
}
