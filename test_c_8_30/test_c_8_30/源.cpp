#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < a; i++)
//		{
//			int j = 0;
//			for (j = 0; j < a; j++)
//			{
//				if (j == i || j + i == a - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//空心正方形
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < a; i++)
//		{
//			int j = 0;
//			for (j = 0; j < a; j++)
//			{
//				if (i == 0  || i == a - 1)
//				{
//					printf("* ");
//				}
//				else if (j == 0 || j == a - 1)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");//要用两个空格
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//矩阵的转置
//int main()
//{
//	//输入数组
//	int m, n;
//	scanf("%d%*c%d", &m, &n);
//	int arr[m][n] ;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//输出转置数组
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//逆序输出
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//有序序列合并
//int main()
//{
//	int m, n;//m,n分别为一二组元素个数
//	scanf("%d%*c%d", &m, &n);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	int i = 0;//arr1当前指向位置
//	int j = 0;
//	while (i < n && j < m)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//
//	while (i < n)//arr2读完
//	{
//		printf("%d ", arr1[i]);
//		i++;
//	}
//	while (j < m)
//	{
//		printf("%d ", arr2[j]);
//		j++;
//	}
//	return 0;
//}

//求平均值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	double avg = sum / 10.0;
//	printf("%lf\n", avg);
//	return 0;
//}

//交换
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[] = { 11,12,13,14,15,16,17,18,19,20 };
	for (int i = 0; i < 10; i++)
	{
		int tmp = 0;
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (int i = 0; i < 10;i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 10;i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
