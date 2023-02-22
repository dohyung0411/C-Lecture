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


// 본인 이름을 한글로 입력받고,
// 성과 이름을 나누어 출력하세요

/*#include<stdio.h>
int main(void)
{
	char name[10] = { NULL };



	printf("당신의 이름은 무엇? ");
		scanf_s("%s", name, sizeof(name));

		printf("이름은 : %s입니다.\n", name);

		printf("성은 %c%c입니다.\n", name[0], name[1]);
		printf("이름은 %c%c%c%c.입니다\n", name[2], name[3], name[4], name[5]);


	return 0;
}*/
//자료형
	// 한정된 메모리내에서 프로그램을 개발하는수업

	//정수 : int (=integer)
	//실수 : double
	//(한)문자 : char
	//

/*#include<stdio.h>
int main(void)
{
	int kor = 0;
	int math = 0;
	int eng = 0;

	int total = 0;
	double avg = 0;


	printf("국어성적 : ");
	scanf_s("%d", &kor);

	printf("수학성적 : ");
	scanf_s("%d", &math );

	printf("영어성적 : ");
	scanf_s("%d", &eng );

	total = kor + math + eng;
	avg = total / 3.0;

	printf("총합 : %d 평균 : %.1lf\n", total, avg);


	return 0;
}*/

// 연산자
//1. 산술 연산자
//2. 대입 연산자
//3. 복합 대입 연산자
//4. 관계 연산자(비교 연산자)
//5. 논리 연산자
//6. 증감 연산자
//7. 삼항 연산자
//8. 비트 / 시프트 연산자


/*#include <stdio.h>

int main(void)
{
	int num1 = 7, num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);//%는 나머지를 구하는 기호

	printf("%d\n", -num1);

	return 0;
}*/


// < 2. 대입 연산자 >

// '=' : 대입연산자의 왼쪽(l-value)은 '공간'으로 오른쪽(r-value)은 '값'으로 해석한다
//       r-value 값의 처리를 먼저 한뒤(저장) 1-value로 대입
//       l-value 보통 저장공간의 이름(변수명) 이 명시된다, locator(위치지정자)
/*#include<stdio.h>
int main(void)
{
	int x = 0;
	int nInput = 0;

	printf("x = %d\n", x);

	printf("Input? : ");
	scanf_s("%d", &nInput);

	//nInput 변수에 저장된 사용자가 입력한 값을 x에 복사한다.
	// x에 들어있던 값은 Overwrite되고 사라진다

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

// 3. 복합 대입 연산자 -> 써도되고 안써도 됩니다. 단, 알고만 계시면 됩니다.
// 대입연산자 + 산술연산자

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


// 4. 관계 연산자(비교 연산자)

// 특정 피연산자들을 비교하여 참/거짓의 값을 반환한다
// 참 : 프로그래머가 원하는 결과값이 나왔을 때 : 0 이아닌 모든값(대표값:1)
// 거짓 : 나오지 않을때 : 0

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
// AND연산(&&) : 두 피연산자 모두가 참이면 참을 반환
// OR연산(!!) : 두 피연산자 중 하나만 참이라도 참을 반환
// 부정연산(!) : 피 연산자의 값이 참이면 거짓, 거짓이면 참을 반환



// < 6. 증감 연산자 >
// - 변수의 값을 1만큼 증가시키거나 감소 시킬 때 사용되는 연산자
// 전위(Prefix) : 피연산자 앞에 증감 연산자가 붙음, 증감연산 수행 후 나머지 문장 처리 진행
// 후위(Postfix) : 피연산자 뒤에 증감 연산자가 붙음, 모든 문장 처리 후 증감연산 수행
// '++'와, '--'로 표시되는 연산자


// 7. 삼항 연산자
// 조건 ? 결과 1 : 결과 2
// 조건이 참이면 결과 1을 수행, 조건이 거짓이면 결과 2를 수행
// 예제 코리아 교재 EXEM06-02

// 문제 1
// 두 수를 입력받아 큰 수를 출력하세요
// 단, 무조건 삼항연산자를 사용하세요

// 문제 2
// 세수를 입력받아 입력받은 수의 평균이 80점 이상이면 '합격입니다'
// 아니면 '불합격입니다'를 출력합니다
// 단, 무조건 삼항연산자를 사용하세요

// 문제 1
/*
#include <stdio.h>
int main(void)
{

	int nData_1 = 0;
	int nData_2 = 0;

	printf("첫번째 정수를 입력하세요: ");
	scanf_s("%d", &nData_1);
	printf("두번째 정수를 입력하세요: ");
	scanf_s("%d", &nData_2);

	nData_1 > nData_2 ? printf("큰 수: %d\n", nData_1) : printf("큰 수: %d\n", nData_2);

	return 0;
}

*/

