#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
void menu()
{
    printf("************************\n");
    printf("****1         进入游戏***\n");
    printf("****0         退出游戏***\n");
    printf("************************\n");
}

void init(char chessBoard[][ROW], int col, int row) // 初始化数组内容
{
    for (int i = 0; i < col; i++)
    {
        for (int b = 0; b < row; b++)
        {
            chessBoard[i][b] = ' ';
        }
    }
}

void Print(char chessBoard[][ROW], int col, int row) // 打印棋盘
{
    for (int i = 0; i < col; i++)
    {
        for (int b = 0; b < row; b++)
        {
            printf("%c", chessBoard[i][b]);
            if (b < 2)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i < 2)
        {
            printf("-|-|-\n");
        }
    }
}
int judgeCoordinateNull(char chessBoard[][ROW], int x, int y) // 检测坐标的合法性
{
    if ((x > 3 || y > 3) || (x < 1 || y < 1))
    {
        return 1;
    }
    if (chessBoard[x - 1][y - 1] != ' ')
    {
        return 1;
    }
    return 0;
}
int JudgePlayerWin(char chessBoard[][ROW], int col, int row)
{

    for (int i = 0; i < col; i++)
    {
        if (((chessBoard[i][0] == '*') && (chessBoard[i][1] == '*') && (chessBoard[i][2] == '*')))
        {
            return 1;
        }
    }
    for (int b = 0; b < row; b++)
    {
        if (((chessBoard[0][b] == '*') && (chessBoard[1][b] == '*') && (chessBoard[2][b] == '*')))
        {
            return 1;
        }
    }
    if (((chessBoard[0][0] == '*') && (chessBoard[1][1] == '*') && (chessBoard[2][2] == '*')))
    {
        return 1;
    }
    if (((chessBoard[0][2] == '*') && (chessBoard[1][1] == '*') && (chessBoard[2][0] == '*')))
    {
        return 1;
    }
    return 0;
}

int JudgeAIWin(char chessBoard[][ROW], int col, int row)
{

    for (int i = 0; i < col; i++)
    {
        if (((chessBoard[i][0] == '#') && (chessBoard[i][1] == '#') && (chessBoard[i][2] == '#')))
        {
            return 1;
        }
    }
    for (int b = 0; b < row; b++)
    {
        if (((chessBoard[0][b] == '#') && (chessBoard[1][b] == '#') && (chessBoard[2][b] == '#')))
        {
            return 1;
        }
    }
    if (((chessBoard[0][0] == '#') && (chessBoard[1][1] == '#') && (chessBoard[2][2] == '#')))
    {
        return 1;
    }
    if (((chessBoard[0][2] == '#') && (chessBoard[1][1] == '#') && (chessBoard[2][0] == '#')))
    {
        return 1;
    }
    return 0;
}

int main()
{
    int input = 0;
    do
    {
        menu();
        char ChessBoard[COL][ROW];
        init(ChessBoard, COL, ROW);
        printf("请输入你要进行的操作\n");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            Print(ChessBoard, COL, ROW);
            while (1)
            {
                int x = 0, y = 0;
                int count=0;
                while (1)
                {
                    printf("输入坐标下棋\n");
                    scanf("%d %d", &x, &y);
                    if (judgeCoordinateNull(ChessBoard, x, y) == 0)
                    {
                        ChessBoard[x - 1][y - 1] = '*';count++;
                        break;
                    }
                    else
                    {
                        printf("你输入的坐标不合法，重新输入\n");
                    }
                }
                Print(ChessBoard, COL, ROW);
                if (JudgePlayerWin(ChessBoard, ROW, COL) == 1)
                {
                    printf("玩家胜利！\n");
                    system("pause");
                    break;
                }
                if(count==9)
                {
                    printf("和局\n");break;
                }
                while(1)
                {
                    srand((unsigned int)time(NULL));; // 根据时间当做每次生成随机数的种子，确保每次生成的随机数不一样
                    x = (rand() % 4)+1 ;
                    y = (rand() % 4)+1;
                    if (judgeCoordinateNull(ChessBoard, x, y) == 0)
                    {
                        ChessBoard[x - 1][y - 1] = '#';count++;
                        break;
                    }
                }
                printf("电脑下棋\n");
                Print(ChessBoard, COL, ROW);
               if (JudgeAIWin(ChessBoard, ROW, COL) == 1)
                {
                    printf("电脑胜利！\n");
                    system("pause");
                    break;
                }

            }

            break;
        case 0:
            break;
        default:
            printf("输入的数字不对，请重新输入\n");
        }
    } while (input);

    system("pause");
    return 0;
}