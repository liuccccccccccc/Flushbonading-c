#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX(x,y) x>y?x:y
int main(int argc, const char *argv[])
{
	int a=1,b=3;
	int max=MAX(a,b);
	printf("%d\n",max);
	
	return 0;}
