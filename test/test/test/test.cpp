// test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"


int main1() //break.c 测试
{
	float amount, aver, total;
	int i;

	for (i = 1, total = 0; i <= 1000; i++)
	{
		printf("Please enter amount: ");
		scanf_s("%f", &amount);
		total = total + amount;
		if (total >= 100000)
			break;
	}
	aver = total / i;
	printf("number=%d\naver=%10.2f\n", i, aver);

	system("pause");
	return 0;
}

int main(void)  //continue.c 测试
{
	int n;
	for (n = 100; n <= 200; n++)
	{
		if (n % 3 == 0)
			continue;
		printf("%5d", n);
	}
	printf("\n");

	system("pause");
	return 0;
}
