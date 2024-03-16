#ifndef _link__h_
#define _link__h_
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct node
{
	union
	{
		int len;
		int data;
	};
	struct node *next;
}node,*node_p;

void show(node_p H_node);

void inser_key(node_p H_node,int pos,int value);//按位置插入
void delete_pos(node_p H_node,int pos);//按位置删除
void delete_tail(node_p H_node);//尾删
void insert_tail(node_p H_node,int data);//尾插
void insert_tail(node_p H_node,int data);//尾插
void delete_head(node_p H_node);//头删
void  insert_head(node_p H_node,int a);//头插法
node_p create_node(int n);//创建一个节点
node_p create_list();//创建单链表
void p();//打印导航栏
void free_list(node_p H_node);//释放链表
void  insert_head2(node_p H_node,node_p new);//头插法2
void reverse_list(node_p H_node);//逆置链表
int search_pos(node_p H_node,int pos);//按位置查找值
int search_value(node_p H_node,int value);//anzhichazhao
int search_value(node_p H_node,int value);//anzhichazhao
#endif
