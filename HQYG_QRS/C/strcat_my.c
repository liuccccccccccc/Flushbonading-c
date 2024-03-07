#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *my_strcat(char *,const char *);
int main(int argc, const char *argv[])
{
    char a[20],b[20];
	gets(a);gets(b);
	my_strcat(a,b);
	puts(a);
	return 0;
}
char *my_strcat(char *src,const char *des)
{
	char *t=src;
	while(*src++!='\0');
	src-=1;
	while(*des!='\0')
	{
		*src++=*des++;
	}
	*src='\0';

	return t;
}
