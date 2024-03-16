#ifndef _onecirlink__h_
#define _onecirlink__h_
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	union
	{
		int data;
		int len;
	};
	struct node *next;
}node ,*node_p;


void showDelHnode(node_p H_node);//展示删除头结点后的链表
node_p dele_Hnode(node_p H_node);//删除头节点并将链表转换为单向链表
void dele_pos(node_p H_node,int pos);//按位置删除
void p();
void head_insert(node_p H_node,int a);//tocha
void insert_pos(node_p H_node,int pos,int a);//按位置插入
void dele_head(node_p H_node);//头删
void insert_tail(node_p H_node,int d);//尾插
void delete_tail(node_p H_node);//尾删
void show(node_p H_node);
node_p create_list();
node_p create_node(int Data);




#endif
