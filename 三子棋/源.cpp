#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"


int main()
{
	
	while (1)
	{
		//����������Ϣ
		char arrb[row][col] = {0};
		//��ʼ��������ϢΪ�ո�
		intib(arrb, row, col);
		int b = gameb();//��Ϸ���
		if (b == 1)
		{
			//��Ϸ��ʼ
			printf("��Ϸ��ʼ\n\n");
			//��ӡ����
			printb(arrb, row, col);
			//�㷨ʵ��
			while (1)
			{
				//����
				my(arrb, row, col);
				//��ӡ����
				printb(arrb, row, col);
				//�ж���Ӯ
				if (judgment(arrb, row, col) == 1)
				{
					printf("��Ӯ��\n");
					break;
				}
				else if (judgment(arrb, row, col) == 2)
				{
					printf("������\n");
					break;
				}
				else if (judgment(arrb, row, col) == 3)
				{
					printf("ƽ��\n");
					break;
				}
				//��������
				com(arrb, row, col);
				//��ӡ����
				printb(arrb, row, col);
				//�ж���Ӯ
				judgment(arrb, row, col);
				if (judgment(arrb, row, col) == 2)
				{
					printf("������\n");
					break;
				}
			}
		}
		else if (b == 0)
			break;
		else
			printf("��������ȷ������\n");
	}
	return 0;
}