#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。

//注意：若 s 和 t 中每个字符出现的次数都相同，则称 s 和 t 互为字母异位词
int isAnagram(char * s, char * t){
    if(strlen(s)!=strlen(t))
    {
        return 0;
    }
    int d[26]={0};//由于字符是26个连续的小写字母，所以可以用数组存储26个字母中每个字母出现的次数，最后判断两个字符串中26个字母出现的次数，是否一一对应相等。
    int j=0;
    for(int i=0;i<strlen(s);i++)
    {
        j=s[i]-'a';
        d[j]+=1;
    }
     for(int i=0;i<strlen(t);i++)
    {
        j=t[i]-'a';
        d[j]-=1;
    }
    for(int i=0;i<26;i++)
    {
        if(d[i]!=0)
        {
            return 0;

        }
    }
    return 1;
    //方法2：双重循环，时间复杂度较高，耗时
    // int flag=0;
    // for(int i=0;i<strlen(s);i++)
    // {
    //     flag=0;
    //     for(int j=0;j<strlen(s);j++)
    //     {
    //         if(s[i]==t[j])
    //         {
    //             t[j]='1';
    //             flag=1;
    //             break;
    //         }
            
    //     }
    //     if(flag==0)
    //     {
    //         return 0;
    //     }
    // }
    // return 1;

}

int main()
{
    char a[10]="abcdeee";
    char b[10]="eeedcba";
    
    printf("%d\n",isAnagram(a,b));
    system("pause");
    return 0;
}