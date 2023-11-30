#include<stdio.h>
#include<stdlib.h>
#include<string.h>//1662
int arrayStringsAreEqual(char (*word1)[10], int word1Size, char (*word2)[10], int word2Size) {
    int l1=0,l2=0;
    for(int i=0;i<word1Size;i++)
    {
        l1+=strlen(word1[i]);
    }
    for(int i=0;i<word2Size;i++)
    {
        l2+=strlen(word2[i]);
    }
    if(l1!=l2)
    {
        return 0;
    }
    char a[l1+1],b[l2+1];
    strcpy(a,word1[0]);
    strcpy(b,word2[0]);
    for(int i=1;i<word1Size;i++)
    {
        strcat(a,word1[i]);
    }
    for(int i=1;i<word2Size;i++)
    {
        strcat(b,word2[i]);
    }
    if(strcmp(a,b)==0)
    {
        return 1;
    }
    return 0;
    
}
int main()
{
    char a[3][10]={"123","23","45"},b[1][10]={"1232345"};
    printf("%d\n",arrayStringsAreEqual(a,3,b,1));
    system("pause");
    return 0;
}