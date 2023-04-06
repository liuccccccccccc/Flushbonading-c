#include"Fuc.h"
//原创 github&gitee->liu
int main()
{
	int input=0;
	do 
	{
		int x=0;
		int y=0;
    char map[ROW][COL];//用于存放雷的数组
	char show_map[ROW][COL];//用于存放展示给玩家，周围雷的数量的数组
	menu();
	printf("请输入你要进行哪步操作\n");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		init(map, ROW, COL, '0');
		RandomMine(map);
		int count = 0;
		init(show_map, ROW, COL, '*');
		Display(map, P_ROW, P_COL);
		Display(show_map, P_ROW, P_COL);
		while (1)
		{
		printf("请输入你要扫雷的坐标\n");
		while (1)
		{
			scanf("%d %d", &x, &y);
			if (CheckCoordinate(show_map, x, y, '*') == 0)
			{
				count++;break; 
			}
			printf("你输入的坐标不合法，重新输入\n");

		}

		if (Mine(map, x, y) == 1)
		{
			printf("你踩到雷了！！！！！\n游戏结束\n");
			break;
		}
		int number = getMineNumber(map, x, y);
		show_map[x][y] =number+0x30;
		Display(show_map, P_ROW, P_COL);
		if (count == 71)
		{
			printf("恭喜你，扫除了全部的雷！！！\n"); break;
		}

		}
		
		
		
		 break;
	case 0:
		printf("退出游戏成功\n"); break;
	default:
		printf("输入数据不合法请重新输入\n");
	}
	} 
	while (input);
	return 0;


}