#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//复制忽略符号%*c
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a,&b);
//	printf("%d\n%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d%*c%d%*c%d", &year, &month, &day);
//	printf("%d %d %d", year, month, day);
//	return 0;
//}


//if语句，1表示真，0表示假
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("奇数");
//	else
//		printf("偶数");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//		printf("成年");
//	else
//		printf("未成年");
//	return 0;
//}

//分支中包含多条语句
//默认if else语句都只控制一条语句
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年了\n");
//		printf("可以谈恋爱了\n");
//	}
//	else
//	{
//		printf("未成年\n");
//		printf("好好学习\n");
//	}
//	return 0;
//}


//if嵌套式语句
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//		printf("正数\n");
//	else if (num == 0)
//		printf("0\n");
//	else
//		printf("负数\n");
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//	{
//		if (num % 2 == 1)
//			printf("奇数\n");
//		else
//			printf("偶数\n");
//	}
//	else
//		printf("非正数\n");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年\n");
//	else if (age <= 44)
//		printf("青年\n");
//	else if (age <= 59)
//		printf("中老年\n");
//	else if (age <=89)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//	return 0;
//}


//else总与最近的if匹配
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("haha\n");
//	
//	else
//		printf("hehe");//不打印
//	return 0;
//}


//1为真，0为假
//int main()
//{
//	printf("%d\n",3 > 2);//1
//	printf("%d\n",3 == 2);//0
//	return 0;
//}

//多个关系操作符不宜连用
//int main()
//{
//	int i = 3;
//	int j = 8;
//	int k = 5;
//	//if (i < j < k)//0<5的意思
//	//	printf("hehe\n");
//	printf("%d", i < j < k);//1
//	return 0;
//}

//int main()
//{
//	int i = 3;
//	int j = 8;
//	int k = 15;
//	if (i < j && j < k)//&&并且的意思，需要满足两边同时成立
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18 && age <= 36)
//		printf("青年\n");
//	return 0;
//}


//条件操作符  D？d：d  从左到右看
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	/*if (a > 5)
//		b = 3;
//	else
//		b = -3;*/
//	b = (a > 5 ? 3 : -3);
//	printf("%d\n", b);
//	return 0;
//}

//比较两数较大值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}


//逻辑操作符 && || !
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//		printf("春天\n");
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//		printf("冬天\n");
//	return 0;
//}

//判断闰年
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	/*if (year % 4 == 0 && year % 100 != 4)
//		printf("闰年\n");
//	else if (year % 400 == 0)
//		printf("闰年\n");*/
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)//先&&，再||
//		printf("闰年\n");
//	return 0;
//}


//短路:逻辑运算符||如果左边满足，就不用再计算右边
//int main()
//{
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	//printf("%d %d %d %d %d", a, b, c, d, i);// 1 2 3 4 0
//
//	//int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	//printf("%d %d %d %d %d", a, b, c, d, i);// 2 3 3 5 1 //1 && 3 && 4    i = 1
//
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ || ++b || d++;
//	//printf("%d %d %d %d %d", a, b, c, d, i);// 1 3 3 4 1  //0 || 3 || 4  
//
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("%d %d %d %d %d", a, b, c, d, i);// 2 2 3 4 1  //1 || 2 || 4
//	return 0;
//}



//switch case default语句
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	/*if (num % 3 == 0)
//		printf("余数是0\n");
//	else if (num % 3 == 1)
//		printf("余数是1\n");
//	else 
//		printf("余数是2\n");*/
//
//
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)
//	{
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误，请输入1——7\n");
//		break;
//	}
//	return 0;
//}



//while循环（可多次）
//int main()
//{
//	while (1)
//		printf("hehe");
//	return 0;
//}


int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);//%d后面加空格就可以空格输出
		i++;//也可以是++i
	}
	return 0;
}
