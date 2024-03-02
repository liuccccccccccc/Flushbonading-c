#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int a,b,sum=0;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("data error\n");
		exit(0);
	}
	while(a<=b)
	{
		sum+=a++;
	}
	printf("%d\n",sum);
	return 0;
}
