#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * freqAlphabets(char * s){//1309
    int l=strlen(s),cou=l-1;
    for(int i=l-1;i>=0;i--)
    {
        if(49<=s[i]&&s[i]<=57)
        {
            s[cou]=(s[i]-48)+96;
            cou--;
        }
        else
        {
            s[cou]=((s[i-1]-48)+(s[i-2]-48)*10)+96;
            cou--;
            i=i-2;
        }
    }
    return s+(cou+1);
}
int main()
{
    char a[10]="12#826#88";
    printf("%s\n",freqAlphabets(a));
    system("pause");
    return 0;
}