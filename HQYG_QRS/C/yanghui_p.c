#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void yanghui_p(int n,int (*p)[n]);
int main(int argc, const char *argv[])
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	bzero(a,n*n*4);
    yanghui_p(n,a);
	return 0;
}
void yanghui_p(int n,int (*p)[n])
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(j==0)
			{
				*(*(p+i)+j)=1;
			}
			else
			{
		     	*(*(p+i)+j)=*(*(p+i-1)+j)+*(*(p+i-1)+j-1);
			}
			printf("%-3d ",*(*(p+i)+j));
		}
		putchar('\n');
	}
}
