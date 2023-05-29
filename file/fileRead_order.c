#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *pf=fopen("data.txt","r");//读文件为输入流，要用输入流函数
    if(pf==NULL)//对于读文件，其打开的文件不存在时，会返回一个NULL。
    {
        perror("fopen");
        system("pause");
        return 1;
    } 
    int a;
    // for(int i=0;i<21;i++)
    // {
    //     a=fgetc(pf);//一次读取一个字符并且返回ASCII码。
    //     printf("%c",a);
    // }
    char b[100];
    fgets(b,10,pf);
    printf("%s",b);//不管n的值多大,一个fgets() 最多只能读取一行数据,不能跨行
    fgets(b,20,pf);
    printf("%s",b);
    fgets(b,3,pf);
    printf("%s",b);
    a=fgetc(pf);
    printf("%c",a);
    fclose(pf);
    system("pause");

    return 1;

}