/*#include<stdio.h>
int main(void)
{
	int n = 0;
	int total = 0;


	printf("숫자를 입력하세요");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++);
	{
		total = total + i;
		if(total % 4 == 0)

	}

	return 0;
}*/


/*#include<stdio.h>
int main(void)
{

	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int total = i * j;
			printf("%d\n", total);
		}
	}
	return 0;
}*/


/*#include<stdio.h>
int main(void)
{
	int Input = 0;
	printf("단수입력");
	scanf_s("%d", &Input);

	for (int Input = Input; Input <= Input + 5; Input++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int total = Input * j;
				printf("%d\n", total);
		}
	}
	return 0;
}*/


/*#include<stdio.h>
int main(void)
{
	int n = 2;
	int j = 1;

	while (n <= 9)
	{
		j = 1;
		while(j <= 9)
		{
			printf("%d x %d = %d\n", n, j, n * j);
			j++;
		}
		n++;


	}
	return 0;
}*/


/*#include<stdio.h>
int main(void)
{
	int Input = 0;


	while (1)
	{
		printf("몇단?");
		scanf_s("%d", &Input);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d \n", Input, j, Input * j);
		}
		printf("\n");
	}

	return 0;
}*/


/*#include<stdio.h>
int main(void)
{
	int Input = 0;

	while (1)
	{
		printf("수 입력 :");
		scanf_s("%d", &Input);

		for (int i = 1; i <= Input; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				printf("*");

			}
		}
	}

	return 0;
}*/


/*#include<stdio.h>
void TotalSum(int num)
{
	int sum = 0;

	for (int i = 1; i <= num; i++)
	{
		sum = sum + i;
	}

	printf("1부터 %d까지의 합 : %d", num, sum);
}
int main()
{
	int n = 0;
	int sum = 0;

	printf("하나의 정수를 입력하세요 : ");
	scanf_s("%d", &n);

	TotalSum(n);

		return 0;
}*/


//#include<stdio.h>
//void googoo(int Input)
//{
//
//
//	for (int i = 1; i <= 9; i++)
//	{
//		printf("%d x %d = %d\n", Input, i, Input * i);
//	}
//}
//
//int main(void)
//{
//	int Input = 0;
//	printf("단수 입력");
//	scanf_s("%d", &Input);
//
//	googoo(Input);
//
//	return 0;
//}