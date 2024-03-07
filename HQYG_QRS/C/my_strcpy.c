#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *my_strcpy(char *,const char *);
int main(int argc, const char *argv[])
{
	char a[20],b[20];
	gets(a);gets(b);
	my_strcpy(a,b);
	puts(a);
	return 0;
}
char *my_strcpy(char *a,const char *b)
{
	char *t =a;
	while(*b!='\0')
	{
		*a++=*b++;
	}
	*a='\0';
	return t;
}
