#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <unistd.h>
int main()
{
    FILE *  fw=fopen("txt.txt","w");
    if(fw==NULL)
    {
        perror("fopen");
        return 1;
    }
    fputs("ABCDE",fw);
    printf("程序睡眠10s........\n");
    Sleep(10000);//在写入文件之前暂停10秒，查看文件发现没有内容写入。说明要写的内容被存放在一个缓冲区中
    fflush(fw);//刷新缓冲区，在程序结束之前观察到，内容被写入到文件中，说明缓冲区的存在。
    printf("缓存区已刷新\n");
    Sleep(10000);
    fclose(fw);
    system("pause");
    return 1;
}