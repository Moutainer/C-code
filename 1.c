#include<stdio.h>
#define N 3
#define M 2
void transfer_matrix(int a[M][N], int trans_a[N][M]);
void transfer_square(int a[M][M]);
int main()
{
	int a[M][N];
	int trans_a[N][M] = {0};
	int a1[M][M];
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf("%d", &a1[i][j]);
		}
	}
	//测试不同输入有没有影响
	for (int i = 0; i < M; i++)
	{
		printf("\n");
		for (int j = 0; j < N; j++)
		{
			printf("%d ", a[i][j]);
		}
	}
	//转秩函数
	transfer_matrix(a, trans_a);
	transfer_square(a1);
	return 0;
}
	void transfer_matrix(int a[M][N], int trans_a[N][M])
	{
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				/*
				int temp;
				temp = a[i][j];
				a[i][j] = trans_a[j][i];
				trans_a[j][i] = temp;
				*/
				trans_a[j][i] = a[i][j];
			}
		}
		for (int i = 0; i < N; i++)
		{
			printf("\n");
			for (int j = 0; j < M; j++)
			{
				printf("%d ", trans_a[i][j]);
			}
		}
	}
	void transfer_square(int a[M][M])
	{
		for (int i = 1; i < M; i++)
		{
			for (int j = 0; j < i; j++)
			{
				int temp;
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
			}
		}
		for (int i = 0; i < M; i++)
		{
			printf("\n");
			for (int j = 0; j < M; j++)
			{
				printf("%d ", a[i][j]);
			}
		}
	}