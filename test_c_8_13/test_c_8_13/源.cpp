#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//全局变量和局部变量名称相同，局部变量优先使用


//int main()
//{
//	int a, b;
//	while (scanf("%d %d", &a, &b) != EOF) {
//		//scanf如果输出EOF，说明循环结束
//		printf("%d %d", a / b , a % b);
//	}
//	return 0;
//}


//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF) {
//		if (a >= 140) {
//			printf("Genius\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a, b;
//	while (scanf("%d %d", &a, &b) != EOF) {
//		if (a > b) 
//		{
//			printf("%d>%d\n", a, b);
//		}
//		else if (a == b)
//		{
//			printf("%d=%d\n", a, b);
//		}
//		else (a < b)
//		{
//			printf("%d<%d\n", a, b);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF) {
//		if (a % 5 == 0)
//		{
//			printf("YES\n");
//		}
//		else if (a % 5 != 0)
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}


int main()
{
	int a;
	while (scanf("%d", &a) != EOF) {
		int i = 0;
		while (i < a)
		{
<<<<<<< HEAD
			printf("*");
=======
			printf("*");//二者顺序不可调换
>>>>>>> 7b6786924ed74736f6dca20326da8f0c90e2449a
			i++;

		}
		printf("\n");
	}
	return 0;
}
