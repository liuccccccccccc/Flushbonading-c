#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void word_reverse(char *s)
{
	int i=0,j=0,t;
	while(s[j++]!='\0');
	j=j-2;
	while(i<j)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
		i++;
		j--;
	}
	i=0,j=0;
	int k=0;
	printf("%s\n",s);
	while(s[k]!='\0')
	{
		while(s[j]!=' '&&s[j]!='\0')
		{
			j++;
		}
		j=j-1;
		k=j;
		while(i<j)
		{
			t=s[i];
			s[i]=s[j];
			s[j]=t;
			i++;
			j--;
		}
		while(s[k++]==' ');
		k=k-1;
		i=k,j=k;
	}
}
int main(int argc, const char *argv[])
{   
	char a[20];
	gets(a);
	word_reverse(a);
	puts(a);
	return 0;
}
