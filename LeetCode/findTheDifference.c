#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//给定两个字符串 s 和 t ，它们只包含小写字母。字符串 t 由字符串 s 随机重排，然后在随机位置添加一个字母。请找出在 t 中被添加的字母
char findTheDifference(char * s, char * t){
    int count=0,i,l=strlen(s);
    for(i=0;i<l;i++)
    {
        count+=(t[i]-s[i]);
    }
    return count+t[i];

}
int main()
{
    char a[10]="abcdde";
    char b[10]="abcddee";
    printf("%c\n",findTheDifference(a,b));
    system("pause");
    return 0;
}