#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>
int main(int argc, const char *argv[])
{
	int n,flag=0;
	scanf("%d",&n);
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
