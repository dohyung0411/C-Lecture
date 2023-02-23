//#include <stdio.h>
//#define LENGTH 10 //매크로 상수 정의에는 세미콜론(;)을 사용하지 않습니다.
// 상수나 명령문을 치환하는 문법
// 변수와 구분하기 위해서 일반적으로 모두 대문자로 적음
// #define     xxx         7
//          치환할 이름 치환될내용
// 
// 
// 헝가리언 표기법
/*
int main(void)
{
	int number = 3;
		const int NUMBER = 5;//심볼릭 상수 선언
		number = 10;//변수는 값을 변경할 수 있습니다.
		//NUMBER = 10;// 상수는 값을 변경할 수 없습니다. 만약 변경할 경우 컴파일 에러가 발생합니다.
		//"const"는 상수가 바뀌는걸 막아줌

		printf("%d\n", LENGTH);
		printf("%d\n", number);
		printf("%d\n", NUMBER);


		return 0;
}*/


// #include <헤더파일 이름> : VisualStudio에서 제공하는 헤더파일을 포함할 때
// #include "헤더파일 이름" : 프로그래머가 직접 정의해서 사용하는 헤더파일을 포함할 때

//#include <stdio.h>
//#include "testHeader.h"
//void Add()
//{
// printf("Add함수를 실행했습니다\n");
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


// <(자료)형 변환>
// - 특정 자료형이 다른 자료형으로 자동 또는 강제로 변환되는 것.

// - 형변환의 종류
//   1) 자동 형변환(암시적) : 컴파일러에 의해 자동으로 변환
//   2) 강제 형변환(명시적) : 개발자에 의해 명시된 형 변환

// 자동 형변환1
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


// 자동형변환 2
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


// 강제형변환 1
/*#include <stdio.h>
int main(void)
{
	printf("%d\n", (short)3.1415);
	printf("%d\n", (int)3.1415);
	printf("%f\n", (double)3.1415);
	printf("%f\n", (float)3.1415);

	return 0;
}*/


// 강제형변환 - 데이터 손실 (일부러)
/*#include<stdio.h>
int main(void)
{
	int num1 = 130; // 130을 이지수로 바꾸면 0000 0000 0000 0000 0000 0000 1000 0010

	char ch1 = (char)num1;// 4바이트를 1바이트로 바꾸면 앞의 3바이트가 날아가서 맨앞인 부호비트로 바뀌면서 -126이 생성

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


// <sizeof 연산자>
// - 피 연산자의 자료형에 대한 연산.
// - 컴파일 타임에 수행하는 연산자이다. (런타임 연산자 아님)
// - 따라서 아무리, 아무리 아무리 많이 사용하더라도 프로그램의 수행능력이 떨어지는 일은 없다.
// - 사용권장 (매우 매우 매우 매우 매우 매우 매우 매우 권장)

/*#include<stdio.h>
int main(void)
{
	int nData = 10;

	pirntf("size = %d\n", sizeof(int));
	pirntf("size = %d\n", sizeof(5));
	pirntf("size = %d\n", sizeof(nData));
	// 실수는 double만 써라. float xxx
	pirntf("size = %d\n", sizeof(123.45));
	pirntf("size = %d\n", sizeof(123.45F));


	return 0;

}*/

// scanf : 표준 입력함수
// printf : 표준 출력함수
// stdio(STandDard Input Output)
// scanf의 서식문자
// %d : 10진 정수 서식
// %f : 10진 실수 서식 
// %c : 한문자 서식
// $s : 문자열 서식

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

	//scanf 함수는 출력 기능을 지니고 있지 않습니다. 출력은 printf 함수를 이용합니다.
	printf("%c %d %f \n", character, inum, fnum);

	return 0;
}*/



/*#include<stdio.h>
int main(void)
{
	int nData1 = 0;
	int nData2 = 0;

	printf("정수 2개 입력해주세요 : ");
	scanf_s("%d", &nData1);
	scanf_s("%d", &nData2);

	int nData3 = nData1 + nData2;

	printf("입력한 정수의 값은 : %d입니다\n", nData3);
	return 0;
}*/

// 예상 실수 1 - & 누락
/*#include<stdio.h>
int main(void)
{
	int nInput = 0;
	scanf_s("%d", &nInput);

	printf("nInput = %d\n", &nInput);

	return 0;
}*/

// 한 문자 입력
//#include<stdio.h>
//int main(void)
//{
//	char ch = NULL; // NULL : 빈 문자
//
//	printf("문자입력 : ");
	//문자열 입력
	/*#include<stdio.h>
	int main(void)
	{
		char ch = NULL;
		char arr[10] = { NULL };

		printf("문자열 입력 : ");
		scanf_s("%s", arr, sizeof(arr));
		// %s에서 '&' 생략 이유는 배열의 이름은 배열의 시작주소를 가지고 있기 때문이다.
		printf("입력받은 문자열 : %s입니다\n", arr);





		return 0;
	}*/
	/*scanf_s("%c", &ch, sizeof(ch));

	printf("size = %d\n", ch);
	printf("%d\n", ch);

	return 0;


}*/