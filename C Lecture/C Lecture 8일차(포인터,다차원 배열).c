/*#include<stdio.h>
int main(void)
{
	int nData[3][4] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	int i = 0, j = 0;



	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d\t", nData[i][j]);
		}
		printf("\n");
	}
}*/

/*
 <포인터(pointer)>
  ㅁ 포인터는 메모리를 효과적으로 사용하는 기술(문법)
	ㅇ 운영체제가 메모리를 어떻게 관리하는지 알아야함.
  ㅁ 운영체제의 메모리 관리 방식
	ㅇ 변수 -> 메모리 주소
	 - 기계어는 변수가 위치한 메모리 주소를 통해 변수 값을 읽거나 변경
	 - 컴퓨터 시스템의 메모리는 운영체제가 관리
	 - 운영체제가 메모리를 관리하는 방법에 따라 프로그래밍 방법도 달라진다.

  ㅁ 32비트 운영체제와 64비트 운영체제
	ㅇ 기본적으로 처리하는 데이터의 단위로 구분됨
	 ㅇ 운영체제에서 실행되는 프로그램을 32bit용(x86) 포로그램과 64bit용(x64)으로 나누어 개발 가능
	 ㅇ 32bit용 프로그램을 32bit 운영체제와 64bit 운영체제에서 모두 동작 가능

  ㅁ 64bit 운영체제의 장단점
	ㅇ 장점
		- 동시 처리 능력이 좋음
		 - 메모리(RAM)를 16EB(엑사바이트, 2^64)까지 사용 가능(32bit -> 4GB, 2^32)
	ㅇ 단점
		- 기본적인 메모리 사용이 많음
		 - 32bit 프로그램과 호환하기 위한 모듈까지 관리해야 하기 때문에 낮은 사양의 컴퓨터에 설치하면 손해
		 - 즉, 메모리를 비효율적으로 사용할 가능성이 높아지고 호환성이 떨어지기 때문에,
		   아직까지 많은 개발자들이 32bit 방식으로 프로그램을 개발

	ㅁ 설명 기준은 32bit 프로그래밍
	   ㅇ 32bit 프로그래밍에서는 int형이 32bit(4byte)
		ㅇ 32bit 프로그래밍에서는 주소를 저장하거나 사용할 때 4Byte로 표현

   ㅁ 메모리 주소 지정 방식
	   ㅇ 운영체제는 메모리 주소를 1Byte 단위로 관리
		ㅇ 32bit 윈도우 운영체제는 0 ~ 4,294,967,295번 까지의 주소를 사용
		ㅇ 메모리를 사용하려면 반드시 사용할 메모리 주소를 지정해야함
		ㅇ 메모리를 사용할 때 한번에 읽거나 저장할 크기를 명시해야함
		ㅇ 메모리 주소 지정방식은 직접 주소 지정 방식과 간접 주소 지정 방식 두 가지가 있음

   ㅁ 직접 주소 지정 방식
	   ㅇ 메모리를 사용할 때 프로그래머가 사용할 메모리 주소를 직접 적는 방식
		ㅇ C언어는 '변수'라는 개념으로 직접 주소 지정 방식을 사용
		ㅇ C언어에서 직접 주소 지정 방식의 한계
		   - 변수 개념을 사용하기 때문에 문법 구조상 서로 다른 함수에 존재하는 변수 참조 불가능.*/

// [예제 - C언어에서 직접 주소 지정 방식의 한계 1]
/*#include<stdio.h>
void Test()
{
  short sTestData = 0x0000;
  sTestData = sMainData;
}
void main()
{
  short sMainData = 0x0005;
  Test();
}*/

// [예제 - C언어에서 직접 주소 지정 방식의 한계 2]
// 매개변수와 반환값을 이용하여 서로 다른 함수에 존재하는 지역 변수들 간에 값을 주고받을 수 있다.
/*#include<stdio.h>
void Test(short sMainData)
{
  short sTestData = 0x0000;
  sTestData = sMainData;
}
void main()
{

  short sMainData = 0x0005;
  Test(sMainData);

}*/
// 하지만 , Test()에 선언된 변수가 여러개일 때는 반환값으로도 해결이 불가능하다.
// 이는 직접 주소 지정 방식의 한계를 보여준다.
// 이를 해결하기 위해 c언어에서는 간접 주소 지정 방식을 제공한다.
// 32bit x86  64bit x64

