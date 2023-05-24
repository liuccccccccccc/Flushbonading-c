#include"address_book_function.h"
#pragma warning(disable:4996)

void menu()//打印菜单
{
	printf("0**************退出通讯录\n");
	printf("1**************初始化通讯录\n");
	printf("2**************添加联系人\n");
	printf("3**************删除联系人\n");
	printf("4**************修改联系人信息\n");
	printf("5**************查找联系人信息\n");
	printf("6**************排序\n");
	printf("7**************展示\n");

}
Mess* search_function(const Mess* a, const char* ptele, int number)//查找联系人信息函数
{
	assert(a && ptele);
	for (int i = 0; i < number; i++)
	{
		if (strcmp((a+i)->tele, ptele) == 0)
		{
			return a + i;
		}

	}
	return NULL;
}
void init_function(struct memberMessage* member, int number)//初始化通讯录函数
{
	assert(member != NULL);
	for (int i = 0; i < number; i++)
	{
		rewind(stdin);
		printf("请输入第%d个联系人姓名:",i+1); gets((member + i)->name);
		printf("请输入第%d个联系人地址:", i + 1); gets((member + i)->address);
		printf("请输入第%d个联系人性别:", i + 1); gets((member + i)->sex);
		printf("请输入第%d个联系人电话:", i + 1); gets((member + i)->tele);
		printf("请输入第%d个联系人年龄:", i + 1); scanf("%d",&((member+i)->age));
		printf("\n");
	}
}
void add_function(Mess* member,int *a)//增加联系人函数
{
	assert(member && a);
	rewind(stdin);
	int i = *a;
	printf("请输入联系人姓名:"); gets((member + i)->name);
	printf("请输入联系人地址:"); gets((member + i)->address);
	printf("请输入联系人性别:"); gets((member + i)->sex);
	printf("请输入联系人电话:"); gets((member + i)->tele);
	printf("请输入联系人年龄:"); scanf("%d", &((member + i)->age));
	printf("\n");
	*a = *a + 1;
}
void display_function(const struct memberMessage* member, int number)//展示通讯录函数
{
	assert(member != NULL);
	printf("%-10s %-6s %-30s %-6s %-20s\n", "姓名", "年龄", "地址", "性别", "电话");
	for (int i = 0; i < number; i++)
	{
		printf("%-10s %-6d %-30s %-6s %-20s\n", (member + i)->name, (member + i)->age, (member + i)->address, (member + i)->sex, (member + i)->tele);
	}
}
int dele_function(Mess* member, const char* ptele, int* pnumber)//删除联系人函数
{
	assert(member && ptele);
	Mess* p = search_function(member, ptele, *pnumber);
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		int loac = (p - member)+1;
		int temp = *pnumber - loac;
		for (int i = 0; i < temp; i++)
		{
			strcpy((p + i)->address, (p + i + 1)->address);
			strcpy((p + i)->name, (p + i + 1)->name);
			strcpy((p + i)->tele, (p + i + 1)->tele);
			strcpy((p + i)->sex, (p + i + 1)->sex);
			(p + i)->age= (p + i + 1)->age;
		}
		(*pnumber)--;
		return 1;
	}


}
int modify_funciton(Mess* member, const char* plete, int number)//修改联系人信息函数
{
	assert(member && plete);
	Mess* p = search_function(member, plete, number);
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		printf("被修改人信息：\n%-10s %-6s %-30s %-6s %-20s\n", "姓名", "年龄", "地址", "性别", "电话");
		printf("%-10s %-6d %-30s %-6s %-20s\n输入修改信息\n", p->name, p->age, p->address, p->sex, p->tele);
		rewind(stdin);
		printf("请输入联系人姓名:"); gets(p->name);
		printf("请输入联系人地址:"); gets(p->address);
		printf("请输入联系人性别:"); gets(p->sex);
		printf("请输入联系人电话:"); gets(p->tele);
		printf("请输入联系人年龄:"); scanf("%d", &p->age);
		return 1;
	}
}

void sortage_function(Mess* member, int number)//按年龄从小到大排序
{
	for (int i = 0; i < number-1; i++)
	{
		for (int j = 0; j < number - i - 1; j++)
		{
			if ((member + j)->age > (member + j + 1)->age)
			{
				Mess temp = *(member + j);
				*(member + j) = *(member + j + 1);
				*(member + j + 1) = temp;
			}
		}
	}
}


void sortname_function(Mess* member, int number)//按姓名从小到大排序
{
	for (int i = 0; i < number - 1; i++)
	{
		for (int j = 0; j < number - i - 1; j++)
		{
			if (strcmp((member+j)->name,(member+j+1)->name)>0)
			{
				Mess temp = *(member + j);
				*(member + j) = *(member + j + 1);
				*(member + j + 1) = temp;
			}
		}
	}
}