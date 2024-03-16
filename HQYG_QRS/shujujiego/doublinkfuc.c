#include"doublelink.h"
void p()
{
	printf("0*********退出\n");
	printf("1*********创建双向链表\n");
	printf("2*********头插\n");
	printf("3*********展示\n");
	printf("4*********头删\n");
	printf("5*********尾插\n");
	printf("6*********按位置插入\n");
	printf("4*********按位置删除\n");
}
node_p create_dlink()
{
	node_p H=malloc(sizeof(node));
	if(H==NULL)
	{
		printf("创建失败\n");
		return NULL;
	}
	H->len=0;
	H->pri=NULL;
	H->next=NULL;
	return H;
}
node_p create_node(int Data)
{
	node_p H=malloc(sizeof(node));
	if(H==NULL)
	{
		printf("创建失败\n");
		return NULL;
	}
	H->data=Data;
	H->pri=NULL;
	H->next=NULL;
	return H;
}

void show(node_p H)
{
	if(!(H))
	{
		printf("链表未创建\n");
		return ;
	}
	if(H->next==NULL)
	{
		printf("链表为空\n");
		return ;
	}
	node_p temp=H->next;
	while(temp)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void insert_head(node_p H,int data)//头插
{
	if(!(H))
	{
		printf("双向链表未创建\n");
		return;
	}
	node_p new=create_node(data);
	new->next=H->next;
	H->next=new;
	new->pri=H;
	if(new->next!=NULL)
	{
		new->next->pri=new;
	}
	H->len++;

}
void dele_head(node_p H)//头删
{
	if(!(H))
	{
		printf("双向链表未创建\n");
		return;
	}
	if(H->next==NULL)
	{
		printf("链表为空链表\n");
		return;
	}
	node_p temp=H->next;
	H->next=temp->next;
	if(temp->next!=NULL)
	{
		H->next->pri=H;
	}
	free(temp);
	H->len--;
}
void insert_tail(node_p H,int a)//尾插
{
	if(!(H))
	{
		printf("双向链表未创建\n");
		return;
	}
	node_p new =create_node(a);
	node_p temp=H;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new;
	new->pri=temp;
	H->len++;
}
void insert_pos(node_p H,int pos,int a)//按位置插入
{
	if(!(H))
	{
		printf("双向链表未创建\n");
		return;
	}
	if(pos<1||pos>H->len+1)
    {
		printf("位置不合法\n");
		return;
	}
	node_p new=create_node(a);
	node_p temp=H;
	for(int i=0;i<pos-1;i++)
	{
		temp=temp->next;
	}
	new->next=temp->next;
	temp->next=new;
	new->pri=temp;
	if(new->next!=NULL)
	{
		new->next->pri=new;
	}
	H->len++;
}
void del_pos(node_p H,int pos)//按位置删除
{
	if(!(H))
	{
		printf("双向链表未创建\n");
		return;
	}
	if(H->next==NULL)
	{
		printf("双向链表为空链表没有可删除的数据\n");
        return;
	}
	if(pos<1||pos>H->len)
	{
		printf("位置不合法\n");
		return;
	}
	node_p temp=H;
	for(int i=0;i<pos-1;i++)
	{
		temp=temp->next;
	}
	node_p temp2=temp->next;
	temp->next=temp2->next;
	if(temp2->next!=NULL)
	{
		temp2->next->pri=temp;
	}
	free(temp2);
	H->len--;
}
