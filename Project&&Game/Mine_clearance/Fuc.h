#pragma once
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 11
#define COL 11
#define P_ROW 9
#define P_COL 9
#define Mine_number 10
//原创 github&gitee->liu
void menu();
void init(char map[][COL], int row, int col, char set);
void Display(char map[][COL], int p_row, int p_col);
int CheckCoordinate(char map[][COL], int x, int y, char set);
void RandomMine(char map[][COL]);
int getMineNumber(char map[][COL], int x, int y);
int Mine(char map[][COL], int x, int y);


