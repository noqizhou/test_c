
#include <stdio.h>
 
//复合赋值
//int main()
//{
//	int a = 10;
//	//a = a + 3;
//	// a += 3;//即a=a+3
//	// a -= 3;
//	// a *= 3;
//	 a /= 3;
//	// a %= 3;
//
//	printf("%d\n", a);
//	return 0;
//}



//自增自减
//int main()//四种结果均为11
//{
//	int a = 10;
//	//a = a + 1;
//	//a += 1;
//	//a++;
//	++a;
//	printf("%d\n", a);
//	return 0;
//}


//前置后置
//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("%d\n", a);
//	printf("%d\n", b);//后置++，先赋值，再加一。b=10,a=11. b=a,a=a+1
//
//	int a = 10;
//	int b = ++a;
//	printf("%d\n", a);
//	printf("%d\n", b);//前置++，先加一，再赋值。b=11，a=11。a=a+1,b=a
//
//	int a = 10;
//	//int b = a--;
//	//printf("%d\n", a);
//	//printf("%d\n", b);//b=10.a=9
//
//	int b = --a;
//	printf("%d\n", a);
//	printf("%d\n", b);//b=9.a=9。a=a-1,b=a
//	return 0;
//}


//+和-的打印
//int main()
//{
//	//int a = 10;
//	//int b = +a;
//	//printf("%d\n", b);//10
//	//int b = -a;
//	//printf("%d\n", b);
//
//
//	//总是显示正负号
//	int a = 10;
//	//printf("%d\n", +10);//10
//	//printf("%d\n", -10);//-10
//
//	printf("%+d\n", +10);//+10
//	printf("%+d\n", -10);//-10
// 
//	return 0;
//}


//限定宽度
//int main()
//{
//	//printf("%d\n", 123456);
//	//printf("%8d\n", 123456);
//	//printf("%5d\n", 123456);//123456
//	//printf("%-8d", 123456);
//	////123456  hehe
//	//printf("hehe\n");
//
//	//%f默认打印小数点后六位
//	printf("%f\n", 12.3);
//	printf("%12f\n", 12.3);//   12.300000
//	return 0;
//}


//限定小数数位(四舍五入)
//int main()
//{
//	printf("%f\n", 1.237);//1.237000
//	printf("%.5f\n", 1.237);//1.23700
//	printf("%.3f\n", 1.237);//1.237
//	printf("%.2f\n", 1.237);//1.24
//	printf("%.1f\n", 1.237);//1.2
//	printf("%10.2f\n", 1.237);//      1.24
//	printf("%*.*f\n", 6, 2, 1.237);//%6.2 输出  1.24
//	return 0;
//}


//输出部分字符串
//int main()
//{
//	printf("%s\n", "abcdef");//abcdef
//	printf("%.3s\n", "abcdef");//abc
//	return 0;
//}


//强制类型转换
//int main()
//{
//	int a = (int)3.14;
//	//把double强制转换为int
//	printf("%d\n", a);
//	return 0;
//}


//printf中的对应关系
//int main()
//{
//	printf("%s said , he have %d apples.", "zhangsan", 5);
//	return 0;
//}


//scanf的用法
//int main()
//{
//	int score = 0;
//	printf("请输入成绩：");
//	scanf_s("%d", &score);
//	printf("成绩是：%d\n", score);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	float c = 0;
//	float d = 0;
//
//	scanf_s("%d%d%f%f", &a, &b, &c, &d);
//
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	printf("c = %f\n", c);
//	printf("d = %f\n", d);
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	float y = 0;
//	//从适合的第一个开始，到不适合的结束
//	scanf_s("%d", &x);
//	//printf("%d\n", x);
//
//	scanf_s("%f", &y);
//	//printf("%f\n", y);
//	//输入-13.45e12# 0
// 
//printf("%d %f\n", x, y);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	float c = 0.0f;//0.0为double，0.0f为float
//	int r = scanf_s("%d %d %f", &a, &b, &c);
//	printf("a=%d b=%d c=%f\n", a, b, c);
//	printf("%d\n", r);
//	//0 0 0.0 r=3        0 a r=1       a r=0
//	//ctrl+z+enter 3次，r=-1,该文件结束
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	int c = a + b;
//	printf("%d\n", c);
//	return 0;
//}


//占位符
//int main()
//{
//	int num = 0;
//	char c = 0;
//	//scanf_s("%d", &num);
//	//printf("%d\n", num);
//
//	scanf_s(" %c", &c);//%前面的空格表示忽略开始的字符
//	printf("------%c-----", c);//输入abc,显示------a-----
//	return 0;
//}


//%s从空格开始，到空格结束
int main()
{
	char arr[100];
	scanf_s("%s", arr,100);//arr是数组名，数组名本身就是地址，所以不用写&
	printf("%s\n", arr);//hello world 输出 hello
	return 0;
}