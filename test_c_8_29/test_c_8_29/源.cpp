#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>

//int main()
//{
//	//完全初始化
//	int date[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	double d[5] = { 0.3, 5.4, 3.2, 1.2, 5.8 };
//
//	//不完全初始化：剩余的元素默认为零
//	int date[10] = { 1,2,3,4,5 };
//	double d[5] = { 1.2 };
//
//	//元素不可以过多
//	int date[3] = { 1,2 ,3 4 };//错误
//
//	//元素个数
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,5 };
//	int arr3[10] = { 0 };//10个元素
//	int arr4[] = { 0 };//0个元素
//
//	return 0;
//}

//数组的类型
//int main()
//{
//	int arr[10];
//	//int 是数组元素类型
//	//int [10] 是数组类型
//	printf("%zu\n", sizeof(arr));//40
//	printf("%zu\n", sizeof(int [10]));//40
//
//	int arr1[5];
//	printf("%zu\n", sizeof(int[5]));//20
//
//	return 0;
//}

//数组的下标 []是下标引用操作符
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0,1,2,3,4,5,6,7,8,9
//	printf("%d\n", arr[6]);//7
//	arr[6] = 70;
//	printf("%d\n", arr[6]);//70
//
//	return 0;
//}

//输出元素
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//输出-1~-10
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = -(i + 1);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//输入元素：arr[i]是数组元素，不是数组
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//初始化
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);//arr[i] = 输入十个数
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//数组在内存中的存储 
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//%p是打印地址，注意&,4个比特
//	}
//	return 0;
//}

//sizeof计算数组元素个数
//int main()
//{
//	int arr[] = { 3,4,5,6,77,8,9,0,10,34,6 };
//	//sizeof(arr)计算数组长度
//	//sizeof(arr[0])计算一个元素长度，单位都是字节
//	printf("%zu\n", sizeof(arr));
//	printf("%zu\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//二维数组的创建
//int main()
//{
//	////int arr[3][5];//3行5列
//
//	//不完全初始化:其余默认值为零
//	int arr1[3][5] = { 1,2,3 };
//	int arr2[3][5] = { 0 };
//
//	//完全初始化
//	int arr3[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//
//	//按行初始化
//	int arr4[3][5] = { {1,2},{2,3},{3,4} };
//
//	//行可以省略，列不可以省略
//	int arr5[][5] = { 1,2 };
//	//1 2 0 0 0
//	int arr6[][5] = { 1,2,3,4,5,6 };
//	//1 2 3 4 5
//	//6 0 0 0 0
//	int arr7[][5] = { {1,2},{2,3},{3,4} };
//	//1 2 0 0 0
//	//2 3 0 0 0
//	//3 4 0 0 0
//
//	return 0;
//}

//二维数组的下标
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	printf("%d\n", arr[2][4]);//7
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}

//二维数组的输入和输出
//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	int  j = 0;
//	//输入
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//输出
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}

//二维数组在内存中的存储
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("arr[%d][%d] = %p\n", i, j, &arr[i][j]);//也是四个字节
//		}
//	}
//	return 0;
//}

//C99:变长数组就是用变量指定数组
//输出1~n的数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//多个字符从两端移动向中间汇聚
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "zhouboran zui shuai !!!";
//	char arr2[] = "***********************";
//	size_t left = 0;//size_t存长度
//	size_t right = strlen(arr2) - 1;//strlen计算字符长度
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		//休眠一秒
//		Sleep(1000);//单位是毫秒
//		system("cls");//cls是清屏的意思,下一轮重新打印
//		printf("%s\n", arr2);
//	}
//	/*printf("%s\n", arr2);*/
//	return 0;
//}

//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//		while (1)
//		{
//			int k = 0;
//			scanf("%d", &k);
//			for (i = 0; i < sz; i++)
//			{
//				if (arr[i] == k)
//				{
//					printf("找到了，下标是：%d\n", i);
//					break;
//				}
//
//			}
//			if (i == sz)
//			{
//				printf("找不到\n");
//			}
//		}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (1)
//	{
//		size_t left = 0;
//		size_t right = sz - 1;
//		int k = 0;
//		scanf("%d", &k);
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (arr[mid] < k)
//			{
//				left = mid + 1;
//			}
//			else if (arr[mid] > k)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				printf("下标是：%d\n", mid);
//				break;//跳出while循环,没有则变成死循环
//			}
//		}
//		if (left > right)
//		{
//			printf("不存在\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (1)
//	{
//		int k = 0;
//		scanf("%d", &k);
//		size_t left = 0;
//		size_t right = sz - 1;
//		int find = 0;//find=0 找不到
//		while (left <= right)
//		{
//			int mid = (right - left) / 2 + left;
//			if (arr[mid] < k)
//			{
//				left = mid + 1;
//			}
//			else if (arr[mid] > k)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				find = 1;
//				printf("下标是：%d\n", mid);
//				break;//跳出while循环
//			}
//		}
//		if (find == 0)
//		{
//			printf("找不到\n");
//			break;//跳出while(1)循环
//		}
//	}
//	return 0;
//}

//计算平均数:多大数都适用
int main()
{
	int left = 0;
	int right = 0;
	scanf("%d%*c%d", &left, &right);
	int mid = (right - left) / 2 + left;
	printf("%d\n", mid);
	return 0;
}