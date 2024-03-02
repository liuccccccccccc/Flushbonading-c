#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int num,sum=0;
	scanf("%d",&num);
	while(num!=0)
	{
		sum=sum*10+num%10;
		num/=10;
	}
	printf("%d\n",sum);
	return 0;
}
