//#include <stdio.h>��//#�� ��ó���� ���
//
//int main(void)
//{
//	printf("Hello, World\n");
//
//	return 0;
//}

//�ڷ���(Data Type) ��ǻ�Ϳ� �����ϴ� ����
// ����
// ��� 10���� <-> ���(��ǻ��) 2������ ���.
// ���(10����)-> ��ǻ��(2����)

// byte
//8���� bit�� ������ ���� �ܵ�(1byte = 8bit)

//cm -> m -> km->  
//
//1byte -> 1KByte -> 1MByte -> 1GByte -> 1TByte 

// [��ǻ���� �޸� ���� ���]
// ��ǻ���� �޸� 1ĭ = 1byte

// Operating System (=OS)  (=Window, Linux, Andriid,,,)
// 1byte������ �޸𸮸� ������� ��ǻ�� �޸𸮸� �������ش�.


//����1
// �տ��� 8bit �ü���� 256Byte�� Memory�� ������ �� �ִٰ� �ߴ�
// �׷��ٸ� 32bit �ü���� ��Byte�� Memory�� ������ �� �ִ°�?

// ��ȣ��Ʈ
// sign bit(��Ʈ���� �� ���ڸ� ����)
// sign bit�� 1�̸� ������ �ν�, 0�̸� ����� �ν�.

// �ڷ���(Data Type) = �ڷ��� ����
// c���� ���� ����ϴ� �ڷ����� �����ϰ�� ���� ���� �� �� �ִ�.
// (�迭, ����ü, ����ü ��) ���Ŀ� ���.

//#include <stdio.h>
//int main(void)
//{
// char
// return 0;
//}

// char : 1byte, ��-�ƴ�, ĳ���Ͷ�� ����, ����(����)�� ǥ���ϴ� �ڷ���
//signed char : ��ȣ�� �ִ� 1����Ʈ �������
//=(signed) char
// unsigned char : ��ȣ�� ���� 1����Ʈ �������

// �� �� ���� ����ϴ� �ڷ���
// char 1����Ʈ �������
// short 2����Ʈ �������
// int   4����Ʈ ���� �������
//float 4����Ʈ �Ǽ� �������
// double 8����Ʈ �Ǽ� �������


//#include<stdio.h>
//int main(void)
//{
//	printf("char size = %dbyte\n", sizeof(char));
//	printf("short size = %dbyte\n", sizeof(short));
//	printf("int size = %dbyte\n", sizeof(int));
//	printf("float size = %dbyte\n", sizeof(float));
//	printf("double size = %dbyte\n", sizeof(double));
//	return 0;
//}



/*#include <stdio.h>

int main(void)
{
	unsigned char num = 100;
	printf("%d\n", sizeof(100));
	printf("%d\n", sizeof(3.14));

	return 0;
}*/

//ASKII(American Standard Code for Information Interchange)

//%d : 10�� ���� ����
// %f : �Ǽ� ����(float)
// %1f : �Ǽ� ����(double)
// %c : ���� ����

/*#include<stdio.h>
int main(void)
{
	//printf("%c\n", 'A');
	//printf("d\n", 'A');
	printf("%c", 94);
	printf("%c\n", 94);
	return 0;
}*/

/*#include <stdio.h>

int main(void)
{
	char ch1 = 66, ch2 = 'B';
	short sh1 = 67;
	int in1 = 68;
	//  nData
	// float fData : float ������ ������
	// double dData

	printf("%c\n", ch1);
	printf("%c\n", ch2);
	printf("%c\n", sh1);
	printf("%c\n", in1);

	return 0;
}*/

// [ ����� ���� ]
// * ���(Constant)
// - ������ �ʴ� �� = �׻� ���� �� 
// - ���α׷��� ������ ��, �� �� ���� �����Ǹ�
//   ���α׷��� ���� ������ �ٸ� ������ �ٲ��� �ʴ� ����(��)


