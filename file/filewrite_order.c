#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1=fopen("data.txt","w");//写文件是输出流，所以要用输出流函数，进行写文件
    if(fp1==NULL)//对应写文件，其没有文件时，会自动创建一个文件。
    {
        perror("fopen");
        return 1;
    }
    fputc('A',fp1);//输出流函数，一次往文件中写入一个字符
    fputc('B',fp1);
    fputs("121234324",fp1);//输出流函数一次往文件中写入一个字符串
    fputs("qewqwe\n333",fp1);
    fclose(fp1);
    // FILE *fp=fopen("data.txt","w");//写文件打开文件时，会自动将文件内容清空。
    // if(fp==NULL)
    // {
    //     perror("fopen");
    //     return 1;
    // }
    // fclose(fp);
    system("pause");
    return 1;
}