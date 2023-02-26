// 포인터를 기준으로 한 2차원 배열

/*#include<stdio.h>
void main()
{
	char cData[3][5] = { 0, };
	char(*p)[5]; // char[5] 크기의 대상을 가리킬 수 있는 포인터를 선언

	p = cData;
	(*p)[1] = 3;
	*((*(p + 1)) + 2) = 4;
	(*(p + 2))[3] = 5;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("cData[%d][%d] = %d\n", i, j, cData[i][j]);
		}
		printf("\n");
	}


}*/

//#include<stdio.h>
//int main(void)
//{
	//int nData[5] = { 0, };
	//int* p = nData;


	//printf("정수 5개 입력 : ");


	//return 0;
//}


// 메모리 할당(Memory Allocation)과 프로세스(Process) 

/*
1. 정적 메모리 할당
 - 프로그램이 실행될 때 메모리의 크기가 이미 결정되며, 실행되는 중에는 크기를 변경할 수 없다.

*/

// 동적메모리 할당 - 힙(Heap)
// Heap      Mbyte X          Gbyte O
// malloc함수 (Memory Allocation)
// malloc 함수는 사용자가 지정한 크기만큼 힙 영역에 메모리를 할당하고,
// 그 할당된 주소를 void* 형식으로 반환해 준다.

// 함수 원형 :" void* malloc(size_t size); // size_t는 unsigned int와 같은 자료형
// 함수 사용 형식 : void* p = malloc(100)  // 100Byte의 메모리를 할당하여 포인터 p에 저장함.

// 100Byte 메모리 할당 시 이 메모리를, 2byte*50개인지, 4byte*25개인지 예상 할 수 없음.
// 그래서 malloc함수가 메모리의 사용단위가 아직 정해져 있지 않기 때문에, void* 형식으로 주소를 반환해 줍니다.
/*
#include<stdio.h>
#include<malloc.h>
void main()
{
	short* pShort;

	pShort = (short*)malloc(100);

	int* PInt = (int*)malloc(100);
}
*/


/*
#include<stdio.h>
#include<malloc.h>
void main()
{
	int* a;

	short* b;

	a = (int*)malloc(200);

	b = (short*)malloc(50);

}
*/

/*#include<stdio.h>
#include<malloc.h>
int main(void)
{
	int* pInt = (int*)malloc(200);
	short* pShort = (short*)malloc(50);

	free(pInt);
	free(pShort);

	return 0;
}
*/


/*
#include<stdio.h>
#include<malloc.h>
void main()
{
	short* pShort = (short*)malloc(100);
	if (pShort == NULL) // NULL CHECK 습관 2 매우 매우 매우 매우 중요!!!!
	{                   // 한번에 2Gbyte이상 요청할 때, Heap에 공간(메모리)이 부족할때
		printf("Memory allocation Eerr !\n");
	}
	free(pShort); // 매우 매우 매우 매우 중요한 습관!!!!
}
*/

// 동적 메모리 할당을 사용하여 입력 및 출력하기
/*
#include<stdio.h>
#include<malloc.h>
void main()
{
	char* pName = (char*)malloc(32);
	if (pName == NULL)
	{
		printf("Memory allocation eErr!\n");
	}

	printf("name? :");
	scanf_s("%s", pName, 32);

	printf("My name is %s\n", pName);

	free(pName);
}
*/


// 예제 - 정적으로 할당된 메모리 해제 불가
/*#include<stdio.h>
#include<malloc.h>
int main(void)
{
	int iData = 5;
	int* p = &iData;

	free(p); // p는 힙에 할당된 주소가 아니므로 오류 발생

	return 0;
}*/

// 할당된 메모리 중복 해제시 오류 발생.

/*
#include<stdio.h>
#include<malloc.h>
void main()
{
	int* pInt = (int*)malloc(12);
	if (pInt == NULL)
	{
		printf("m Err!\n");
	}

	free(pInt);
	free(pInt);

}
*/

// 예제 - 동적 메모리 접근 방식
/*#include<stdio.h>
#include<malloc.h>
int main(void)
{
	//int* p = (int*)malloc(12);
	int* p = (int*)malloc(sizeof(int) * 3);

	if (p == NULL)
	{
		printf("Memory allocation error!\n");

	}

	return o;
}*/

//#include<stdio.h>
//#include<malloc.h>
//int main(void)
//{
//	int* p = (int*)malloc(sizeof(int) * 5);
//
//	int iTotal = 0;
//	int iAvg = 0;
//
//	if (p == NULL)
//	{
//		printf("Memory allocation error!\n");
//		return;
//	}
//	printf("정수 5개 입력 :");
//	for (int i = 0; i < 5; i++)
//	{
//		scanf_s("%d", &(*(p + i)));
//		iTotal = iTotal + *(p + i);
//
//	}
//	iAvg = iTotal / 5;
//
//	printf("합 : %d\n", iTotal);
//	printf("평균: %d\n", iAvg);
//
//	free(p);
//
//	return 0;
//}