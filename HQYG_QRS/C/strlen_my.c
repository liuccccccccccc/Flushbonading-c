#include <stdio.h>
#include <string.h>
#include <stdlib.h>
unsigned long my_strlen(const char *);
int main(int argc, const char *argv[])
{
	char a[20];
	gets(a);
	printf("%ld\n",my_strlen(a));
	
	return 0;
}
unsigned long  my_strlen(const char *a)
{
	unsigned long i=0;
	while(*a++!='\0')
	{
		i++;
	}
	return i;
}
