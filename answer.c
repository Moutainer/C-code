/*
普通编程题(10分)
1.(Q63, 10分) 某班期终考试科目为高等数学MT，英语EN和物理PH，有5人参加考试。为评定奖学金，要求统计并输出一个表格，表格内容包括学号、各科分数、总分和平均分，并标出三门课均在90分以上者（该栏标志输出“Y”，否则输出“N”），表格形式如下：
NO	MT	EN	PH	SUM	V	>90
------------------------------------------------------
1	88	87	83	258	86	N
2	69	90	88	247	82	N
3	77	70	79	226	75	N
4	96	99	98	293	97	Y
5	77	88	90	255	85	N
**输入格式要求："%d" 提示信息："Enter No. and score as: MT EN PH\n"
**输出格式要求：
"NO\tMT\tEN\tPH\tSUM\tV\t>90\n"
"------------------------------------------------------\n"
"%d\t%d\t%d\t%d\t%d\t%d\t%c\n"

程序运行示例：
Enter No. and score as: MT EN PH
1 66 87 67↙
Enter No. and score as: MT EN PH
2 88 76 98↙
Enter No. and score as: MT EN PH
3 77 67 87↙
Enter No. and score as: MT EN PH
4 66 89 86↙
Enter No. and score as: MT EN PH
5 97 86 88↙
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