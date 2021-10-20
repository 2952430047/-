#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"


int main()
{
	
	while (1)
	{
		//创建棋盘信息
		char arrb[row][col] = {0};
		//初始化棋盘信息为空格
		intib(arrb, row, col);
		int b = gameb();//游戏框架
		if (b == 1)
		{
			//游戏开始
			printf("游戏开始\n\n");
			//打印棋盘
			printb(arrb, row, col);
			//算法实现
			while (1)
			{
				//下子
				my(arrb, row, col);
				//打印棋盘
				printb(arrb, row, col);
				//判断输赢
				if (judgment(arrb, row, col) == 1)
				{
					printf("你赢了\n");
					break;
				}
				else if (judgment(arrb, row, col) == 2)
				{
					printf("你输了\n");
					break;
				}
				else if (judgment(arrb, row, col) == 3)
				{
					printf("平局\n");
					break;
				}
				//电脑下子
				com(arrb, row, col);
				//打印棋盘
				printb(arrb, row, col);
				//判断输赢
				judgment(arrb, row, col);
				if (judgment(arrb, row, col) == 2)
				{
					printf("你输了\n");
					break;
				}
			}
		}
		else if (b == 0)
			break;
		else
			printf("请输入正确的数字\n");
	}
	return 0;
}