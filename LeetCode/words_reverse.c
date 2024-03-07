#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, const char *argv[])
{
	char a[20];
	gets(a);
	int t;
	for(int i=0,l=strlen(a)-1;i<strlen(a)/2;i++,l--)
	{
		t=a[i];
		a[i]=a[l];
		a[l]=t;
	}
	printf("%s\n",a);
	int i=0,k=0,j=0;
	while(a[i]!='\0')
	{
		while(a[k]!=' '&&a[k]!='\0')
		{
			k++;
		}
		j=k-1;
		while(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			i++;
			j--;
		}
		while(a[k]==' ')
		{
			k++;
		}
		i=k;
	}
	printf("%s\n",a);
	return 0;
}