// * ����� ����
//  1) ������ ���
//   - ������ ��� -7, 0, 777, 012, 0xA7
//   -�Ǽ��� ���  -7.2, 3.14, 1.34e+2  1.34x10^2
//  2)������ ��� - 'a', 'A', '7', '+', '-' ASCII�ڵ带 �ٿܿ���� ����,
//    ���� ��������ǥ''�� ���� �����Ϸ����� �ڵ����� ���ڷ� �ν��ؼ� ASCII�ڵ忡 �°�
//		������ �ȴ�.
//  3)���ڿ��� ��� - "Hello~" �޸� �׸� �׷��ֱ� 'H', 'e', 'l', 'l', 'o', '~', '0'
//    ���߿� ���� �� ����.


// * ����(Variable)
//   - �����͸� �����ϱ� ���� ����ϴ� ����
//   - ���ϴ� ��

// * ������ ����ϴ� ����

/*#include<stdio.h>
int main(void)
{
	// ������ ����
	char        cData       ;
	// �ڷ���   ������    ������


	// ������ ���� �� �ʱ�ȭ
	char    cData_2 = 7;
	// �ڷ���   ������  ���Կ�����    ��    ������

	return 0;
}*/



// * ���� �̸� ���� �� ���ǻ���
// - ������ a~Z, A~Z, ���� 0~9 �׸��� _(����)�� ����� �� �ִ�.
// - ���ڷ� �����ϰų� ��� ���ڷ� �����Ǿ�� �ȵȴ�. 1000, 7_data
// - ������ ������ �� ���� name 1, my number
// - ��/�ҹ��ڸ� �����Ѵ� data, Data, daTa, datA
// - C����� ������ ���� �̸����� ����� �� ����.

/*#include<stdio.h>
int main(void)
{
	char azAZ09_ = 7;

	printf("%d\n", azAZ09_);
	return 0;
}*/

//#include<stdio.h>
//int main(void)
//{
//	int num1 = 10;
//	int num2 = 30;
//
//	int num3;
//	num3 = num1 + num2;
//	
//	int num4;
//	num4 = num2 - num1;
//
//
//	printf("num1 = %d", num1);
//	printf("num2 = %d", num2);
//	printf("num3 = %d", num3);
//	printf("num4 = %d", num4);
//	
//}
//#include<stdio.h>
//int main(void)
//{
//	unsigned char age = 16;
//	double height = 180;
//	double weight = 75;
//
//	printf("���� ���̴� %d", age);
//	printf("���� Ű�� %.1lf", height);
//	printf("���� �����Դ� %.1lf", weight);
//}



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


// ���� �̸��� �ѱ۷� �Է¹ް�,
// ���� �̸��� ������ ����ϼ���

/*#include<stdio.h>
int main(void)
{
	char name[10] = { NULL };



	printf("����� �̸��� ����? ");
		scanf_s("%s", name, sizeof(name));

		printf("�̸��� : %s�Դϴ�.\n", name);

		printf("���� %c%c�Դϴ�.\n", name[0], name[1]);
		printf("�̸��� %c%c%c%c.�Դϴ�\n", name[2], name[3], name[4], name[5]);


	return 0;
}*/
//�ڷ���
	// ������ �޸𸮳����� ���α׷��� �����ϴ¼���

	//���� : int (=integer)
	//�Ǽ� : double
	//(��)���� : char
	//

/*#include<stdio.h>
int main(void)
{
	int kor = 0;
	int math = 0;
	int eng = 0;

	int total = 0;
	double avg = 0;


	printf("����� : ");
	scanf_s("%d", &kor);

	printf("���м��� : ");
	scanf_s("%d", &math );

	printf("����� : ");
	scanf_s("%d", &eng );

	total = kor + math + eng;
	avg = total / 3.0;

	printf("���� : %d ��� : %.1lf\n", total, avg);


	return 0;
}*/

// ������
//1. ��� ������
//2. ���� ������
//3. ���� ���� ������
//4. ���� ������(�� ������)
//5. �� ������
//6. ���� ������
//7. ���� ������
//8. ��Ʈ / ����Ʈ ������


/*#include <stdio.h>

int main(void)
{
	int num1 = 7, num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);//%�� �������� ���ϴ� ��ȣ

	printf("%d\n", -num1);

	return 0;
}*/


