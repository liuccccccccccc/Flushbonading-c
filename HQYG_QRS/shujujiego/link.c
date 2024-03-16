#include"link.h"
int main()
{
	int n,a,pos;
	node_p Li=NULL;
	p();
	while(1)
	{
		
        printf("请输入操作数\n");
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		switch(n)
		{
		case 1:Li=create_list();break;
		case 2:printf("输入你要插入节点的数据\n");
			   scanf("%d",&a);
			   insert_head(Li,a);break;
		case 3:show(Li);break;
		case 4:delete_head(Li);break;
		case 5:printf("输入你要插入节点的数据\n");scanf("%d",&a);
			   insert_tail(Li,a);break;
		case 6:delete_tail(Li);break;
		case 7:printf("输入你要插入的位置和数据\n");scanf("%d%d",&pos,&a);
			   inser_key(Li,pos,a);break;
		case 8:printf("请输入你要删除的位置\n");scanf("%d",&pos);
			   delete_pos(Li,pos);break;
		case 9:printf("输出你要查找的值\n");scanf("%d",&a);
			   int i=search_value(Li,a);
			   if(i==0)
			   {
				   printf("没有该值\n");
			   }
			   else if(i==-1)
			   {
				   printf("没有创建链表\n");
			   }
			   else
			   {
				   printf("位置为：%d\n",i);
			   }
				   break;
		case 10:printf("输入你要查找哪个位置的值\n");
				scanf("%d",&pos);i=search_pos(Li,pos);
				if(i==-1)
				{
					printf("链表未创建\n");
				}
				else if(i==-2)
				{
					printf("链表中没有该位置\n");
				}
				else
				{
					printf("该位置的值为：%d",i);
				}
				break;
		case 11:free_list(Li);Li=NULL;break;
		case 12:reverse_list(Li);break;
		

		}

	}
}
