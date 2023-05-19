#include<stdio.h>
#include<stdlib.h>
// struct {
//     int a;
//     int b;
// };//模糊类型
typedef struct A{
    int a;
    char b;
    char c[100];
}A;

typedef struct B{
int a;
A b;
}B;
typedef struct node{
    int a;
    struct node *next;
}node ;//自引用类型，可以用于构建链表

int main()
{
    B b={1,{1,'1',"qweqwe"}};
    node node1,node2;
    node1.a=1;
    node2.a=2;
    node1.next=&node2;
    node2.next=&node1;
    printf("%d %d %c %s\n",b.a,b.b.a,b.b.b,b.b.c);
    printf("%d %d %d %d",node1.a,node1.next->a,node2.a,node2.next->a);
    system("pause");
    return 0;
    

}