// < 2. ���� ������ >

// '=' : ���Կ������� ����(l-value)�� '����'���� ������(r-value)�� '��'���� �ؼ��Ѵ�
//       r-value ���� ó���� ���� �ѵ�(����) 1-value�� ����
//       l-value ���� ��������� �̸�(������) �� ��õȴ�, locator(��ġ������)
/*#include<stdio.h>
int main(void)
{
	int x = 0;
	int nInput = 0;

	printf("x = %d\n", x);

	printf("Input? : ");
	scanf_s("%d", &nInput);

	//nInput ������ ����� ����ڰ� �Է��� ���� x�� �����Ѵ�.
	// x�� ����ִ� ���� Overwrite�ǰ� �������

	x = nInput;

	printf("x = %d\n", x);

	return 0;
}*/


/*#include<stdio.h>
int main(void)
{
	int x = 10;
	int y = 20;
	int temp = 0;

	printf("Before x = %d, y = %d\n", x, y);

	temp = x;
	x = y;
	y = temp;

	printf("After x = %d, y = %d\n", x, y);

	return 0;
}*/

// 3. ���� ���� ������ -> �ᵵ�ǰ� �Ƚᵵ �˴ϴ�. ��, �˰� ��ø� �˴ϴ�.
// ���Կ����� + ���������

// a = a + b    ->   a += b

/*#include<stdio.h>
int main(void)
{
	int a = 7;
	int b = 3;

	//a = a + b
	a += b;

	printf("a = %d\n", a);

	return 0;

}*/


/*#include<stdio.h>
int main(void)
{
	int nInput = 0;
	int nTotal = 0;

	printf("nInput = ", nInput);
	 scanf_s("%d", &nInput);
	 nTotal = nInput;

	 printf("nInput = ", nInput);
	 scanf_s("%d", &nInput);
	 nTotal +=  nInput;

	 printf("nInput = ", nInput);
	scanf_s("%d", &nInput);
	 nTotal +=  nInput;

	printf("Total : %d\n", nTotal);
	return 0;
}*/


// 4. ���� ������(�� ������)

// Ư�� �ǿ����ڵ��� ���Ͽ� ��/������ ���� ��ȯ�Ѵ�
// �� : ���α׷��Ӱ� ���ϴ� ������� ������ �� : 0 �̾ƴ� ��簪(��ǥ��:1)
// ���� : ������ ������ : 0

/*#include<stdio.h>
int main(void)
{
	int a = 12
		int b = 11

		printf("a == b : %d\n", a == b);
	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b : %d\n", a >= b);
	printf("a <= b : %d\n", a <= b);
	printf("a != b : %d\n", a != b);
	return 0;
}*/


// 5. shsfl dustkswk
// AND����(&&) : �� �ǿ����� ��ΰ� ���̸� ���� ��ȯ
// OR����(!!) : �� �ǿ����� �� �ϳ��� ���̶� ���� ��ȯ
// ��������(!) : �� �������� ���� ���̸� ����, �����̸� ���� ��ȯ



// < 6. ���� ������ >
// - ������ ���� 1��ŭ ������Ű�ų� ���� ��ų �� ���Ǵ� ������
// ����(Prefix) : �ǿ����� �տ� ���� �����ڰ� ����, �������� ���� �� ������ ���� ó�� ����
// ����(Postfix) : �ǿ����� �ڿ� ���� �����ڰ� ����, ��� ���� ó�� �� �������� ����
// '++'��, '--'�� ǥ�õǴ� ������


// 7. ���� ������
// ���� ? ��� 1 : ��� 2
// ������ ���̸� ��� 1�� ����, ������ �����̸� ��� 2�� ����
// ���� �ڸ��� ���� EXEM06-02

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


//����
//���� 1���� �Է¹޾� �� ���� ���ĺ��̶�� �ش� ���ĺ��� ���� ���ڷ� �����ϼ���

// ex) a�� �Է��ߴٸ� b�� ���
// z�� �Է��ߴٸ� a�� ���
// Z�� �ӷ��ߴٸ� A�� ���
















