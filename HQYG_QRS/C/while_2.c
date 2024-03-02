#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	int n,fac=1,i=1;
	scanf("%d",&n);
	while(i<=n)
	{
		fac*=i++;
	}
	printf("%d\n",fac);
	return 0;
}
