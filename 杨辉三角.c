#include<stdio.h>
#define N 10
int main()
{
	int a[N][N] = {0};
	//���Ƚ�ÿһ�еĵ�һ������0
	for (int i = 0; i < N; i++)
	{
		a[i][N] = 1;
		a[i][i] = 1;
	}
	//��ѭ����ӡ�������
	for (int i = 1; i < N; i++)
	{
		for (int j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	for (int i = 0; i < N; i++)
	{
		
		for (int j = 0; j <= i; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

