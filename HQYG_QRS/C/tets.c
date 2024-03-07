#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	printf("%d\n",argc);
	puts(argv[0]);
	for(int i=0;i<argc;i++)
	{
		puts(argv[i]);
	}

	return 0;
}
