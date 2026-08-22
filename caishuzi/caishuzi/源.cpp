#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>//rand()
#include  <time.h>//time()
#include <math.h>

void game()//没有返回值
{
	int guess = 0;
	int r = rand() % 100 + 1;//生成1-100的随机数
	int count = 5;
	while (count)
	{
		scanf("%d", &guess);
		if (guess < r)
			printf("输入小了。\n");
		else if (guess > r)
			printf("输入大了。\n");
		else
		{
			printf("输入正确，你真棒！！！\n");
			break;
		}
		count--;
		printf("输入错误，您还有%d次机会\n", count);
		if (count == 0)
			printf("游戏失败\n");
	}
		

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		printf("------------------\n");
		printf("----- 1.play -----\n");
		printf("----- 2.exit -----\n");
		printf("说明：该数属于1-100\n");
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();//玩游戏的函数
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入。\n");
			break;
		}
		
	} while (input);
	return 0;
}


////生成随机数
////rand()生成的是伪随机数，要让种子srand()变化
////给srand一个变化的值time
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	printf("%d\n", rand());
//	return 0;
//}