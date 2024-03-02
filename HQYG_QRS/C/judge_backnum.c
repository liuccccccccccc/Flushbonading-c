#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int num,sum=0;
	scanf("%d",&num);
	int temp=num;
	while(num!=0)
	{
		sum=sum*10+num%10;
		num/=10;
	}
	if(temp==sum)
	{
		printf("YES\n");
	}
	else
    {
		printf("NO\n");
	}
	return 0;
}
