#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
int meun()
{
	int i = 0;
	printf("----------------------------\n");
	printf("---------1.��ʼ��Ϸ---------\n");
	printf("---------0.�˳���Ϸ---------\n");
	printf("----------------------------\n");
	scanf("%d",&i);
	printf("\n");
	return i;
}
int main()
{
	srand((unsigned)time(NULL));
	//ѡ���Ƿ�ʼ��Ϸ
	while (1)
	{
		//�˵�
		int a = meun();
		if (a == 1)
		{
			printf("��ʼ��Ϸ\n\n");
			//���׵�����
			char arrl[ROWS][COLS] = { 0 };
			//��ӡ������
			char arrs[ROWS][COLS] = { 0 };
			//��ʼ������
			char l = '*';
			char s = '0';
			intiB(arrl,ROW,COL,s);
			intiB(arrs,ROW,COL,l);
			//������
			cont(arrl,ROW,COL);
			//��ӡ����
			printb(arrl, ROW, COL);
			printb(arrs, ROW, COL);
			//ɨ��
			sl(arrl,arrs,ROW, COL);
		}
		else if (a == 0)
			break;
		else
			printf("������0/1");
	}
	return 0;
}