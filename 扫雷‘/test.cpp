#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
int meun()
{
	int i = 0;
	printf("----------------------------\n");
	printf("---------1.开始游戏---------\n");
	printf("---------0.退出游戏---------\n");
	printf("----------------------------\n");
	scanf("%d",&i);
	printf("\n");
	return i;
}
int main()
{
	srand((unsigned)time(NULL));
	//选择是否开始游戏
	while (1)
	{
		//菜单
		int a = meun();
		if (a == 1)
		{
			printf("开始游戏\n\n");
			//放雷的盘子
			char arrl[ROWS][COLS] = { 0 };
			//打印的盘子
			char arrs[ROWS][COLS] = { 0 };
			//初始化盘子
			char l = '*';
			char s = '0';
			intiB(arrl,ROW,COL,s);
			intiB(arrs,ROW,COL,l);
			//布置雷
			cont(arrl,ROW,COL);
			//打印盘子
			printb(arrl, ROW, COL);
			printb(arrs, ROW, COL);
			//扫雷
			sl(arrl,arrs,ROW, COL);
		}
		else if (a == 0)
			break;
		else
			printf("请输入0/1");
	}
	return 0;
}