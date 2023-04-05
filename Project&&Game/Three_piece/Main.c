#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3
void menu()
{
    printf("********************\t\n");
    printf("**1       进入游戏**\t\n");
    printf("**0       退出游戏**\t\n");
    printf("********************\t\n");
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
int JudgePlayerWin(char chessBoard[][ROW], int col, int row)//判断玩家胜利函数
{

    for (int i = 0; i < col; i++)
    {
        if (((chessBoard[i][0] == 'O') && (chessBoard[i][1] == 'O') && (chessBoard[i][2] == 'O')))
        {
            return 1;
        }
    }
    for (int b = 0; b < row; b++)
    {
        if (((chessBoard[0][b] == 'O') && (chessBoard[1][b] == 'O') && (chessBoard[2][b] == 'O')))
        {
            return 1;
        }
    }
    if (((chessBoard[0][0] == 'O') && (chessBoard[1][1] == 'O') && (chessBoard[2][2] == 'O')))
    {
        return 1;
    }
    if (((chessBoard[0][2] == 'O') && (chessBoard[1][1] == 'O') && (chessBoard[2][0] == 'O')))
    {
        return 1;
    }
    return 0;
}

int JudgeAIWin(char chessBoard[][ROW], int col, int row)//判断电脑胜利函数
{

    for (int i = 0; i < col; i++)
    {
        if (((chessBoard[i][0] == 'X') && (chessBoard[i][1] == 'X') && (chessBoard[i][2] == 'X')))
        {
            return 1;
        }
    }
    for (int b = 0; b < row; b++)
    {
        if (((chessBoard[0][b] == 'X') && (chessBoard[1][b] == 'X') && (chessBoard[2][b] == 'X')))
        {
            return 1;
        }
    }
    if (((chessBoard[0][0] == 'X') && (chessBoard[1][1] == 'X') && (chessBoard[2][2] == 'X')))
    {
        return 1;
    }
    if (((chessBoard[0][2] == 'X') && (chessBoard[1][1] == 'X') && (chessBoard[2][0] == 'X')))
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
            int count = 0;//计算下棋的步数，判断棋盘是否满了
            while (1)
            {
                int x = 0, y = 0;

                while (1)
                {
                    printf("输入坐标下棋\n");
                    scanf("%d %d", &x, &y);
                    if (judgeCoordinateNull(ChessBoard, x, y) == 0)
                    {
                        ChessBoard[x - 1][y - 1] = 'O';
                        count++;
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
                if (count == 9)
                {
                    printf("和局\n");
                    break;
                }
                printf("电脑下棋中........\n");
                while (1)
                {
                    srand((unsigned int)time(NULL));
                    ; // 根据时间当做每次生成随机数的种子，确保每次生成的随机数不一样
                    x = (rand() % 4) + 1;
                    y = (rand() % 4) + 1;
                    if (judgeCoordinateNull(ChessBoard, x, y) == 0)
                    {
                        ChessBoard[x - 1][y - 1] = 'X';
                        count++;
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