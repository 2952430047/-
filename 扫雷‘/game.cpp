#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void intiB(char arr[ROWS][COLS], int ROW,int COL, char set)
{
	int i, j;
	for (i = 1; i <= ROW; i++)
	{
		for (j = 0; j <= COL; j++)
		{
			arr[i][j] = set;
		}
	}
}

void printb(char arrl[ROWS][COLS], int ROW, int COL)
{
	for (int a = 0; a <= ROW; a++)
		printf("%d ", a);
	printf("\n");
	for (int i = 1; i <= ROW; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= COL; j++)
		{
			printf("%c ", arrl[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void cont(char arrl[ROWS][COLS], int ROW, int COL)
{
	int l = contt;
	do
	{
		int x =rand()%ROW+1;
		int y =rand()%COL+1;
		if (arrl[x][y] != '1')
		{
			arrl[x][y] = '1';
			l--;

		}
	} while (l!=0);
}
void sl(char arrl[ROWS][COLS],char arrs[ROWS][COLS], int ROW, int COL)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入你要扫雷的坐标>>:");
		scanf("%d%d", &x, &y);
		printf("\n");
		if (x <= ROW && y <= COL && arrl[x][y] != '1' && arrs[x][y] != '0')
		{
			int zl = zwl(arrl, ROWS, COLS, x, y);
			arrs[x][y] = zl;
			//
			rgzwl(arrs,arrl,zl,x,y,ROW,COL);
			//打印周围雷的数量
			printb(arrs, ROW, COL);
			printf("\n");
		}
		else if (arrl[x][y] == '1')//很遗憾youlose...
		{
			break;
		}
		else
			printf("请输入正确的坐标\n");
		//win
		int w = 0;
		for (int i = 1; i <= ROW; i++)
		{
			for (int j = 1; j <= COL; j++)
			{
				if (arrs[i][j] == '*')
					w++;
			}
		}
		if (w == contt)
		{
			printf("恭喜你 YOU WIN\n\n");
			break;
		}
	}
	if (arrl[x][y] == '1')//很遗憾youlose...
		printf("很遗憾youlose...\n\n");
}
//周围雷的个数
int zwl(char arrl[ROWS][COLS], int ROWS, int COLS,int x ,int y)
{
	char i = '0';
	if (arrl[x - 1][y - 1] == '1')
		i++;
	if (arrl[x - 1][y] == '1')
		i++;
	if (arrl[x - 1][y + 1] == '1')
		i++;
	if (arrl[x][y - 1] == '1')
		i++;
	if (arrl[x][y + 1] == '1')
		i++;
	if (arrl[x + 1][y - 1] == '1')
		i++;
	if (arrl[x + 1][y] == '1')
		i++;
	if (arrl[x + 1][y + 1] == '1')
		i++;
	return i;
}
void rgzwl(char arrs[ROWS][COLS], char arrl[ROWS][COLS], int zl, int x, int y ,int ROW,int COL)
{
	if (zl==0)
	{
		arrl[x - 1][y + 1] = zwl(arrl, ROWS, COLS, x, y);
		
		arrl[x + 1][y - 1] = zwl(arrl, ROWS, COLS, x, y);
		
		
		if (x-1<1&&y-1<1)
		{
			arrl[x + 1][y + 1] = zwl(arrl, ROWS, COLS, x, y);
			arrl[x + 1][y] = zwl(arrl, ROWS, COLS, x, y);
			arrl[x][y + 1] = zwl(arrl, ROWS, COLS, x, y);
		}
		if (x + 1 < ROW && y + 1 < COL)
		{
			arrs[x - 1][y - 1] = zwl(arrl, ROWS, COLS, x, y);
			arrl[x - 1][y] = zwl(arrl, ROWS, COLS, x, y);
			arrl[x][y - 1] = zwl(arrl, ROWS, COLS, x, y);
		}
		
		
		
	}
}