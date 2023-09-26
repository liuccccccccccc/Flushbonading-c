#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//942.
int* diStringMatch(char * s, int* returnSize){
    int bo=0,to=strlen(s),i;
    int *a=malloc(4*(to+1));
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='I')
        {
            a[i]=bo;
            bo++;
        }
        else
        {
            a[i]=to;
            to--;
        }
    }
    a[i]=bo;
    *returnSize=i+1;
    return a;


}
int main()
{
    int l;
    char d[10]="IDIDI";
    int *a=diStringMatch(d,&l);
    for(int i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
    system("pause");
    return 0;

}