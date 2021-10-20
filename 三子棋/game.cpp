#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
#include <time.h>
#include <stdlib.h>


//游戏框架
int gameb()
{
	int b = 0;
	printf("-----------------------------------\n");
	printf("-----------------------------------\n");
	printf("-----1.开始游戏-----0.退出游戏-----\n");
	printf("-----------------------------------\n");
	printf("-----------------------------------\n\n");
	printf("请选择>>>:");
	scanf("%d", &b);
	printf("\n");
	if (b == 1)
		return 1;
	else if (b == 0)
		return 0;
	else
		return 2;
}

void intib(char arr[row][col], int row, int col)
{
	int i, j = 0;
	for (i=0; i < row; i++)
	{
		for (j=0; j < col; j++)
		{
			arr[i][j] =' ';
		}
	}
			
}

void printb(char arrb[row][col], int row, int col)
{
	int i, j;
	for (i=0; i < row; i++)
	{
		if (i != 0)
		{
			for (int b = 1; b <= row; b++)
			{
				printf("——");
			}
			printf("\n");
		}
			
		for (j=0; j < col; j++)
		{
			if (j != 0)
				printf("|");
			printf(" %c ",arrb[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
//下子
void my(char arrb[row][col], int row, int col)
{
	int i = 0;
	int j = 0;
	while (1)
	{
		printf("输入您要下子的坐标>>>:");
		scanf("%d%d", &i,&j);
		printf("\n");
		if (i - 1 <= row && j - 1 <= col && arrb[i-1][j-1] == ' ')
		{
			arrb[i - 1][j - 1] = '*';
			break;
		}
		else if (i - 1 > row || j - 1 > col)
			printf("请输入正确的坐标\n\n");
		else
			printf("此坐标位置已被占用请重新下子\n\n");
	}
}
//电脑下子
void com(char arrb[row][col], int row, int col)
{
	printf("电脑下子\n");
	srand((unsigned)time(NULL));
	while (1)
	{
		int a = rand() % 3; int b = rand() % 3;
		if (arrb[a][b] == ' ')
		{
			arrb[a][b] = '#';
			break;
		}
	}
	printf("\n");
}

//判断输赢
int judgment(char arrb[row][col], int row, int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		if (arrb[i][0] == '*' && arrb[i][1] == '*' && arrb[i][2] == '*')
			return 1;//赢
		else if (arrb[0][i] == '*' && arrb[1][i] == '*' && arrb[2][i] == '*')
			return 1;
		else if (arrb[0][0] == '*' && arrb[1][1] == '*' && arrb[2][2] == '*')
			return 1;
		else if (arrb[0][2] == '*' && arrb[1][1] == '*' && arrb[2][0] == '*')
			return 1;
		else if (arrb[i][0] == '#' && arrb[i][1] == '#' && arrb[i][2] == '#')
			return 2;//输
		else if (arrb[0][i] == '#' && arrb[1][i] == '#' && arrb[2][i] == '#')
			return 2;
		else if (arrb[0][0] == '#' && arrb[1][1] == '#' && arrb[2][2] == '#')
			return 2;
		else if (arrb[0][2] == '#' && arrb[1][1] == '#' && arrb[2][0] == '#')
			return 2;
	}
	if (arrb[0][0] != ' ' && arrb[0][1] != ' ' && arrb[0][2] != ' ' && arrb[1][1] != ' ' && arrb[1][0] != ' ' && arrb[1][2] != ' '&&arrb[2][1]!=' ' && arrb[2][0] != ' ' && arrb[2][2] != ' ')
		return 3;//平
}


//int judgment(char arrb[row][col], int row, int col)
//{
//	int i, j;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (arrb[i][0] == '*' && arrb[i][1] == '*' && arrb[i][2] == '*')
//				return 1;
//		}
//	}
//}