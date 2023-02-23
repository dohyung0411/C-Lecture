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