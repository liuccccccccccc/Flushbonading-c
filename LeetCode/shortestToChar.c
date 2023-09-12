#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shortestToChar(char * s, char c, int* returnSize){//821.字符的最短距离
    int l=strlen(s);
    int *r=malloc(l*4);
    int temp1,temp2,d;
    for(int i=0;i<l;i++)
    {
        temp1=i,temp2=i;

        while(1)
         {
             if(temp1<0)
             {
                 temp1=0;
             }
             if(temp2>=l)
             {
                 temp2=l-1;
             }
             if(s[temp1]==c)
             {
                 d=temp1;
                 break;
             }
             else if(s[temp2]==c)
             {
                 d=temp2;
                 break;
             }
             temp1--;
             temp2++;
             
         }
         r[i]=abs(i-d);
    }
    *returnSize=l;
    return r;

}
int main()
{
    int l;
    char c[30]="abcdeeebbebq";
    int *a=shortestToChar(c,'e',&l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;
}