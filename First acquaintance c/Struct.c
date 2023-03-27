#include<stdio.h>
#include<stdlib.h>
struct Stu
{
char name[20];//名字
int age; 
char sex[5];//性别
char id[15];//学号
};
int main()
{
struct Stu s = {"张三",20,"男","20180101"};
printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
//->操作符
struct Stu *ps = &s;
printf("name = %s age = %d sex = %s id = %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).id);
printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps->id);
    system("pause");
    return 0;
}
//打印结构体信息
