#include"onecirlink.h"
void p()
{
	printf("0*************退出程序\n");
	printf("1*************创建链表\n");
	printf("2*************头插\n");
	printf("3*************头删\n");
	printf("4*************尾插\n");
	printf("5*************尾删\n");
	printf("6*************展示\n");
	printf("7*************按位置插入\n");
	printf("8*************按位置删除\n");
	printf("9*************删除头结点\n");
	printf("10*************输出删除头结点后的单链表\n");
}

node_p create_list()
{
	node_p H_node=malloc(sizeof(node));
	H_node->len=0;
	H_node->next=H_node;
	return H_node;
}
node_p create_node(int Data)
{
	node_p n_p=malloc(sizeof(node));
	n_p->data=Data;
	n_p->next=NULL;
	return n_p;
}
void head_insert(node_p H_node,int a)//tocha
{
	if(!(H_node))
	{
		printf("链表未创建\n");
		return;
	}
	node_p temp=create_node(a);
    temp->next=H_node->next;
	H_node->next=temp;
	H_node->len++;
}
void show(node_p H_node)
{
	if((!H_node))
	{
		printf("weichuanjian\n");
		return;
	}
	node_p temp=H_node->next;
	while(temp!=H_node)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void dele_head(node_p H_node)//头删
{
	if((!H_node))
	{
		printf("未创建链表\n");
		return;
	}
	if(H_node->next==H_node)
	{
		printf("链表中没有数据\n");
		return;
	}
	node_p temp=H_node->next;
	H_node->next=temp->next;
	free(temp);
	H_node->len--;
}
void insert_tail(node_p H_node,int d)//尾插
{
	if((!H_node))
	{
		printf("未创建链表\n");
		return;
	}
	node_p temp=H_node;
	while(temp->next!=H_node)
	{
		temp=temp->next;
	}
	node_p new=create_node(d);
	temp->next=new;
	new->next=H_node;
	H_node->len++;
}
void delete_tail(node_p H_node)//尾删
{
	if((!H_node))
	{
		printf("未创建链表\n");
		return;
	}
	if(H_node->next==H_node)
	{
		printf("链表为空\n");
		return;
	}
	node_p temp=H_node;
	while(temp->next->next!=H_node)
	{
		temp=temp->next;
	}
	free(temp->next);
    temp->next=H_node;
	H_node->len--;
}
void insert_pos(node_p H_node,int pos,int a)//按位置插入
{
	if((!H_node))
	{
		printf("链表未创建\n");
		return;
	}
	if(pos<1||pos>H_node->len+1)
	{
		printf("位置不合法\n");
		return;
	}
	int i=0;
	node_p temp=H_node;
	node_p new=create_node(a);
	for(int i=0;i<pos-1;i++)
	{
		temp=temp->next;
	}
	new->next=temp->next;
    temp->next=new;
	H_node->len++;
}
void dele_pos(node_p H_node,int pos)//按位置删除
{
	if(!(H_node))
	{
		printf("未创建链表\n");
		return;
	}
	if(pos<1||pos>H_node->len)
	{
		printf("该位置没有数据\n");
		return;
	}
	node_p temp=H_node;
	int i=0;
	for(;i<pos-1;i++)
	{
		temp=temp->next;
	}
	node_p temp2=temp->next;
    temp->next=temp->next->next;
	free(temp2);
	H_node->len--;
}

node_p dele_Hnode(node_p H_node)//删除头节点
{
	if(!(H_node))
	{
		printf("链表未创建\n");
		return NULL;
	}
	if(H_node->next==H_node)
	{
		printf("空链表不能删除头节点\n");
		return H_node;
	}
    node_p temp=H_node;
	while(temp->next!=H_node)
	{
		temp=temp->next;
	}
	temp->next=H_node->next;
	free(H_node);
	return temp->next;
}
void showDelHnode(node_p H_node)//展示删除头结点后的链表
{
	if(!(H_node))
	{
		printf("入参为空\n");
		return;
	}
	node_p temp=H_node;
	while(temp->next!=H_node)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d ",temp->data);
}

