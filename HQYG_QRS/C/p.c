#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int a=0,b=1,c=2;
	int *p[3]={&a,&b,&c};
	for(int i=0;i<3;i++)
	{
		printf("%d ",*p[i]);
		printf("%d ",**(p+i));
	}
	return 0;
}
