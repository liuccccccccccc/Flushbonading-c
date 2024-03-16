#ifndef _doublelink__h_
#define _doublelink__h_
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	union 
	{
		int len;
		int data;
	};
	struct node *pri;
	struct node *next;
}node ,*node_p;
void show(node_p H);
void p();
void insert_pos(node_p H,int pos,int a);//按位置插入
void del_pos(node_p H,int pos);//按位置删除
void dele_head(node_p H);//头删
void insert_tail(node_p H,int a);//尾插
void insert_head(node_p H,int data);//头插
node_p create_node(int Data);
node_p create_dlink();
#endif
