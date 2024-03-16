#include"doublelink.h"
int main()
{
	int a,pos,n;
	node_p L=NULL;
	p();
	while(1)
	{
		printf("输入你要进行的操作数\n");
		scanf("%d",&n);
		if(n==0)
		{
			printf("exit\n");
			break;
		}
		switch(n)
		{
		case 1 :L=create_dlink();break;
		case 2:printf("请输入你要插入的值\n");
			   scanf("%d",&a);insert_head(L,a);break;
		case 3:show(L);break;
		case 4:dele_head(L);break;
		case 5:printf("输入插入节点值\n");scanf("%d",&a);insert_tail(L,a);break;
		case 6:printf("输入要插入的位置和值\n");scanf("%d%d",&pos,&a);
			   insert_pos(L,pos,a);break;
		case 7:printf("输入要删除的位置\n");scanf("%d",&pos);del_pos(L,pos);break;
		}
		
	}
	return 0;
}
