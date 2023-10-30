#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int balancedStringSplit(char * s){//1221
    int l=0,r=0,c=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='R')
        {
            r++;
        }
        else
        {
            l++;
        }
        if(l==r)
        {
            c++;
            r=0;
            l=0;
        }
    }
    return c;
}
int main()
{

    char a[10]="RLRLRRRLLL";
    printf("%d\n",balancedStringSplit(a));
    system("pause");
    return 0;
}