//문제 2


/*
#include <stdio.h>
int main(void)
{
	int nData_1 = 0;
	int nData_2 = 0;
	int nData_3 = 0;
	double avg = 0;

	printf("국어 점수: ");
	scanf_s("%d", &nData_1);
	printf("수학 점수: ");
	scanf_s("%d", &nData_2);
	printf("영어 점수: ");
	scanf_s("%d", &nData_3);

	avg = (nData_1 + nData_2 + nData_3) / 3;
	avg >= 80 ? printf("\n합격입니다\n") : printf("\n불합격입니다\n");

	return 0;
}
*/

//8. 비트 연산자와 시프트 연산자
// & : AND 연산 - 두 bit 가 모두 1일때만 1
// | : OR  연산 - 두 bit 중 하나라도 1일 때 1
// ^ : XOR 연산 - 두 bit 가 서로 다른 bit 일 때 1
// ~ : NOY 연산 - bit를 반대로 즉, bit가 1일때 0으로, bit가 0일때 1로
// << : 왼쪽으로 밀 때, 가장 왼쪽 bit Overflow(사라짐), 오른쪽 0으로 채움
// >> : 오른쪽으로 밀 때, 가장 오른쪽 bit Inderflow(사라짐), 왼쪽 부호비트이면 1, 부호 없는 비트이면 0으로 채워짐

// 10진수 숫자를 2진수로 바꿔서 연산
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

	printf("<< 시프트 연산 결과 : %d\n", num3);
	printf("<< 시프트 연산 결과 : %d\n", num4);

	return 0;
}
*/

// % 연산자  ->  나눈 후 나머지

/*
#include <stdio.h>
int main(void)
{
	int nData = 0;

	printf("intup: ");
	scanf_s("%d", &nData);

	nData % 2 == 0 ? printf("짝수") : printf("홀수 \n");
	return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
	int nData = 0;

	printf("초를 입력하세요: ");
	scanf_s("%d", &nData);

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", nData, nData/3600, nData % 3600 / 60, nData % 60);

	return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
	int nData_1 = 0;
	int nData_2 = 0;

	printf("첫번째 정수를 입력하세요: ");
	scanf_s("%d", &nData_1);
	printf("두번째 정수를 입력하세요: ");
	scanf_s("%d", &nData_2);

	int nData_3 = nData_1 + nData_2;

	nData_3 % 4 == 0 ? printf("%d + %d 은 4의 배수입니다.", nData_1, nData_2) : printf("%d + %d 는 4의 배수가 아닙니다.", nData_1, nData_2);

	return 0;
}
*/

// if문 = 제어문 = 분기문(branching statement
// 프로그램의 흐름(연산이 진행되는 순서)을 변경하는 구문

// c++, JAVA, c#, 파이썬 if

//if (조건식)
//{
	//조건이 만족할 경우 실행할 문장
//}


// 1-1 if 기본

// true = 1, false = 0
/*
#include <stdio.h>
int main(void)
{
	if (1)
	{
		printf("if문 내 진입함\n");		 // if의 조건식이 참인 경우 실행
	}


	return 0;
}

*/


