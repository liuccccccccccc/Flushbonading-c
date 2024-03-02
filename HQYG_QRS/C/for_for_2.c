#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a-i;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=i;k++)
		{
			printf("*");
		}
		putchar('\n');
	}
	putchar('\n');
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(int k=1;k<=a-i+1;k++)
		{
			printf("*");
		}
		putchar('\n');
	}

	return 0;
}
