#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void Goldbach(int num,int *a, int *b);
int isPrime(int m);
int main(void)
{
	int a = 0;
	int b = 0;
	for (int i = 2; i <= 1000; i += 2)
	{
		Goldbach(i, &a, &b);
		printf("%d %d %d\n", i, a, b);
	}
	
	system("pause");
	return 0;
}
void Goldbach(int num,int* a, int* b)
{
	for (int i = 1; i < num; i++)
	{
		int j = num - i;
		if (isPrime(i)>0 && isPrime(j)>0)
		{
			*a = i;
			*b = j;
		}
	}
	return;
}
int isPrime(int m)
{
	for (int i = 2; i < sqrt(m); i++)
	{
		if (m % i == 0)
		{
			return 0;
		}
	}
	return 1;
}