#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longestCommonPrefix(char (*a)[200], int strsSize)//找字符串的最长公共前缀
{
    char b[200];
    static char v[200];
    strcpy(b,a[0]);
    for(int i=1;i<strsSize;i++)
    {
        int x=0;
        if(a[i][0]!=b[0])
        {
            v[0]='\0';
            return v;
        }
        while(a[i][x]==b[x]&&b[x]!='\0')
        {  
            x++;
        }
        b[x]='\0';
    }
    strcpy(v,b);
    return v;
}

int main()
{
    char a[][200]={"flwo","flww","f",""};
    char *d=longestCommonPrefix(a,4);
    printf("%s\n",d);
    system("pause");
    return 0;
}