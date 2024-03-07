#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int my_strcmp(const char *,const char *);
int main(int argc, const char *argv[])
{
	char a[20],b[20];
	gets(a);gets(b);
	printf("%d\n",my_strcmp(a,b));
	return 0;
}
int my_strcmp(const char *a,const char *b)
{
	while(*a==*b)
	{
		if(*a=='\0')
		{
			return 0;
		}
		a++;
		b++;
	}
		return *a-*b;

}
