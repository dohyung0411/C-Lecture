// ���� 1
// �� ���� �Է¹޾� ū ���� ����ϼ���
// ��, ������ ���׿����ڸ� ����ϼ���

// ���� 2
// ������ �Է¹޾� �Է¹��� ���� ����� 80�� �̻��̸� '�հ��Դϴ�'
// �ƴϸ� '���հ��Դϴ�'�� ����մϴ�
// ��, ������ ���׿����ڸ� ����ϼ���

// ���� 1
/*
#include <stdio.h>
int main(void)
{

	int nData_1 = 0;
	int nData_2 = 0;

	printf("ù��° ������ �Է��ϼ���: ");
	scanf_s("%d", &nData_1);
	printf("�ι�° ������ �Է��ϼ���: ");
	scanf_s("%d", &nData_2);

	nData_1 > nData_2 ? printf("ū ��: %d\n", nData_1) : printf("ū ��: %d\n", nData_2);

	return 0;
}

*/

//���� 2


/*
#include <stdio.h>
int main(void)
{
	int nData_1 = 0;
	int nData_2 = 0;
	int nData_3 = 0;
	double avg = 0;

	printf("���� ����: ");
	scanf_s("%d", &nData_1);
	printf("���� ����: ");
	scanf_s("%d", &nData_2);
	printf("���� ����: ");
	scanf_s("%d", &nData_3);

	avg = (nData_1 + nData_2 + nData_3) / 3;
	avg >= 80 ? printf("\n�հ��Դϴ�\n") : printf("\n���հ��Դϴ�\n");

	return 0;
}
*/

//8. ��Ʈ �����ڿ� ����Ʈ ������
// & : AND ���� - �� bit �� ��� 1�϶��� 1
// | : OR  ���� - �� bit �� �ϳ��� 1�� �� 1
// ^ : XOR ���� - �� bit �� ���� �ٸ� bit �� �� 1
// ~ : NOY ���� - bit�� �ݴ�� ��, bit�� 1�϶� 0����, bit�� 0�϶� 1��
// << : �������� �� ��, ���� ���� bit Overflow(�����), ������ 0���� ä��
// >> : ���������� �� ��, ���� ������ bit Inderflow(�����), ���� ��ȣ��Ʈ�̸� 1, ��ȣ ���� ��Ʈ�̸� 0���� ä����

// 10���� ���ڸ� 2������ �ٲ㼭 ����
// 10 -> 0000 1010
// 15 -> 0000 1111

/*
#include <stdio.h>
int main(void)
{
	unsigned char cData = 10;
	unsigned char cBitTest = 9;

	printf("%d\n", cData & cBitTest);
	printf("%d\n", cData | cBitTest);
	printf("%d\n", cData ^ cBitTest);
	printf("%d\n", ~cData);

	printf("%d\n", cData << 1);
	printf("%d\n", cData >> 1);

	return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
	int num1 = 15;							// 00000000 00000000 00000000 00001111
	int num2 = 20;							// 00000000 00000000 00000000 00010100
	int num3 = num1 << 4;				// 00000000 00000000 00000000 11110000  =  240
	int num4 = num2 >> 3;				// 00000000 00000000 00000000 00000010  =  2

	printf("<< ����Ʈ ���� ��� : %d\n", num3);
	printf("<< ����Ʈ ���� ��� : %d\n", num4);

	return 0;
}
*/

// % ������  ->  ���� �� ������

/*
#include <stdio.h>
int main(void)
{
	int nData = 0;

	printf("intup: ");
	scanf_s("%d", &nData);

	nData % 2 == 0 ? printf("¦��") : printf("Ȧ�� \n");
	return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
	int nData = 0;

	printf("�ʸ� �Է��ϼ���: ");
	scanf_s("%d", &nData);

	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.", nData, nData/3600, nData % 3600 / 60, nData % 60);

	return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
	int nData_1 = 0;
	int nData_2 = 0;

	printf("ù��° ������ �Է��ϼ���: ");
	scanf_s("%d", &nData_1);
	printf("�ι�° ������ �Է��ϼ���: ");
	scanf_s("%d", &nData_2);

	int nData_3 = nData_1 + nData_2;

	nData_3 % 4 == 0 ? printf("%d + %d �� 4�� ����Դϴ�.", nData_1, nData_2) : printf("%d + %d �� 4�� ����� �ƴմϴ�.", nData_1, nData_2);

	return 0;
}
*/

