#include<stdio.h>
#include<stdlib.h>
int isPrefixString(char* s, char (*words)[10], int wordsSize) {//1961
    // char s2[10000]="\0";//方法1
    // for(int i=0;i<wordsSize;i++)
    // {
    //     strcat(s2,words[i]);
    //     if(strcmp(s,s2)==0)
    //     {
    //         return 1;
    //     }

    // }
    // return 0;
    int l1=0,l2=0,l3=0;//方法2
    while(1)
    {
        if(s[l2]=='\0')
        {
            return 1;
        }
        if(l1==wordsSize)
        {
            return 0;
        }
        l3=0;
        while(words[l1][l3]!='\0')
        {
            if(s[l2]==words[l1][l3])
            {
                l2++;
                l3++;
            }
            else
            {
                return 0;
            }
        }
        l1++;
    }
    return 1;
}
int main()
{
    char s[10]="abcde";
    char c[3][10]={"ab","cd","e"};
    printf("%d\n",isPrefixString(s,c,3));
    system("pause");
    return 0;
}