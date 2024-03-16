#include"seq.h"
void  list()
{
	printf("0**********退出\n");
	printf("1**********创建\n");
	printf("2**********头插\n");
	printf("3**********头删\n");
	printf("4**********尾插\n");
	printf("5**********尾删\n");		
	printf("6**********展示表中数据\n");	
	printf("7**********按位置插入数据\n");	
	printf("8**********按位置删除数据\n");	
	printf("9**********按位置查找数据\n");
	printf("10*********查找值并且替换\n");
	printf("11*********查找值的下标\n");
	printf("12*********清空顺序表\n");
	printf("13*********释放顺序表\n");
	printf("14*********删除重复元素\n");
}

seq_p create_seqtab()//创建顺序表
{
	seq_p L=(seq_p)malloc(sizeof(seq));
	if(L==NULL)
	{
		printf("create error\n");
		return NULL;
	}
	L->len=0;
	return L;
}
int judge_NULL(seq_p L)//判断是否为空
{
	if(L==NULL)
	{
		printf("未创建顺序表\n");
		return -1;
	}
	return  L->len==0?1:0;
}
int judge_FULL(seq_p L)//判断是否为满
{
	if(L==NULL)
	{
		printf("未创建顺序表\n");
		return -1;
	}
	return L->len==10?1:0;
}
void insert_head(seq_p L,int n)//头插
{
	if(L==NULL)
	{
		printf("未创建顺序表\n");
		return;
	}
	if(L->len==10)
	{
		printf("顺序表已满\n");
		return ;
	}
	for(int i=L->len;i>0;i--)
	{
		L->datatable[i]=L->datatable[i-1];
	}
	L->datatable[0]=n;
	L->len++;
}
void show(seq_p L)//展示
{
	if(L==NULL)
	{
		printf("未创建\n");
		return;
	}
	for(int i=0;i<L->len;i++)
	{
		printf("%d ",L->datatable[i]);
	}
	putchar(10);
}
void insert_end(seq_p L,int n)//尾插
{
	if(L==NULL)
	{
		printf("未创建顺序表\n");
		return;
	}
	if(judge_FULL(L))
	{
		printf("已满\n");
		return ;
	}
	L->datatable[L->len]=n;
	L->len++;

}
void delete_head(seq_p L)//头删
{
	if(L==NULL)
	{
		printf("未创建顺序表\n");
		return;
	}
	if(judge_NULL(L))
	{
		printf("为空不能删除\n");
		return;
	}
	for(int i=0;i<L->len-1;i++)
	{
		L->datatable[i]=L->datatable[i+1];
	}
	L->len--;
}
void delete_tail(seq_p L)//尾删
{
	if(L==NULL)
	{
		printf("未创建顺序表\n");
     return;
	}
	if(judge_NULL(L))
	{
		printf("表为空不能删除\n");
	}
	L->len--;
}
 void insert_key(seq_p L,int key,int value)//按位置插入
{
	if(L==NULL)
	{
		printf("未创建顺序表\n");
		return;
	}
	if(judge_FULL(L))
	{
		printf("已满\n");
		return;
	}
	if(key>L->len||key<=0)
	{
		printf("插入位置不合法\n");
		return;
	}
	for(int i=L->len;i>key-1;i--)
	{
		L->datatable[i]=L->datatable[i-1];
	}
	L->datatable[key-1]=value;
	L->len++;
}
void delete_key(seq_p L,int key)//按位置删除
{
	if(L==NULL)
	{
		printf("未创建顺序表\n");
		return;
	}
	if(judge_NULL(L))
	{
		printf("表为空不能删除\n");
		return;
	}
	if(key>L->len||key<=0)
	{
		printf("输入位置不合法\n");
		return;
	}
	for(int i=key-1;i<L->len-1;i++)
	{
		L->datatable[i]=L->datatable[i+1];
	}
	L->len--;
}
int  search_key(seq_p L,int key)//按位置查找值
{
	if(L==NULL)
	{
		printf("顺序表未创建\n");
		return -1;
	}
	if(key>L->len||key<=0)
	{
		printf("位置不合法\n");
		return -1;
	}
	return L->datatable[key-1];

}
int search_key_mode(seq_p L,int n,int b)//按值查找并且修改
{
	if(L==NULL)
	{
		printf("顺序表未创建\n");
		return -1;
	}
	for(int i=0;i<L->len;i++)
	{
		if(L->datatable[i]==n)
		{
			L->datatable[i]=b;
		}
	}

}
int search_value(seq_p L,int n)//按值查下标
{
	if(L==NULL)
	{
		return -1;
	}
	int flag=-2;
	for(int i=0;i<L->len;i++)
	{
		if(L->datatable[i]==n)
		{
			flag=i;
			break;
		}
	}
	return flag;

}
void empty_seq(seq_p L)//清空顺序表
{
	if(L==NULL)
	{
		printf("未创建顺序表\n");
		return;
	}
	L->len=0;
}
void rela_seq(seq_p L)//释放顺序表
{
	if(L==NULL)
	{
		printf("未创建顺序表\n");
	}
	free(L);
}
void remove_dub(seq_p L)//去除重复元素
{
	if(L==NULL)
	{
	  printf("顺序表未创建\n");
	  return;
	}
	int t,count=0;
	for(int i=0;i<L->len;i++)
	{
		t=0;
		for(int j=i+1;j<L->len;j++)
		{
			if(L->datatable[i]==L->datatable[j])
			{
				t=1;
				break;
			}

		}
		if(t==0)
		{
			L->datatable[count++]=L->datatable[i];
		}
	}
	L->len=count;

}
