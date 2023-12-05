#include<stdio.h>
#include<stdlib.h>
#include<string.h>//1684
int is(char *a,char b)
{
    for(int i=0;i<strlen(a);i++)
    {
        if(b==a[i])
        {
            return 1;
        }
    }
    return 0;
}
int countConsistentStrings(char * allowed, char  (*words)[10], int wordsSize){
    int count=0,l=0,flag=0;
    for(int i=0;i<wordsSize;i++)
    {
        flag=0;
         l=strlen(words[i]);
        for(int j=0;j<l;j++)
        {
            if(is(allowed,words[i][j])==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            count++;
        }
    }
    return count;

}
int main()
{
    char a[4]="abc";
    char b[3][10]={"abb","abcd","abc"};
    printf("%d\n",countConsistentStrings(a,b,3));
    system("pause");
    return 0;
}