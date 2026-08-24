#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//素数
int main()
{
	int i = 0;
	int j = 0;
	for (i = 101; i <= 200; i++)
	{
		for (j = 2; j <= 200; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
			printf("%d ", i);
	}
	
	return 0;
}

////最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%*c%d", &a, &b);
//	int c = a % b;
//	while (c != 0)
//	{
//		a = b;
//		b = c;
//		c = a % b;//更新余数c
//	}
//	printf("%d\n", b);
//	return 0;
//}


////9的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		 if (i / 10 == 9)//else if 就是数字的个数
//		{
//			count++;
//		}
//
//	}
//	printf("%d", count);
//	return 0;
//}

////计算1/1 + ··· + 1/100
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / (i * flag);
//		flag = -flag;
//		/*if (i % 2 == 0)
//			sum -= 1.0 / i;
//		else
//			sum += 1.0 / i;*/
//	}
//	printf("%lf", sum);
//	return 0;
//}

////打印最大整数
//int main()
//{
//	int arr[10] = { 1, 2, 33, 4, 56, 7, 90, 6, 21, 76 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

////九九乘法表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			int sum = i * j;
//			printf("%d*%d=%d ", j, i, sum);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////判断三角形类型
//int main()
//{
//	int a, b, c;
//	while (scanf("%d%*c%d%*c%d", &a, &b, &c) != EOF)
//	{
//		if ((a + b) > c && (a + c) > b && (b + c) > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("等边三角形\n");
//			}
//			else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
//			{
//				printf("等腰三角形\n");
//			}
//			else
//				printf("普通三角形\n"); 
//		}
//		else
//			printf("不是三角形\n");
//	}
//	return 0;
//}

////从大到小输出
////确保a>=b>=c
////用int tmp代替
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%*c%d%*c%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}//a>=b
//
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}//a>=c
//
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}//b>=c
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

////1-100中3的倍数
//int main()
//{
//	int num = 0;
//	for (num = 3; num <= 100; num += 3)
//		printf("%d ", num);
//	return 0;
//}

//猜数字
//void game()
//{
//	int guess = 0;
//	int r = rand() % 100 + 1;
//	int count = 10;
//	printf("你一共有10次机会\n");
//	while (count)
//	{
//		printf("请输入：");
//		scanf("%d", &guess);
//		if (guess > r)
//			printf("输入大了\n");
//		else if (guess < r)
//			printf("输入小了\n");
//		else
//		{
//			printf("输入正确，你真棒！！！\n");
//			break;//跳出whlie
//		}
//		count--;
//		printf("输入错误，你还有%d次机会\n", count);
//	}
//	if (count == 0)
//		printf("很遗憾，游戏失败。\n");
//	printf("\n");
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned	int) time(NULL));
//	do
//	{
//		printf("-----  1.play  -----\n");
//		printf("-----  0.exit  -----\n");
//		printf("说明：1-100的数字。\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("游戏开始\n");
//			game();
//			break;
//		case 0:
//			printf("已退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;//跳出switch
//		}
//	} while (input);
//	return 0;
//}