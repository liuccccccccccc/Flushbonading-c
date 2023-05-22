#include<stdio.h>
#include<stdlib.h>
union A//大小为4，联合体的大小计算需要找到成员的最大对齐数，和最大成员的大小，然后判断后者是不是前者的倍数，如果是，最大成员的大小就为联合体的大小，如果不是倍数，那么将其增加为对齐数的倍数就为联合体的大小。
{
    char i;//对齐数1
    int a;//对齐数4
}c;
union B//大小为8，其最大成员的大小为5，最大对齐数为4，所以联合体大小为8.
{
    char a[5];//对齐数为1
    int i;//对齐为4

};
int judge1()//i和a共用一块存储空间。可以利用其判断大小端存储
{
    c.a=1;
    if(c.i==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void judge2(int i)
{
    if(*(char *)&i==1)
    {
        printf("小端存储\n");
    }
    else
    {
        printf("大端存储\n");
    }
    

}
int main()
{
    int i=1;
    judge2(i);
    printf("%d %d\n",sizeof c,sizeof(union B));
    if(judge1()==1)
    {
        printf("小端存储\n");
    }
    else
    {
        printf("大端存储\n");
    }
    system("pause");
    return 0;
}