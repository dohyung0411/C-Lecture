//#include <stdio.h>
//#define LENGTH 10 //��ũ�� ��� ���ǿ��� �����ݷ�(;)�� ������� �ʽ��ϴ�.
// ����� ��ɹ��� ġȯ�ϴ� ����
// ������ �����ϱ� ���ؼ� �Ϲ������� ��� �빮�ڷ� ����
// #define     xxx         7
//          ġȯ�� �̸� ġȯ�ɳ���
// 
// 
// �밡���� ǥ���
/*
int main(void)
{
	int number = 3;
		const int NUMBER = 5;//�ɺ��� ��� ����
		number = 10;//������ ���� ������ �� �ֽ��ϴ�.
		//NUMBER = 10;// ����� ���� ������ �� �����ϴ�. ���� ������ ��� ������ ������ �߻��մϴ�.
		//"const"�� ����� �ٲ�°� ������

		printf("%d\n", LENGTH);
		printf("%d\n", number);
		printf("%d\n", NUMBER);


		return 0;
}*/


// #include <������� �̸�> : VisualStudio���� �����ϴ� ��������� ������ ��
// #include "������� �̸�" : ���α׷��Ӱ� ���� �����ؼ� ����ϴ� ��������� ������ ��

//#include <stdio.h>
//#include "testHeader.h"
//void Add()
//{
// printf("Add�Լ��� �����߽��ϴ�\n");
//}
//int main(void)
//{
// printf("%d\n", nData1 + nData2);
// Add();
//
// return0;
//}

/*#include<stdio.h>
#define ADD(a, b) (a+b)
int main(void)
{
	printf("%d\n", ADD(3, 4));
	return 0;

}*/

/*#define POW(a) (a*a)
#include<stdio.h>
int main(void)
{
	printf("%d", POW(3));
	return 0;
}*/


// <(�ڷ�)�� ��ȯ>
// - Ư�� �ڷ����� �ٸ� �ڷ������� �ڵ� �Ǵ� ������ ��ȯ�Ǵ� ��.

// - ����ȯ�� ����
//   1) �ڵ� ����ȯ(�Ͻ���) : �����Ϸ��� ���� �ڵ����� ��ȯ
//   2) ���� ����ȯ(�����) : �����ڿ� ���� ��õ� �� ��ȯ

// �ڵ� ����ȯ1
/*#include<stdio.h>
int main(void)
{
	double dNumber = 10;
	printf("%d\n", dNumber);

	int iNumber = 5.4321;
	printf("%d\n", iNumber);

	float fNumber = 1.2345;
	printf("%f\n", fNumber);

	return 0;
}*/


// �ڵ�����ȯ 2
//#include<stdio.h>
//int main(void)
//{
	//double number1 = 10;
	//int number2 = 1.2345;
	//short number3 = 70000;

	//printf("%f\n", number1);
	//printf("%d\n", number2);
	//printf("%d\n", number3);

	//return 0;
//}


// ��������ȯ 1
/*#include <stdio.h>
int main(void)
{
	printf("%d\n", (short)3.1415);
	printf("%d\n", (int)3.1415);
	printf("%f\n", (double)3.1415);
	printf("%f\n", (float)3.1415);

	return 0;
}*/


// ��������ȯ - ������ �ս� (�Ϻη�)
/*#include<stdio.h>
int main(void)
{
	int num1 = 130; // 130�� �������� �ٲٸ� 0000 0000 0000 0000 0000 0000 1000 0010

	char ch1 = (char)num1;// 4����Ʈ�� 1����Ʈ�� �ٲٸ� ���� 3����Ʈ�� ���ư��� �Ǿ��� ��ȣ��Ʈ�� �ٲ�鼭 -126�� ����

	printf("num1 = %d\n", num1);
	printf("ch1 = %d\n", ch1);

	return 0;
}


#include<stdio.h>
int main(void)
{
	int num = 10;
	int div = 4;

	double result1 = num / div; // 10/4 ->2
	double result2 = (double)num / div; //10.0/4 -> 2.5

	printf("result = %1f\n", result1);
	printf("result2 = %1f\n", result2);
}*/


// <sizeof ������>
// - �� �������� �ڷ����� ���� ����.
// - ������ Ÿ�ӿ� �����ϴ� �������̴�. (��Ÿ�� ������ �ƴ�)
// - ���� �ƹ���, �ƹ��� �ƹ��� ���� ����ϴ��� ���α׷��� ����ɷ��� �������� ���� ����.
// - ������ (�ſ� �ſ� �ſ� �ſ� �ſ� �ſ� �ſ� �ſ� ����)

/*#include<stdio.h>
int main(void)
{
	int nData = 10;

	pirntf("size = %d\n", sizeof(int));
	pirntf("size = %d\n", sizeof(5));
	pirntf("size = %d\n", sizeof(nData));
	// �Ǽ��� double�� ���. float xxx
	pirntf("size = %d\n", sizeof(123.45));
	pirntf("size = %d\n", sizeof(123.45F));


	return 0;

}*/

// scanf : ǥ�� �Է��Լ�
// printf : ǥ�� ����Լ�
// stdio(STandDard Input Output)
// scanf�� ���Ĺ���
// %d : 10�� ���� ����
// %f : 10�� �Ǽ� ���� 
// %c : �ѹ��� ����
// $s : ���ڿ� ����

/*#define _CRT_SECURE_NO_WARNINGS
// SDL(Security Development Lifecycle)


#include <stdio.h>

int main(void)
{
	char character;
	int inum;
	float fnum;

	scanf("%c", &character);
	scanf("%d", &inum);
	scanf("%f", &fnum);

	//scanf �Լ��� ��� ����� ���ϰ� ���� �ʽ��ϴ�. ����� printf �Լ��� �̿��մϴ�.
	printf("%c %d %f \n", character, inum, fnum);

	return 0;
}*/



/*#include<stdio.h>
int main(void)
{
	int nData1 = 0;
	int nData2 = 0;

	printf("���� 2�� �Է����ּ��� : ");
	scanf_s("%d", &nData1);
	scanf_s("%d", &nData2);

	int nData3 = nData1 + nData2;

	printf("�Է��� ������ ���� : %d�Դϴ�\n", nData3);
	return 0;
}*/

// ���� �Ǽ� 1 - & ����
/*#include<stdio.h>
int main(void)
{
	int nInput = 0;
	scanf_s("%d", &nInput);

	printf("nInput = %d\n", &nInput);

	return 0;
}*/

// �� ���� �Է�
//#include<stdio.h>
//int main(void)
//{
//	char ch = NULL; // NULL : �� ����
//
//	printf("�����Է� : ");
	//���ڿ� �Է�
	/*#include<stdio.h>
	int main(void)
	{
		char ch = NULL;
		char arr[10] = { NULL };

		printf("���ڿ� �Է� : ");
		scanf_s("%s", arr, sizeof(arr));
		// %s���� '&' ���� ������ �迭�� �̸��� �迭�� �����ּҸ� ������ �ֱ� �����̴�.
		printf("�Է¹��� ���ڿ� : %s�Դϴ�\n", arr);





		return 0;
	}*/
	/*scanf_s("%c", &ch, sizeof(ch));

	printf("size = %d\n", ch);
	printf("%d\n", ch);

	return 0;


}*/