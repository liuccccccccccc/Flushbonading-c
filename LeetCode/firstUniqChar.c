#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int firstUniqChar(char * s){//给定一个字符串 s ，找到 它的第一个不重复的字符，并返回它的索引 。如果不存在，则返回 -1 
    int l=strlen(s),count=-1;;
    int a[26]={-1};
    for(int i=0;i<26;i++)
    {
        a[i]=-1;
    }
    for(int i=0;i<l;i++)
    {
        if(a[s[i]-97]==-1)
        {
            a[s[i]-97]=i;
        }
        else
        {
            a[s[i]-97]=-2;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]>=0)
        {
            count=a[i];
            break;
        }
    }
    for(int i=0;i<26;i++)
        {
            if(a[i]>=0)
            {
                if(count>a[i])
                {
                    count=a[i];
                }
            }
        }
    return count;

    //方法2，笨方法
    // for(int i=0;i<l;i++)
    // {
    //     count=0;
    //     for(int j=0;j<l;j++)
    //     {
    //         if(s[i]==s[j])
    //         {
    //             count++;
    //         }
            
    //     }
    //     if(count==1)
    //     {
    //         return i;
    //     }
    // }
    // return -1;

}
int main()
{
    char a[5]="aabb";
    printf("%d\n",firstUniqChar(a));
    system("pause");
    return 0;
}