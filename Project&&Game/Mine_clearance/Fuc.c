#include"Fuc.h"
//原创 github&gitee->liu
void menu()
{
	printf("********************\t\n");
	printf("**1       进入游戏**\t\n");
	printf("**0       退出游戏**\t\n");
	printf("********************\t\n");
}
void init(char map[][COL], int row, int col, char set)//初始化函数
{
	for (int i = 0; i < row; i++)
	{
		for (int b = 0; b < col; b++)
		{
			map[i][b] = set;
		}
	}
}

void Display(char map[][COL], int p_row, int p_col)//输出数组函数
{
	for (int i = 1; i <=p_row; i++)
	{
		for (int b = 1; b <= p_col; b++)
		{
			printf("%c ", map[i][b]);
		}
		printf("\n");
	}
}
void RandomMine(char map[][COL])//生成10对随机数，对应二维数组的十对坐标，并且赋值为1，表示雷（生成10个随机位置的雷）
{
	int x;
	int y;
	for (int i = 0; i < 10; i++)
	{
		while (1)
		{
        srand((unsigned int)time(NULL));// 根据时间当做每次生成随机数的种子，确保每次生成的随机数不一样
		x = (rand() % 9) + 1;
		y = (rand() % 9) + 1;
		if (CheckCoordinate(map, x, y, '0') == 0)
		{
			break;
		}
		}
		map[x][y] = '1';
		
	}

}
int getMineNumber(char map[][COL],int x,int y)//得到玩家输入坐标位置的周围8个坐标的雷的数量
{
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		if (map[x - 1][y - 1 + i] == '1')
		{
			count++;
		}
	}
	for (int a = 0; a < 3; a++)
	{
		if (map[x + 1][y - 1 + a] == '1')
		{
			count++;
		}
	}
	if (map[x][y - 1] == '1')
	{
		count++;
	}
	if (map[x][y + 1] == '1')
	{
		count++;
	}

	return count;
}

int Mine(char map[][COL], int x, int y)//判断坐标是否为雷
{
	if (map[x][y] == '1')
	{
		return 1;
	}
	return 0;
}


int CheckCoordinate(char map[][COL],int x,int y,char set)//检测坐标的合法性
{
	if ((x < 1 || x>9) || (y < 1 || y>9))
	{
		return 1;
	}
	if (map[x][y] != set)
	{
		return 1;
	}
	return 0;
}

