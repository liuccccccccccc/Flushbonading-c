#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int start,end,sum = 0;
	scanf("%d %d",&start,&end);
	for(int i = start;i <= end;i++)
	{
		if(i%2 != 0)
		{
			sum += i;
		}
    }
	printf("%d\n",sum);
	return 0;
}
