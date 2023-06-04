#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fw=fopen("define.txt","a+");//a+是追加写
    if(fw==NULL)
    {
        perror("fopen");
        return 1;
    }
    for(int i=0;i<10;i++)
    {
       fprintf(fw,"%s %d %s %d\n",__FILE__,__DATE__,__TIME__,__LINE__);//格式化输出，将变量格式化成字符串类型写到文件。
    }
    fclose(fw);
    system("pause");
    return 1;

}