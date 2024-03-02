#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int findMinimumOperations(char* s1, char* s2, char* s3) {
    if(s1[0]!=s2[0]||s2[0]!=s3[0])
    {
        return -1;
    }
    if(strcmp(s1,s2)==0&&strcmp(s2,s3)==0)
    {
        return 0;
    }
    int a[3];
    a[0]=strlen(s1);
    a[1]=strlen(s2);
    a[2]=strlen(s3);
    int min=a[0];
    for(int i=0;i<3;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    while(strcmp(s1,s2)!=0||strcmp(s2,s3)!=0)
    {
        s1[min]='\0';
        s2[min]='\0';
        s3[min]='\0';
        min--;
    }
    int sum=0;
    for(int i=0;i<3;i++)
    {
        sum+=(a[i]-(min+1));
    }
    return sum;
    
    
}
int main()
{
    char a[5]="a";
    char b[5]="aabd";
    char c[5]="a";
    printf("%d\n",findMinimumOperations(a,b,c));
    system("pause");
    return 0;
}