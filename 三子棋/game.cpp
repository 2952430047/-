#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
#include <time.h>
#include <stdlib.h>


//��Ϸ���
int gameb()
{
	int b = 0;
	printf("-----------------------------------\n");
	printf("-----------------------------------\n");
	printf("-----1.��ʼ��Ϸ-----0.�˳���Ϸ-----\n");
	printf("-----------------------------------\n");
	printf("-----------------------------------\n\n");
	printf("��ѡ��>>>:");
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
				printf("����");
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
//����
void my(char arrb[row][col], int row, int col)
{
	int i = 0;
	int j = 0;
	while (1)
	{
		printf("������Ҫ���ӵ�����>>>:");
		scanf("%d%d", &i,&j);
		printf("\n");
		if (i - 1 <= row && j - 1 <= col && arrb[i-1][j-1] == ' ')
		{
			arrb[i - 1][j - 1] = '*';
			break;
		}
		else if (i - 1 > row || j - 1 > col)
			printf("��������ȷ������\n\n");
		else
			printf("������λ���ѱ�ռ������������\n\n");
	}
}
//��������
void com(char arrb[row][col], int row, int col)
{
	printf("��������\n");
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

//�ж���Ӯ
int judgment(char arrb[row][col], int row, int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		if (arrb[i][0] == '*' && arrb[i][1] == '*' && arrb[i][2] == '*')
			return 1;//Ӯ
		else if (arrb[0][i] == '*' && arrb[1][i] == '*' && arrb[2][i] == '*')
			return 1;
		else if (arrb[0][0] == '*' && arrb[1][1] == '*' && arrb[2][2] == '*')
			return 1;
		else if (arrb[0][2] == '*' && arrb[1][1] == '*' && arrb[2][0] == '*')
			return 1;
		else if (arrb[i][0] == '#' && arrb[i][1] == '#' && arrb[i][2] == '#')
			return 2;//��
		else if (arrb[0][i] == '#' && arrb[1][i] == '#' && arrb[2][i] == '#')
			return 2;
		else if (arrb[0][0] == '#' && arrb[1][1] == '#' && arrb[2][2] == '#')
			return 2;
		else if (arrb[0][2] == '#' && arrb[1][1] == '#' && arrb[2][0] == '#')
			return 2;
	}
	if (arrb[0][0] != ' ' && arrb[0][1] != ' ' && arrb[0][2] != ' ' && arrb[1][1] != ' ' && arrb[1][0] != ' ' && arrb[1][2] != ' '&&arrb[2][1]!=' ' && arrb[2][0] != ' ' && arrb[2][2] != ' ')
		return 3;//ƽ
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