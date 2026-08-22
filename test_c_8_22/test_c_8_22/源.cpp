#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



////goto语句
//int main()
//{
//	printf("hehe\n");
//	goto next;
//	printf("heihei\n");
//next:
//	printf("haha\n");
//	return 0;
//}

//循环的嵌套：判断素数

//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int flag = 1;//(假设flag=1为素数)
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//sqrt()是平方根
//		{
//			if (i % j == 0)
//			{
//				flag == 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;//2~i-1
//	for (i = 1; i <= 200; i++)
//	{
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (i == j)
//			printf("%d ", i);
//	}
//	return 0;
//}


//break和continue

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;// 1 2 3 4 
//			continue;//1 2 3 4 6 7 8 9 10
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		a++;
//		if (a == 5)
//			//break;//2 3 4 
//			continue;// 2 3 4 6 7 8 9 10 11
//		printf("%d ", a);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//
//		if (a == 5)
//			//break;// 1 2 3 4 
//			continue;//1 2 3 4
//		printf("%d ", a);
//		a++;
//	}
//	return 0;
//}

////判断位数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	do
//	{
//		num /= 10;
//		count++;
//	} while (num);
//	printf("%d\n", count);
//	return 0;
//}

////do_while
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

////100中3的倍数之和
////int main()
////{
////	int i = 0;
////	int sum = 0;
////	for (i = 0; i <= 100; i++)
////	{
////		if (i % 3 == 0)
////			sum += i;
////	}
////	printf("%d\n", sum);
////	return 0;
////}
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 3; i <= 100; i += 3)
//		sum += i;
//	printf("%d\n", sum);
//	return 0;
//}


////for循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

////打印逆序数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//1234
//	while (num)
//	{
//		printf("%d ", num % 10);//4 3 2 1
//		num /= 10;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while (a <= 10)
//	{
//		printf("%d ", a);//0~10
//		a++;
//	}
//	return 0;
//}