/*
	ㅁ 직접 주소 지정 방식은 주소를 직접 명시한다.
	ㅁ 간접 주소 지정 방식은 사물함이라는 매개체를 이용해 주소를 간접적으로 명시한다.

	ㅁ 간접 주소 지정 방식
		ㅇ 직접 주소 지정 방식 (10진법) :   '       102 번지에 1042 라는 값을 2Byte 크기 (=short형)로 저장하겠다'
		ㅇ 간접 주소 지정 방식 (10진법) :   '       102 번지에 4Byte 크기의 '주소'가 저장되어 있는데,
										 이 주소에 가서 '값' 1042를 2Byte 크기로 저장하겠다'
		ㅇ 간접 주소 지정 방식 (16진법) :   '0x00000066 번지에 4Byte 크기의 '주소'가 저장되어 있는데.
															  이 주소에 가서 '값' 0x0412를 2Byte 크기로 저장하겠다'

 ㅁ 포인터(Pointer)
  ㅇ int addr = 0x0000006c;
	  - 일반 변수도 주소를 저장할 수 있으나, 저장된 주소의 메모리에가서
		 값을 읽거나 저장할 수 있는 기능은 없다.
		 즉, 일반 변수는 값'만' 저장할 수 있다.
  ㅇ C언어는 간접 주소 지정 방식으로 동작하는 포인터(pointer) 문법을 제공
   ㅇ short* pData;
	  - 포인터 변수는 자료형을 선언하지 않아도 무조건 크기가 4Byte

  */

 // [예제 - 포인터 변수 선언]
 /*#include <stdio.h>
 void main()
 {
   short sData; // short형 변수 sData를 선언

   short* pData;    // 포인터 변수 선언(자신의 크기는 4Byte, 가리키는 대상의 크기는 2Byte)
   pData = &sData; // sData 변수의 주소를 pData 변수에 대입

   pritnf("birthday 변수의 주소는 %p 입니다.\n", pData);
 }*/

 // [예제 - 다른 변수의 주소를 사용하여 포인터로 값 대입하기]
 // [문제 - 직접 주소 지정 방식으로 변수 값 교환하기 해결방안]

 /*#include<stdio.h>
 void main()
 {
   short birthday;

   short* ptr = &birthday; // birthday 변수의 주소를 ptr 변수에 대입
   *ptr = 0x0412;          // birthday = 0x0412 와 같은 의미

   printf("birthday = %d (0x%04x)\n", birthday, birthday);
 }*/


 // [예제 - 직접 주소 지정 방식으로 변수 값 교환하기]
 /*#include<stdio.h>
 void Swap(int *a, int *b)
 {
   int temp;

   temp = *a;
   *a = *b;
   *b = temp;

 }
 void main()
 {
   int start = 96;
   int end = 5;

   printf("[Before]\n");
   printf("start = %d\n", start);
   printf("end = %d\n", end);

   printf("\n");

   if (start > end);
   {
	   Swap(&start, &end);
   }

   printf("[After]\n");
   printf("start = %d\n", start);
   printf("end = %d\n", end);
 }*/


 /*
   ㅁ 포인터를 사용시 유의사항
	   ㅇ 포인터를 사용할 때 '*' 연산자의 사용 여부에 따라 두 가지 표현 가능하기 때문에 잦은 실수 발생
		   char* ptr;
			ptr = &data;   // 첫 번째 표현
			*ptr = 2;      // 두 번재 표현
 */


//#include<stdio.h>
//void main()
//{
  /*1)
	int nData = 5, temp = 0;
	int* const pData = &nData;

	*pData = 3;       // pData 변수가 저장하고 있는 주소에 가서 3을 대입
	pData = &temp;    // eErr ! - pData에 저장된 주소 변경 불가

	2) const int* pData;
	-*pData를 사용하여 대상의 값을 변경하여 번역할 때 오류 발생
	   int nData = 5;
	cost int* pData = &nData; // 변수 pData는 data 변수의 주소를 저장
	*pData = 3;

	3) const int* const pData;
	-pData가 가지고 있는 주소를 바꾸거나 * pData를 사용하여 대상의 값을 바꾸면 번역할 때 오류 발생
	   int nData = 5, temp = 0;
	const int* const pData = &nData;
	*pData = 3;    // eErr ! - 변수 pData가 가리키는 대상의 값을 변경 불가
	pData = &temp; // eErr ! - pData에 저장된 주소 변경 불가

	ㅇ 포인터 변수를 다룰 때 실수할 확률이 높기 때문에 const 키워드를 적절하게 활용하면 실수로 인한 버그를 줄일 수 있다.*/
 //}

//#include<stdio.h>
//void Pow(int* nData)
//{
//	*nData = *nData * *nData;
//}
//void main()
//{
//	int nData = 0;
//
//	printf("input? = ");
//	scanf_s("%d", &nData);
//
//	Pow(&nData);
//
//	printf("nData * nData = %d\n", nData);
//}

