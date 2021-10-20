#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int p(int n)
{
	if (n >= 4)
		return p(n - 1) + p(n - 2);
	else
		return n;
//	//165580141
//	int i = 0;
//	int a = 0;
//	int b = 2;
//	int c = 3;
//	if (n <= 3)
//	{
//		printf("%d", n);
//		return;
//	}
//	else
//		for (i = 4; i <= n; i++)
//		{
//			a = b + c;
//			b = c;
//			c = a;
//		}
//	printf("%d", a);
  }
int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	i = p(n);
	printf("%d", i);
	return 0;
}