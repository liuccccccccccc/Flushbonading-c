#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int titleToNumber(char * columnTitle){//给你一个字符串 columnTitle ，表示 Excel 表格中的列名称。返回 该列名称对应的列序号 。
    int sum=0;;
    for(int i=0,j=strlen(columnTitle)-1;i<strlen(columnTitle);i++,j--)
    {
        sum+=((columnTitle[i]-64)*pow(26,j));
    }
    return sum;

}
int main()
{
    char a[10]="BAA";
    printf("%d\n",titleToNumber(a));
    system("pause");
    return 0;
}