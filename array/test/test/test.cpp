// test.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include "stdio.h"


int main1()		//数组的简单应用
{
	int a[10];

	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
	}
	for (int j = 0; j < 10; j++)
	{
		printf("%d", a[j]);
	}
	system("pause");
	return 0;
}

int main2(void)		//数组的定义
{
	int b[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int c[10] = { 0,1,2,3,4 };
	int d[10] = { 0 };
	int e[] = { 1,2,3,4,5 };


	system("pause");
	return 0;
}


int main3(void)	//数组方法计算fibonacci数列
{
	int i;
	int f[20] = { 1,1 };
	for (i = 2; i < 20; i++)
	{
		f[i] = f[i - 2] + f[i - 1];
	}
	for (i = 0; i < 20; i++)
	{
		if (i % 5 == 0) printf("\n");
		printf("%12d", f[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

int main4(void)		//冒泡法排序
{
	int a[10];
	int i, j, t;

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d,", &a[i]);
	}
	printf("\n");
	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 9; i++)
		{
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}
	printf("the sorted numbers: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d,", a[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

int main5(void)		//矩阵的置换
{
	float pay[3][10];
	float b[4][10];
	int a[2][3] = { {1,2,3},{4,5,6} };
	int c[3][2];

	int i, j;


	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d", a[i][j]);
			c[j][i] = a[i][j];
		}
	}
		
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d", c[i][j]);
		}
	}
	system("pause");
	return 0;
}

int main6(void)		//定义字符数组
{
	char c[10] = { 'I',' ','a','m',' ', 'a', ' ', };

	for (int i = 0; i < 10; i++)
		printf("%c", c[i]);
	system("pause");
	return 0;
}

int main7(void)		//输出指定格式
{
	char c[][5] = { {' ', ' ', '*'}, {' ', '*', ' ','*' },{'*',' ',' ',' ','*'},
	{ ' ', '*', ' ','*' },{ ' ', ' ', '*' } };
	for (int i = 0; i < 5; i++)
	{ 
		for (int j = 0; j < 5; j++)
			printf("%c", c[i][j]);
		printf("\n");
	}
		
	system("pause");
	return 0;
}

int main(void)	//字符串的定义及输入输出
{
	char a[] = { "I am a student." };
	char b[] = "I am a master.";
	char c[] = "I am a teacher.";
	char d[10];


	printf("%s", c);
	printf("\n");

	scanf_s("%s", d);
	printf("%s", d);


	for (int i = 0; a[i] != '\0'; i++)
		printf("%c", a[i]);
	printf("\n");
	for (int j = 0; b[j] != '\0'; j++)
		printf("%c", b[j]);
	printf("\n");
	system("pause");
	return 0;
}