// 1-2 if 기본
/*
#include <stdio.h>
int main(void)
{
	int nData = 0;

	printf("input: ");
	scanf_s("%d", &nData);

	if (nData % 2 == 0)
	{
		printf("입력한 수는 짝수입니다\n");
	}
	printf("첫번째 if 문을 벗어남");

	if (nData % 2 == 1)
	{
		printf("입력한 수는 홀수입니다\n");
	}
	printf("두번째 if 문을 벗어남");

	return 0;
}
*/


// if 유의사항
// 관계연산자 '=' '=='
// 변수, 상수 위치 변경
// 세미콜론
// scope { } 위치

/*
#include <stdio.h>
int main(void)
{
	int nAge = 0;

	printf("나이를 입력하세요: ");
	scanf_s("%d", &nAge);

	if (nAge >= 20)
	{
		printf("처리 전, 당신의 나이는 %d세 입니다\n", nAge);

		nAge = 20;

	}

	printf("처리 전, 당신의 나이는 %d세 입니다\n", nAge);

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

	printf("첫번째 수; ");
	scanf_s("%d", &a);
	printf("두번째 수; ");
	scanf_s("%d", &b);
	printf("세번째 수; ");
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


// 문제 1
/*
#include <stdio.h>
int main(void)
{
	int a = 0;
	int b = 0;

	printf("첫번째 정수: ");
	scanf_s("%d", &a);

	int b = a;

	printf("두번째 정수: ");
	scanf_s("%d", &a);
	if (b < a)
	{
	int b = a;
	}

	printf("세번째 정수: ");
	scanf_s("%d", &a);
	if (b < a)
	{
	int b = a;
	}

	printf("%d", b);


	return 0;
}
*/



//문제 2
/*
#include <stdio.h>
int main(void)
{
	int a = 0;
	int b = 1000;

	printf("나이를 입력하세요: ");
	scanf_s("%d", &a);

	if (a > 19)
	{
		printf("최종 요금: %d", b);
	}

	if (a < 20)
	{
		int c = b * 0.75;
		printf("최종 요금: %d원", c);
	}
	return 0;
}
*/

//문제 3
/*
#include <stdio.h>
int main(void)
{
	char a;

	printf("알파벳 하나를 입력하세요: ");
	scanf_s("%c", &a, sizeof(a));



	if (a >= 'A' && a <= 'Z')
	{
		printf("알파벳 대문자 입력하셨습니다.\n");
	}

	if (a >= 'a' && a <= 'z')
	{
		printf("알파벳 소문자 입력하셨습니다.\n");
	}


	return 0;
}
*/



// if - else
// else는 if가 있어야만 사용 가능
/*
#include <stdio.h>
int main(void)
{
	if (조건)
	{
		참일때 실행될 문장1
		참일때 실행될 문장2
		참일때 실행될 문장3
	}
	else
	{
		거짓일때 실행될 문장1
		거짓일때 실행될 문장2
		거짓일때 실행될 문장3
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
		printf("짝수입니다.\n");

		if (nData % 3 == 0)
		{
			printf("3의 배수입니다.");
		}
  }
	else
	{
		printf("홀수입니다.");
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
		printf("2번 nInput = %d\n", nInput);

			if (nInput > 20)
			{
				int nInput = 30;
				printf("3번 nInput = %d\n", nInput);

			}
	}

	printf("1번 nInput = %d\n", nInput);

	return 0;
}

*/





/*#include<stdio.h>
int main(void)
{
	int nScore = 0;

	// 점수에 따른 등급을 저장함 변수를 선언함
	char cGrade;

	printf("Input score =");
	scanf_s("%d", &nScore);

	if (nScore >= 90) // 90점 이상인 경우
	{
		cGrade = 'A';
	}
	else // 90점 미만인 경우
	{
		if (nScore >= 70) // 80점 미만이면서 70점인 경우
		{
			cGrade = 'C';
		}
		else // 70점 미만인경우
		{
			if (nScore >= 60) // 70점 미만이면서 60점 이상인 경우
			{
				cGrade = 'D';
			}
			else //60점 미만인 경우
			{
				cGrade = 'F';
			}
		}

	}
	printf("당신의 점수는 %d점이고 등급은 %c입니다\n", nScore, cGrade);

	return 0;
}*/

