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

int main2(void)  //continue.c 测试
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

int main3(void)
{
	int a = 7;
	while (a--);
	printf("%d\n", a);


	system("pause");
	return 0;
}

void f(int b[])
{
	int i;
	for (i = 2; i < 6; i++)
		b[i] *= 2;

}

int main4(void)
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 }, i;
	f(a);
	for (i = 0; i < 10; i++)
		printf("%d,", a[i]);

	system("pause");
	return 0;
}


typedef struct stu {
	char name[10];
	char gender;
	int score;

}STU;

void f(STU a, STU *b)
{
	*b = a;
	printf("%s, %c, %d", b->name, b->gender, b->score);

}

int main(void)
{

	STU a = { "Zhao", 'm', 290 }, b = { "Qian",'f', 350 };
	f(a, &b);
	printf("%s, %c, %d\n", b.name, b.gender, b.score);
	system("pause");
	return 0;
}