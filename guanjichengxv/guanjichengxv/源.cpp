#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>//system
#include <math.h>
#include <string.h>//strcmp
//syetem执行系统命令

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");
again:
	printf("请注意，您的电脑将在两分钟内关机，如果输入：周博冉最帅。则取消关机。\n");
	scanf("%s", input);
	if (strcmp(input, "周博冉最帅") == 0)//strcmp字符串相等
	{
		system("shutdown -a");
		printf("你很乖，给你取消关机了。\n");
	}
	else
	{
		printf("还不承认吗，电脑要关机了！！！\n");
		goto again;
	}
	return 0;
}