/*#include<stdio.h>
int main(void)
{
	int E = 0;
	int M = 0;
	int L = 0;
	int  total = 0;
	printf("국영수 점수 입력");
	scanf_s("%d%d%d", &L, &E, &M);
	total = E + M + L;
	if (L >= 40  && E >= 40 && M >= 40)
	{
		if (total / 3 >= 60)
		{
			printf("합격입니다");

		}
		else
		{
			printf("불합격입니다");
		}
	}
	return 0;

}*/


// switch

/*//switch (수식 또는 정수형 변수)
{
case 상수1:
	명령문1;
	break;

case 상수2:
		명령문2;
		break;

case 상수 3:
	  명령문3;
		break;

default:
	명령문4;
	break;

}*/

/*#include<stdio.h>
int main(void)
{
	int nData = 0;
	printf("정수 입력 : ");
	scanf_s("%d", &nData);

	switch (nData)

	case 1:
		printf("1을 입력하셨습니다\n");
		break;
	case 2:
		printf("2을 입력하셨습니다");
		break;
	case 3:
		printf("3을 입력하셨습니다");
		break;
	default:
		printf("그 외의 값을 입력하셨습니다\n");
		break;

	}

	printf("switch문 종료\n");

	return 0;


}*/


//goto
//goto문은 break문처럼 특정위치로 프로그램의 흐름을 '즉시'변경한다
// break문은 사용할 수 있는곳이 문법적으로 제한적이(loop, switch 등)
// 반면 goto문은 사용자가 레이블(Label)만 명시하면 어느위치든 사용가능하다.



/*#include<stdio.h>
int main(void)
{
	int a = 0;
	printf("월을 입력하세요.");
	scanf_s("%d", &a);

	switch (a)
	{
	case 12:
	case 1:
	case 2:
		printf("겨울입니다");
		break;

	case 3:
	case 4:
	case 5:
		printf("봄입니다");
		break;

	case 6:
	case 7:
	case 8:
		printf("여름입니다");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을입니다");
		break;
	}
			return 0;

}*/

//#include<stdio.h>
//int main(void)
//{
	//printf("Hello, World!\n");

	//return 0;

//}

// 반복문 (while, for)
// 일정구간의 코드를 연속적으로 반복해 실행하는 제어문

//while (true)
//{
	//반복 실행하고자 하는 문장;
//}

/*#include<stdio.h>
int main(void)
{
	int nData = 0;
	while (nData < 10)
	{
		printf("Hello, World!\n");
		nData++;

	}
	return 0;

}*/

/*#include<stdio.h>
int main(void)
{
	int nTotal = 0;
	int nData = 1;

	//for (초기값; 조건; 증감식)
	//{
		//반복 실행하고자 하는 문장;
	//}
	//while (nData <= 10)
	//{

		//nTotal = nTotal + nData;
		//nData++;
	//}
	printf("1부터 10까지의 합 : %d", nTotal);

	return 0;
}*/

/*#include<stdio.h>
int main(void)
{
	int nData = 1;
	int Input = 0;
	int Total = 0;

	printf("Input?");
	scanf_s("%d", &Input);

	while (nData <= Input)
	{
		Total = Total + nData;
		nData++;

	}
	printf("1부터 %d까지의 합은 %d입니다", Input, Total);
	return 0;
}*/

/*#include<stdio.h>
int main(void)
{
	// 가장 초기에는,
	// 1. 초기값 설정
	// 2. 조건 검사

	//두번째 부터는
	// 1. 증감
	// 2. 조건 검사

	int Total = 0;
	int Input = 0;

	printf("Input?");
	scanf_s("%d", &Input);

	for (int nData = 1; nData <= Input; nData++)
	{
		Total = Total + nData;

	}
	printf("1부터 %d까지의 총합은 %d입니다",Input,  Total);
	return 0;
}*/

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

// 메모리 용도별 분류
// Code 영역 : 컴파일된 코드 저장영역

// Steak 영역 : {}내에 생성되 녹ㅇ간 저장영역 // 지역변수
// Heap 영역 : 동적메모리 할당 영역
// Data 영역: 공유데이터 저장 영역           // 전역변수, static 변수


