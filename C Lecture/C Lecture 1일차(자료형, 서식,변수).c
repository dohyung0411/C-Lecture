//#include <stdio.h>　//#은 전처리기 기능
//
//int main(void)
//{
//	printf("Hello, World\n");
//
//	return 0;
//}

//자료형(Data Type) 컴퓨터에 저장하는 형태
// 진수
// 사람 10진수 <-> 기계(컴퓨터) 2진수를 사용.
// 사람(10진수)-> 컴퓨터(2진수)

// byte
//8개의 bit로 구성된 저장 단뒤(1byte = 8bit)

//cm -> m -> km->  
//
//1byte -> 1KByte -> 1MByte -> 1GByte -> 1TByte 

// [컴퓨터의 메모리 관리 방법]
// 컴퓨터의 메모리 1칸 = 1byte

// Operating System (=OS)  (=Window, Linux, Andriid,,,)
// 1byte단위로 메모리를 구분지어서 컴퓨터 메모리를 관리해준다.


//문제1
// 앞에서 8bit 운영체제는 256Byte의 Memory를 관리할 수 있다고 했다
// 그렇다면 32bit 운영체제는 몇Byte의 Memory를 관리할 수 있는가?

// 부호비트
// sign bit(비트에서 맨 앞자리 숫자)
// sign bit가 1이면 음수로 인식, 0이면 양수로 인식.

// 자료형(Data Type) = 자료의 형태
// c언어는 자주 사용하는 자료형을 제외하고는 직접 만들어서 쓸 수 있다.
// (배열, 구조체, 공용체 등) 추후에 배움.

//#include <stdio.h>
//int main(void)
//{
// char
// return 0;
//}

// char : 1byte, 차-아님, 캐릭터라고 읽음, 정수(문자)를 표현하는 자료형
//signed char : 부호가 있는 1바이트 저장공간
//=(signed) char
// unsigned char : 부호가 없는 1바이트 저장공간

// 이 외 자주 사용하는 자료형
// char 1바이트 저장공간
// short 2바이트 저장공간
// int   4바이트 정수 저장공간
//float 4바이트 실수 저장공간
// double 8바이트 실수 저장공간


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

//%d : 10진 정수 서식
// %f : 실수 서식(float)
// %1f : 실수 서식(double)
// %c : 문자 서식

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
	// float fData : float 지수부 가수부
	// double dData

	printf("%c\n", ch1);
	printf("%c\n", ch2);
	printf("%c\n", sh1);
	printf("%c\n", in1);

	return 0;
}*/

// [ 상수와 변수 ]
// * 상수(Constant)
// - 변하지 않는 수 = 항상 같은 수 
// - 프로그램을 실행할 때, 한 번 값이 결정되면
//   프로그램이 끝날 때까지 다른 값으로 바뀌지 않는 정보(값)


// * 상수의 종류
//  1) 숫자형 상수
//   - 정수형 상수 -7, 0, 777, 012, 0xA7
//   -실수형 상수  -7.2, 3.14, 1.34e+2  1.34x10^2
//  2)문자형 상수 - 'a', 'A', '7', '+', '-' ASCII코드를 다외울수는 없다,
//    따라서 작은따옴표''를 쓰면 컴파일러에서 자동으로 문자로 인식해서 ASCII코드에 맞게
//		번역이 된다.
//  3)문자열형 상수 - "Hello~" 메모리 그림 그려주기 'H', 'e', 'l', 'l', 'o', '~', '0'
//    나중에 가면 또 배운다.


// * 변수(Variable)
//   - 데이터를 저장하기 위해 사용하는 개념
//   - 변하는 값

// * 변수를 사용하는 이유

/*#include<stdio.h>
int main(void)
{
	// 변수의 선언
	char        cData       ;
	// 자료형   변수명    구분자


	// 변수의 선언 및 초기화
	char    cData_2 = 7;
	// 자료형   변수명  대입연산자    값    구분자

	return 0;
}*/



// * 변수 이름 선언 시 유의사항
// - 영문자 a~Z, A~Z, 숫자 0~9 그리고 _(밑줄)을 사용할 수 있다.
// - 숫자로 시작하거나 모두 숫자로 구성되어서는 안된다. 1000, 7_data
// - 공백을 포함할 수 없다 name 1, my number
// - 대/소문자를 구별한다 data, Data, daTa, datA
// - C언어의 예약어는 변수 이름으로 사용할 수 없다.

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
//	printf("나의 나이는 %d", age);
//	printf("나의 키는 %.1lf", height);
//	printf("나의 몸무게는 %.1lf", weight);
//}