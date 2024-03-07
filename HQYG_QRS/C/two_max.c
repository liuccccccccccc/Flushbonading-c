#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int get_max(int ,int ,const int (*)[4]);
int main(int argc, const char *argv[])
{
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    printf("%d\n",get_max(3,4,a));
	return 0;
}
int get_max(int i,int j,const int (*p)[4])
{
	int max=**p;
	for(int k=0;k<i;k++)
	{
		for(int l=0;l<j;l++)
		{
			if(max<*(*(p+k)+l))
			{
				max=*(*(p+k)+l);
			}
		}
	}
	return max;
}

