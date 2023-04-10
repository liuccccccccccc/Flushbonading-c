#include<stdio.h>
#include<stdlib.h>
struct Student
{
    int age;
    int id;
    char name[10];
};
struct  Teacher
{
    struct Student s;
    int age;
    char name[10];

};


void print(struct Teacher t)//定义一个结构体变量，接收实参变量传来的值，拷贝值，相当于是按值传参。和地址没有关系。
{
    printf("%d %d %s %d %s",t.s.age,t.s.id,t.s.name,t.age,t.name);
}
void print1(struct Teacher *t)//定义一个结构体指针，接收结构体变量的地址，按地址传参。
{
   printf("%d %d %s %d %s",t->s.age,t->s.id,t->s.name,t->age,t->name);
}
int main()
{
    struct Teacher T1={{20,12,"lmx"},30,"lll"};//声明一个结构体变量。
    print(T1);
    print1(&T1);
    system("pause");
    return 0;

}
