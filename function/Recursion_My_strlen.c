#include<stdio.h>
#include<stdlib.h>

int My_Strlen(char * arr)
{
    int count=0;
    for(;(*arr)!='\0';arr++)
    {
      count++;
    }
    return count;
}

int Recursion_My_Strlen(char *arr)//利用递归求字符串的长度
{
    if(*arr!='\0')
    {
        return 1+Recursion_My_Strlen(arr+1);
    }

    else
    {
        return 0;
    }
}



int main()
{
    char b[100];
    scanf("%s",b);
    printf("%d\n",My_Strlen(b));
    printf("%d",Recursion_My_Strlen(b));
    system("pause");
    return  0;
}