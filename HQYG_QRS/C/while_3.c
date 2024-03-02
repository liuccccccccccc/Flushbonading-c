#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int n,sum=0;
	scanf("%d",&n);
	if(n<0)
	{
		printf("data error\n");
		exit(0);
	}
	while(n!=0)
	{
		sum+=(n%10);
		n/=10;
	}
	printf("%d\n",sum);
	return 0;
}