// if�� = ��� = �б⹮(branching statement
// ���α׷��� �帧(������ ����Ǵ� ����)�� �����ϴ� ����

// c++, JAVA, c#, ���̽� if

//if (���ǽ�)
//{
	//������ ������ ��� ������ ����
//}


// 1-1 if �⺻

// true = 1, false = 0
/*
#include <stdio.h>
int main(void)
{
	if (1)
	{
		printf("if�� �� ������\n");		 // if�� ���ǽ��� ���� ��� ����
	}


	return 0;
}

*/


// 1-2 if �⺻
/*
#include <stdio.h>
int main(void)
{
	int nData = 0;

	printf("input: ");
	scanf_s("%d", &nData);

	if (nData % 2 == 0)
	{
		printf("�Է��� ���� ¦���Դϴ�\n");
	}
	printf("ù��° if ���� ���");

	if (nData % 2 == 1)
	{
		printf("�Է��� ���� Ȧ���Դϴ�\n");
	}
	printf("�ι�° if ���� ���");

	return 0;
}
*/


// if ���ǻ���
// ���迬���� '=' '=='
// ����, ��� ��ġ ����
// �����ݷ�
// scope { } ��ġ

/*
#include <stdio.h>
int main(void)
{
	int nAge = 0;

	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &nAge);

	if (nAge >= 20)
	{
		printf("ó�� ��, ����� ���̴� %d�� �Դϴ�\n", nAge);

		nAge = 20;

	}

	printf("ó�� ��, ����� ���̴� %d�� �Դϴ�\n", nAge);

	return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("ù��° ��; ");
	scanf_s("%d", &a);
	printf("�ι�° ��; ");
	scanf_s("%d", &b);
	printf("����° ��; ");
	scanf_s("%d", &c);

	printf("\n");

	if (a % 2 == 0)
	{
		printf("%d\n", a);
	}

	if (b % 2 == 0)
	{
		printf("%d\n", b);
	}

	if (c % 2 == 0)
	{
		printf("%d\n", c);
	}

	return 0;
}
*/


// ���� 1
/*
#include <stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;

	printf("ù��° ����: ");
	scanf_s("%d", &a);

	int b = a;

	printf("�ι�° ����: ");
	scanf_s("%d", &a);
	if (b < a)
	{
	int b = a;
	}

	printf("����° ����: ");
	scanf_s("%d", &a);
	if (b < a)
	{
	int b = a;
	}

	printf("%d", b);


	return 0;
}
*/



//���� 2
/*
#include <stdio.h>
int main(void)
{
	int a = 0;
	int b = 1000;

	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &a);

	if (a > 19)
	{
		printf("���� ���: %d", b);
	}

	if (a < 20)
	{
		int c = b * 0.75;
		printf("���� ���: %d��", c);
	}
	return 0;
}
*/

//���� 3
/*
#include <stdio.h>
int main(void)
{
	char a;

	printf("���ĺ� �ϳ��� �Է��ϼ���: ");
	scanf_s("%c", &a, sizeof(a));



	if (a >= 'A' && a <= 'Z')
	{
		printf("���ĺ� �빮�� �Է��ϼ̽��ϴ�.\n");
	}

	if (a >= 'a' && a <= 'z')
	{
		printf("���ĺ� �ҹ��� �Է��ϼ̽��ϴ�.\n");
	}


	return 0;
}
*/



// if - else
// else�� if�� �־�߸� ��� ����
/*
#include <stdio.h>
int main(void)
{
	if (����)
	{
		���϶� ����� ����1
		���϶� ����� ����2
		���϶� ����� ����3
	}
	else
	{
		�����϶� ����� ����1
		�����϶� ����� ����2
		�����϶� ����� ����3
	}

	return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
	int nData = 0;

	printf("nData :");
	scanf_s("%d", &nData);

	if (nData % 2 == 0)
	{
		printf("¦���Դϴ�.\n");

		if (nData % 3 == 0)
		{
			printf("3�� ����Դϴ�.");
		}
  }
	else
	{
		printf("Ȧ���Դϴ�.");
	}

	return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
	int nInput = 0;
	scanf_s("%d"), &nInput;

	if (nInput > 10)
	{
		int nInput = 20;
		printf("2�� nInput = %d\n", nInput);

			if (nInput > 20)
			{
				int nInput = 30;
				printf("3�� nInput = %d\n", nInput);

			}
	}

	printf("1�� nInput = %d\n", nInput);

	return 0;
}

*/