/*
��ͨ�����(10��)
1.(Q63, 10��) ĳ�����տ��Կ�ĿΪ�ߵ���ѧMT��Ӣ��EN������PH����5�˲μӿ��ԡ�Ϊ������ѧ��Ҫ��ͳ�Ʋ����һ����񣬱�����ݰ���ѧ�š����Ʒ������ֺܷ�ƽ���֣���������ſξ���90�������ߣ�������־�����Y�������������N�����������ʽ���£�
NO	MT	EN	PH	SUM	V	>90
------------------------------------------------------
1	88	87	83	258	86	N
2	69	90	88	247	82	N
3	77	70	79	226	75	N
4	96	99	98	293	97	Y
5	77	88	90	255	85	N
**�����ʽҪ��"%d" ��ʾ��Ϣ��"Enter No. and score as: MT EN PH\n"
**�����ʽҪ��
"NO\tMT\tEN\tPH\tSUM\tV\t>90\n"
"------------------------------------------------------\n"
"%d\t%d\t%d\t%d\t%d\t%d\t%c\n"

��������ʾ����
Enter No. and score as: MT EN PH
1 66 87 67�L
Enter No. and score as: MT EN PH
2 88 76 98�L
Enter No. and score as: MT EN PH
3 77 67 87�L
Enter No. and score as: MT EN PH
4 66 89 86�L
Enter No. and score as: MT EN PH
5 97 86 88�L
NO      MT      EN      PH      SUM     V       >90
------------------------------------------------------
1       66      87      67      220     73      N
2       88      76      98      262     87      N
3       77      67      87      231     77      N
4       66      89      86      241     80      N
5       97      86      88      271     90      N
*/
#include<stdio.h>
int main()
{
	int a[5][4];
	char c;
	int s = 0;
	int j = 1;
	for (int i = 0; i < 5; i++)
	{
		printf("Enter No. and score as: MT EN PH\n");
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("NO\tMT\tEN\tPH\tSUM\tV\t>90\n");
	printf("------------------------------------------------------\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d\t",a[i][0]);
		for ( s = 0, j =1; j < 4; j++)
		{
			s += a[i][j];
			printf("%d\t",a[i][j]);
		}
		if (a[i][1] > 90 && a[i][2] > 90 && a[i][3] > 90)
		{
			c = 'Y';
		}
		else c = 'N';
		printf("%d\t%d\t%c\n",s,s/3,c);
	}
	return 0;
}