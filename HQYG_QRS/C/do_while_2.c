#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int a=1,mul=1;
	do
	{
		mul*=a;
		scanf("%d",&a);
	}
	while(a!=0);
	printf("%d\n",mul);
	return 0;
}
