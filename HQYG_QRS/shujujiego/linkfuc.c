#include"link.h"
void p()
{
	printf("0*********展示链表中的数据\n");
	printf("1*********创建单链表\n");
	printf("2*********创建一个节点并且进行头插\n");
	printf("3*********展示链表中的数据\n");
	printf("4*********头删\n");
	printf("5*********尾插\n");
	printf("6*********尾删\n");
	printf("7*********按位置插入\n");
	printf("8*********按位置删除\n");
	printf("9*********按值查找位置\n");
	printf("10********按位置查找值\n");
	printf("11********释放链表\n");
	printf("12********转置链表\n");
}
node_p create_list()//创建单链表
{
	node_p head_node=(node_p)malloc(sizeof(node));
	if(head_node==NULL)
	{
		printf("内存分配失败\n");
		return  NULL; 
	}
	head_node->len=0;
	head_node->next=NULL;
	return head_node;
}
node_p create_node(int n)//创建一个节点
{

	node_p new=(node_p)malloc(sizeof(node));
	if(new==NULL)
	{
		printf("内存分配失败\n");
	    return NULL;
	}
	new->data=n;
	new->next=NULL;
	return new;
}
void  insert_head(node_p H_node,int data)//头插法
{
	if(H_node==NULL)
	{
		printf("未创建链表\n");
		return;
	}
	node_p temp = create_node(data);
	temp->next=H_node->next;
	H_node->next=temp;
	(H_node->len)++;
}
void show(node_p H_node)//展示链表中的数据
{
	/*if(H_node==NULL)
	{
		printf("未创建链表\n");
		return;
	}*/
	assert(H_node);
	printf("长度为：%d\n",H_node->len);
	node_p temp=H_node->next;
	while(temp)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int judge_empty(node_p H_node)//判断链表是否为空链表
{
	if(!(H_node))
	{
		return -1;
	}
	if(H_node->len)
	{
		return 0;
	}
	return 1;


}
void delete_head(node_p H_node)//头删
{
	if(H_node==NULL)
	{
		printf("未创建链表");
		return;
	}
	if(judge_empty(H_node))
	{
		printf("链表为空链表没有可删除的数据\n");
		return;
	}
	node_p temp=H_node->next;
	H_node->next=H_node->next->next;
	free(temp);
	H_node->len--;
}

void insert_tail(node_p H_node,int data)//尾插
{
	if(!(H_node))
	{
		printf("未创建链表\n");
		return;
	}
    node_p new=create_node(data);
	node_p temp=H_node;
	while(temp->next)
	{
		temp=temp->next;
	}
	temp->next=new;
	H_node->len++;
}
void delete_tail(node_p H_node)//尾删
{
	if(!(H_node))
	{
		printf("未创建链表\n");
		return;
	}
	if(judge_empty(H_node))
	{
		printf("链表中没有数据\n");
		return;
	}
	node_p temp=H_node;
	while(temp->next->next)
	{
		temp=temp->next;
	}
    free(temp->next);
	temp->next=NULL;
	H_node->len--;
}
void inser_key(node_p H_node,int pos,int value)//按位置插入
{
	if((!H_node))
	{
		printf("未创建链表\n");
		return ;
	}

	if(pos<1||pos>H_node->len+1)
	{
		printf("位置不合法\n");
		return;
	}
	node_p new =create_node(value);
	node_p temp=H_node;
	for(int i=1;i<pos;i++)
	{
		temp=temp->next;
	}
    new->next=temp->next;
	temp->next=new;
	H_node->len++;
}
void delete_pos(node_p H_node,int pos)//按位置删除
{
	if(!(H_node))
	{
		printf("链表未创建\n");
		return;
	}
	if(pos<1||pos>H_node->len)
	{
		printf("位置不合法\n");
	    return;
	}
	node_p temp=H_node;
	for(int i=0;i<i-1;i++)
	{
		temp=temp->next;
	}
	node_p temp2=temp->next;
	temp->next=temp->next->next;
	free(temp2);
	H_node->len--;
}
int search_value(node_p H_node,int value)//按值查找位置
{
	if(!(H_node))
	{		
    	return -1;
	}
	int i=1;
	node_p temp=H_node->next;
	while(temp)
	{
     	if(temp->data==value)
	{
    	return i;
	}
	i++;
	temp=temp->next;
	}
	return 0;

}
int search_pos(node_p H_node,int pos)//按位置查找值
{
	if(!(H_node))
	{
		return -1;//表示链表未创建
	}
	if(pos<1||pos>H_node->len)
	{
		return -2;//表示位置不合法
	}
	node_p temp=H_node->next;
	for(int i=0;i<pos-1;i++)
	{
		temp=temp->next;
	}
	return temp->data;
}
void free_list(node_p H_node)//释放链表
{
	if(!(H_node))
	{
		printf("链表未创建\n");
		return;
	}
	node_p temp=H_node;
	node_p temp2;
	while(temp)
	{
		temp2=temp->next;
		free(temp);
		temp=temp2;
	}
}
void  insert_head2(node_p H_node,node_p new)//头插法2
{
	if(H_node==NULL)
	{
		printf("未创建链表\n");
		return;
	}

	new->next=H_node->next;
	H_node->next=new;
}

void reverse_list(node_p H_node)//逆置链表
{
	if(!(H_node))
	{
		printf("链表未创建\n");
		return;
	}
	if(judge_empty(H_node)==1)
	{
		printf("链表为空\n");
		return;
	}
    
	node_p temp=H_node->next;
	H_node->next=NULL;
	node_p temp2;
	while(temp)
	{
		temp2=temp->next;
		insert_head2(H_node,temp);
		temp=temp2;
	}
	
}