// 지역변수
// 함수 내에서 생성/소멸되는 변수
// 함수가 호출될 때 메모리에 저장 공간이 만들어졌다가 함수 호출이 끝나면 함께 사라짐
// 즉, 함수와 같은 수명을 가짐

/*#include<stdio.h>
int ReturnNum()
{
	int num = 5;
	return num;
}
int main()
{
	ReturnNum();
	printf("%d, num");
	return 0;
}*/

/*#include<stdio.h>

int main()
{
	int i = 5;

	printf("main 함수의 지역변수 i = %d\n", i);
	printf("\n");

	for (int i = 1; i < 3; i++)
	{
		printf("for문 안의 지역변수 i = %d\n", i);
	}

	printf("\n");
	printf("main 함수의 지역변수 i = %d\n", i);
	printf("\n");

	for (i = 1; i < 3; i++)
	{
		printf("for문 안의 지역변수 i = %d\n", i);
	}

	printf("main 함수의 지역변수 i = %d\n", i);

	return 0;
}*/

// 전역변수 : global 변수 (잘 안씀)
// 지역변수 : local 변수

/*include<stdio.h>
int nResult;
void Sum(int nData_1, int nData_2)
{

	nResult = nData_1 + nData_2;
}

void main()
{
	Sum(5, 3);
	printf(" nResult = %d\n", nResult);
}*/


// 재귀함수(Recursive Function)
// 함수 내에서 함수 스스로를 호출하는 형태의 함수
// 반복문을 대체하는데 사용

/*#include<stdio.h>

void sayHello()
{
	printf("Hello!\n");
	sayHello(); //자기 자신을 다시 호출한다.
}

int main(void)
{
	//재귀호출 함수 호출
	sayHello();

	return 0;
}*/


/*#include<stdio.h>
void Recursive(int num)
{
	printf("Recursive(%d) START !\n", num);

	if (num <= 0)
	{
		printf("num = %d, Recursive(%d) END !\n", num, num);
		return;
	}

	Recursive(num - 1);
	printf("Recursive(%d) END !\n", num);
}
int main()
{
	Recursive(3);
	return 0;
}*/


/*<stdio.h>
int Recur(int nData)
{
	int nTotal = 0;

	if (nData < 0)
		return 0;

	nTotal = Recur(nData - 1) + nData;

	return nTotal;


}

void main()
{
	printf("1부터 10까지의 합 : %d\n", Recur(10));
}*/

/*#include<stdio.h>
int Factorial(int nData)
{
	int nTotal = 0;
	if (nData == 1)
	{
		return nData;
	}
	nTotal = Factorial(nData - 1) * nData;

	return nTotal;

}
void main()
{
	int nData = 0;
	printf("값 ? ");
	scanf_s("%d", &nData);

	printf("%d! = %d\n", nData, Factorial(nData));
}*/


// 배열
// 동일한 자료형을 연속적으로 할당하는 문법

/*#include<stdio.h>
void main()
{
	int arr[10] = { 0, };

	//배열 요소에 반복문으로 접근
	for (int i = 0; i < 10; i++)
	{
		printf("정수 입력 : ");
		scanf_s("%d", arr[i]);
	}

}*/

/*#include<stdio.h>
void main()
{
	int arr[10] = { 0, };
	int nMin = 0;
	int nMax = 0;
	int nTotal = 0;
	int nAverage = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("정수 입력 : " );
		scanf_s("%d", &arr[i]);

		nTotal = nTotal + arr[i];
	}

	nAverage = nTotal / 10;

	nMin = arr[0];
	nMax = arr[0];

	for (int i = 0; i < 10; i++)
	{
		if (nMin > arr[i])
		{
			nMin = arr[i];
		}

		if (nMax < arr[i])
		{
			nMax = arr[i];
		}
	}


	printf("최대값 = %d\n", nMax);
	printf("최소값 = %d\n", nMin);
	printf("총합 = %d\n", nTotal);
	printf("평균 = %d\n", nAverage);


}*/

















