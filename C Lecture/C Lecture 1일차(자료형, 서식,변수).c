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