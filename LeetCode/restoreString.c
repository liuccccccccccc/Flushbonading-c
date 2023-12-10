#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* restoreString(char* s, int* indices, int indicesSize) {//1528
    char a[strlen(s)+1];
    int i=0;
    for(;i<indicesSize;i++)
    {
        a[indices[i]]=s[i];
    }
    a[i]='\0';
    strcpy(s,a);
    return s;
    
}
int main()
{
    char a[10]="vkkmjvhyy";
    int b[9]={4,2,3,5,0,8,1,6,7};
    printf("%s\n",restoreString(a,b,9));
    system("pause");
    return 0;
}