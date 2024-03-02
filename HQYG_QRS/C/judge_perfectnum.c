#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, const char *argv[])
{
	int a,sum=1;
	scanf("%d",&a);
    if(a<0||a==1)
	{
		printf("NO\n");
		exit(0);
	}
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			sum+=i;
			sum+=a/i;
		}
	}
	if(sum==a)
	{
		printf("is perfect number\n");

	}
	else 
	{
		printf("NO\n");
	}
	return 0;
}
