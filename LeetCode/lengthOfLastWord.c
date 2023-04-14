#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int lengthOfLastWord(char * s)//求字符串最后一个单词的长度
{
    if(s[strlen(s)-1]==' ')//利用递归将字符串最后一个单词后面的所有空格全消去，能确保最后一个空格后面跟的是最后一个单词，这样才能够通过最后一个空格的的位置求最后一个单词的长度
    {
        s[strlen(s)-1]='\0';
        return lengthOfLastWord(s);
    }
    int length=strlen(s);
    //short a[length];//不使用指针记录空格的地址，直接使用短整形记录空格的位置，能够节省地址
    //char *a[length];
    int count=-1;
    for(int i=0;i<length;i++)
    {
        if(s[i]==' ')
        {
            count=i;//直接使用count记录下最后一个空格的角标
        }
    }
    int d=0;
    if(count==-1)//如果字符串没有空格，那么就是只有一个单词，直接求字符串的长度就是最后一个单词的长度
    {
    //    while(*s++!='\0')
    //    {
    //        d++;
    //    }
       return strlen(s);
    }
    // while(*(++a[count-1])!='\0')
    // {
    //     d++;
    // }

    return strlen(s)-(count+1);
}

int main()
{
    char s[100]={0};
    gets(s);
    int d=lengthOfLastWord(s);
    printf("%d",d);
    system("pause");
    return 0;

}