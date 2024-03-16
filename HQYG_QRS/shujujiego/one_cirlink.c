#include"onecirlink.h"
int main()
{
	int a,n,pos;
	p();
	node_p L=NULL;
	node_p H=NULL;
	while(1)
	{
		printf("请输入操作数\n");
		scanf("%d",&n);
		if(n==0)
		{
			printf("退出成功\n");
			break;
		}
		switch(n)
		{
		case 1:L=create_list();break;
		case 2:printf("输入头插节点数据\n");scanf("%d",&a);head_insert(L,a);break;
		case 3:dele_head(L);break;
		case 4:printf("输入尾插节点数据\n");scanf("%d",&a);insert_tail(L,a);break;
		case 5:delete_tail(L);break;
		case 6:show(L);break;
		case 7:printf("输入插入的位置和数据\n");scanf("%d%d",&pos,&a);insert_pos(L,pos,a);break;
		case 8:printf("输入你要删除哪个位置的数据\n");scanf("%d",&pos);dele_pos(L,pos);break;
		case 9:H=dele_Hnode(L);L=NULL;break;
		case 10:showDelHnode(H);break;

		}
	}
	return 0;
}
