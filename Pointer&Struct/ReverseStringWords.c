#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void ReverseStringWords(char *a,int length)
{
    char copy_a[100]={0};
    char *d=a;
    for(int i=0;i<length;i++)
    {
        copy_a[i]=a[i];
    }
    char *b[20];//存储字符串中空格的地址
    int count=0;//记录字符串中空格的个数
    for(int i=0;i<length;i++)
    {
        if(a[i]==' ')
        {
            b[count++]=&copy_a[i];//找到空格的地址记录下来
        }
    }
    for(int i=count-1;i>-1;i--)//count+1为单词个数，将除第一个单词以外的其他count个单词倒置
    {
        int c=i;
        b[c]++;
        while(*b[c]!=' '&&*b[c]!='\0')
        {
            *(d++)=*(b[c]++);
        }
        *(d++)=' ';
    }
    for(int i=0;copy_a[i]!=' ';i++)//将第一个单词写在倒置后字符串的最后面
    {
        *(d++)=copy_a[i];
    }
    *d='\0';
    
}
int main()
{
    char a[100];
    gets(a);//输入字符串 可以带空格
    ReverseStringWords(a,strlen(a));
    printf("%s",a);
    system("pause");
    return 0;
}