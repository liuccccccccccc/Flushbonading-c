#include"seq.h"
int main(int argc, const char *argv[])
{
	seq_p L=NULL;
	int n,a,key;
	list();
	while(1)
	{
		printf("输入操作数\n");
		scanf("%d",&n);
		if(n==0)
		{
			printf("退出成功\n");
			break;
		}
		switch(n)
		{
		case 1:L=create_seqtab();break;
		case 2:printf("请输入插入数据\n");
			   scanf("%d",&a);insert_head(L,a);break;
		case 3:delete_head(L);break;
        case 4:printf("请输入插入的数据\n");
			   scanf("%d",&a);insert_end(L,a);break;
	    case 5:delete_tail(L);break;
		case 6:show(L);break;
		case 7:printf("请输入插入的位置和数据\n");scanf("%d%d",&key,&a);
			   insert_key(L,key,a);break;
        case 8:printf("请输入删除的位置\n");scanf("%d",&key);
			   delete_key(L,key);break;
		case 9:printf("输入查找的位置\n");scanf("%d",&key);
			   if(search_key(L,key)!=-1)
			   {
				   printf("%d\n",search_key(L,key));
			   }break;
		case 10:printf("输入查找的值和替换的值\n");scanf("%d%d",&key,&a);
				search_key_mode(L,key,a);break;
		case 11:printf("输入你要查找的值\n");scanf("%d",&a);
				int c=search_value(L,a);
				if(c==-1)
				{
					printf("顺序表未创建\n");
				}
				else if(c==-2)
				{
					printf("表中没有该值\n");
				}
				else {printf("下标为：%d\n",c);}
				break;
		case 12:empty_seq(L);break;
		case 13:rela_seq(L);L=NULL;break;
		case 14:remove_dub(L);break;
		}
		
	}

	return 0;
}
