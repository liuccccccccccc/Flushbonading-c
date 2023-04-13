#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int romanToInt(char * s){
    int a=strlen(s);//字符串可以在函数中直接拿地址求长度
    int b[a];
    int count=0;
    for(int i=0;i<a;i++)
    {
        switch(s[i])
        {
            case 'I':b[i]=1;break;
            case 'V':b[i]=5;break;
            case 'X':b[i]=10;break;
            case 'L':b[i]=50;break;
            case 'C':b[i]=100;break;
            case 'D':b[i]=500;break;
            case 'M':b[i]=1000;break;
        }
    }
    for(int i=0;i<a-1;i++)
    {
        if(b[i]>=b[i+1])
        {
            count+=b[i];
        }
        else
        {
            count-=b[i];
        }
    } 
    count+=b[a-1];
    return count;;
}

int main()
{
    char a[100];
    gets(a);
    printf("%d",romanToInt(a));
    system("pause");
    return 0;
}