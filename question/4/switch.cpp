// switch.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdio.h"
#include "math.h"
#include "stdlib.h"

#define M 1000

int main1(void)		// get the anwser of the equation.
{
	double a, b, c, disc, x1=0, x2=0, realpart, imagpart;
	scanf_s("%lf, %lf, %lf", &a, &b, &c);
	printf("The equation is:");
	
	if (fabs(a) <= 1e-6)
		printf("is not a quadratic\n");
	else
	{
		disc = b * b - 4 * a*c;
		if (fabs(disc) <= 1e-6)
			printf("has two equal roots: %8.4f\n", -b/(2*a));
		else
			if (disc > 1e-6)
			{
				x1 = (-b + sqrt(disc)) / (a * 2);
				x1 = (-b - sqrt(disc)) / (a * 2);
				printf("has two equal roots: %8.4f and %8.4f\n", x1, x2);
			}
			else
			{
				realpart = -b / (2 * a);
				imagpart = sqrt(-disc) / (2 * a);
				printf("has complex roots:\n");
				printf("%8.4f+%8.4fi\n", realpart, imagpart);
				printf("%8.4f+%8.4fi\n", realpart, imagpart);
			}
	}

	getchar();
	system("pause");
    return 0;
}

int main2(void)		//get max number in three numbers.
{
	int sort_max(int, int);
	int a, b, c, temp, max;
	scanf_s("%d,%d,%d", &a, &b, &c);
	temp = (a > b) ? a : b;
	max = (temp > c) ? temp : c;
	printf("max is %d", max);

	system("pause");
	return 0;
}


int main3(void)		//sort three numbers
{
	int a, b, c, temp, max;

	scanf_s("%d,%d,%d", &a, &b, &c);

	if (a > b)
	{
		if (b > c)
			printf("%d>%d>%d", a, b, c);
		else	// c>b
		{
			if (a>c)
				printf("%d>%d>%d", a, c, b);
			else
				printf("%d>%d>%d", c, a, b);
		}
	}
	else	// b>a
	{
		if(a>c)
			printf("%d>%d>%d", b, a, c);
		else	//c>a
		{
			if(c>b)
				printf("%d>%d>%d", c, b, a);
			else	//b>c
				printf("%d>%d>%d", b, c, a);
		}
	}

	system("pause");
	return 0;
}


int main4(void)
{
	int i, k;

	printf("Please input a number < 1000:");
	scanf_s("%d", &i);

	while (i > M)
	{
		printf("The number is >1000, please reinput the number:");
		scanf_s("%d", &i);
	}
	k = sqrt(i);
	printf("%d sqrt total part is %d", i, k);

	system("pause");
	return 0;
}

int main5(void)
{
	int x, y;

	printf("Please input the number: ");
	scanf_s("%d", &x);

	if (x < 1)
		y = x;
	else
	{
		if (x >= 1 && x < 10)
			y = 2 * x - 1;
		else
			y = 3 * x - 11;
	}

	printf("%d", y);

	system("pause");
	return 0;

}

int main(void)
{
	float score;
	char grade;

	printf("Please input the student score: ");
	scanf_s("%f", &score);

	while (score > 100 || score < 0)
	{
		printf("Input is an error score! please reinput.");
		scanf_s("%f", &score);
	}

	switch (int(score / 10))
	{
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	case 5: 
	case 4:
	case 3:
	case 2:
	case 1:
	case 0: grade = 'E'; break;
	}

	printf("The score is %d, grade is %c\n", score, grade);

	system("pause");
	return 0;
}