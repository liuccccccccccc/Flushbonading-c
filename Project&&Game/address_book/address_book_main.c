#include "address_book_function.h"
#pragma warning(disable : 4996)

int main()
{
    menu();
    int input, number = 0;
    char temp[20];
    struct memberMessage member[capacity] = {0};
    do
    {
        printf("请输入操作的序号\n");
        rewind(stdin);
        scanf("%d", &input);
        switch (input)
        {
        case ex:
            printf("退出通讯录\n");
            break;
        case init:
            while (1)
            {
                printf("请输入你要输入多少个联系人\n");
                scanf("%d", &number);
                if (number <= 1000)
                {
                    break;
                }
                printf("联系人不能多余1000，重新输入\n");
            }
            memset(member, 0, sizeof(member));
            init_function(member, number);
            break;
        case add:
            if (number >= 1000)
            {
                printf("容量已达上限\n");
                break;
            };
            add_function(member, &number);
            break;
        case dele:
            printf("输入电话，根据电话删除联系人\n");
            rewind(stdin);
            gets(temp);
            int i = dele_function(member, temp, &number);
            if (i == 0)
            {
                printf("通讯录中没有你要删除的联系人\n");
            }
            else
            {
                printf("删除成功！\n");
            }
            break;
        case modify:
            printf("输入电话，根据电话修改联系人信息\n");
            rewind(stdin);
            gets(temp);
            i = modify_funciton(member, temp, number);
            if (i == 0)
            {
                printf("没有找到对应的联系人，请检查输入数据\n");
            }
            else
            {
                printf("修改成功！\n");
            }
            break;
        case search:
            printf("请输入要查找联系人的手机号\n");
            rewind(stdin);
            gets(temp);
            Mess *sp = search_function(member, temp, number);
            if (sp == NULL)
            {
                printf("未在通讯录中找到对应的联系人\n");
            }
            else
            {
                printf("查找到的联系人信息：\n%-10s %-6s %-30s %-6s %-20s\n", "姓名", "年龄", "地址", "性别", "电话");
                printf("%-10s %-6d %-30s %-6s %-20s\n输入修改信息\n", sp->name, sp->age, sp->address, sp->sex, sp->tele);
            }
            break;
        case sort:
            printf("1******按年龄排序\n");
            printf("2******按姓名排序\n");
            int ii;
            scanf("%d", &ii);
            switch (ii)
            {
            case 1:
                sortage_function(member, number);
                printf("按年龄从小到大排序成功！\n");
                break;
            case 2:
                sortname_function(member, number);
                printf("按名字从小到大排序成功！\n");
                break;
            default:
                printf("指令错误排序失败\n");
                break;
            }
            break;
        case display:
            display_function(member, number);
            break;
        default:
            printf("你输入的序号不合法请重新输入\n");
            break;
        }
    } while (input);

    return 0;
}