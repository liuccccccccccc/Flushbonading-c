#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int a;
	scanf("%d",&a);
	/*for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		putchar('\n');
	}*/
	for(int i=0;i<a;i++)
	{	for(int j=1;j<=a-i;j++)
		{
			printf("*");
		}
		putchar('\n');
	}
	return 0;
}
