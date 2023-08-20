#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//205同构字符串
int index1(int a,const char *s,int l)//寻找字符首次出现在字符串中的位置
{
    for(long i=0;i<l;i++)
    {
        if(s[i]==s[a])
        {
            return i;
        }
    }
    return 0;

}
int isIsomorphic(char * s, char * t){
    // int l=strlen(s);//方法1
    // for(int i=0;i<l;i++)
    // {
    //     for(int j=0;j<i;j++)
    //     {
    //         if(s[i]==s[j]||t[i]==t[j])
    //         {
    //             if(s[i]==s[j]&&t[i]!=t[j])
    //             {
    //                 return 0;
    //             }
    //             if(t[i]==t[j]&&s[i]!=s[j])
    //             {
    //                 return 0;
    //             }
    //         }

    //     }
    // }
    //return 1;
    //方法2
   //通过寻找每个字符的索引来确定每个字符串的结构，用数字表示。存储在数组中。因为是根据位置找的结构，所以可推断出，当位同构时数组内容一定相同。
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
         if((index1(i,s,l)-index1(i,t,l))!=0)
        {
            return 0;
        }
    }
    return 1;

}
int main()
{
    char a[10]="abacdc";
    char b[10]="erecbc";
    printf("%d\n",isIsomorphic(a,b));
    system("pause");
    return 0;
}