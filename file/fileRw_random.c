#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *fr = fopen("data3.txt", "r");
    if (fr == NULL)
    {
        perror("fopen");
        return 1;
    }
    int i;
    i=fgetc(fr);
    printf("%c",i);
    fseek(fr,-1,SEEK_CUR);//改变当前文件指针的指向，可以随机阅读的内容。seek_cur表示当前指针的指向，数值表示移动的位置，正数右移，负数左移
    i=fgetc(fr);
    printf("%c",i);
    fseek(fr,-1,SEEK_END);//seek_end表示指针指向结尾
     i=fgetc(fr);
    printf("%c",i);
    fseek(fr,1,SEEK_SET);//表示开始
     i=fgetc(fr);
    printf("%c",i);
    fclose(fr);
    fr=NULL;
    FILE *fw=fopen("data3.txt","w");
    if(fw==NULL)
    {
        perror("fopen");
        return 1;
    }
    fputc('A',fw);
    fputc('B',fw);
    fseek(fw,-1,SEEK_CUR);
    fputs("abcd\n",fw);
    fclose(fw);
    fw=NULL;
    system("pause");
    return 1;
}