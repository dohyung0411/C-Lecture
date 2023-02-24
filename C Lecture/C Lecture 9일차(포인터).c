/*

	ㅁ 포인터 변수의 주소 연산
		ㅇ 사용할 메모리의 범위를 기억하는 방법
			1) 시작 주소와 끝 주소를 기억하는 것
				- 시작 주소와 끝 주소로 메모리 범위를 기억하려면 총 8Byte 필요
		  2) 시작 주소와 사용할 크기를 기억하는 것
				- 시작 주소와 사용할 크기로 메모리 범위를 기억하려면 총 8Byte 필요
				 - 사용할 메모리 크기는 명령문(자료형)에 포함되어 있기 때문에
				 자신이 사용할 메모리의 시작 주소만 기억하면 된다
					int nData = 0;
					 int *pData = &nData;
					 *pData = 5;
		 ㅇ 포인터 변수의 주소 연산
			short sData = 0;
			 short* pData = &sData;
			 pData = pData + 1; // 포인터 변수에 저장된 주소 값을 1만큼 증가
				- 포인터 변수에 저장된 주소도 일반 변수처럼 연산 가능
				 - 주소를 1만큼 증가시킨다는 의미가 일반 수학 연산과 다르다
				 - 포인터에서 +1의 의미는 그 다음 데이터의 주소를 의미
				 - 포인터 변수가 가진 주소를 연산하면 자신이 가리키는 대사의 크기만큼 연산

*/


/*#include<stdio.h>
void main()
{
	short sData = 0;
	short* pData = &sData;

	printf("pData의 값 : %d\n", pData);

	pData = pData + 1;

	printf("pData의 값 : %d\n", pData);
}*/


/*#include<stdio.h>
int main(void)
{
	char* p1 = (char*)100;   // p1에 1200번지를 저장함
	short* p2 = (short*)100; // p2에 100번지를 저장함
	int* p3 = (int*)100;     // p3에 100번지를 저장함
	double* p4 = (double*)100; // p4에 100번지를 저장함


	p1++;
	p2++;
	p3++;
	p4++;

	printf("%d\n", p1);
	printf("%d\n", p2);
	printf("%d\n", p3);
	printf("%d\n", p4);

	return 0;

}*/


/*#include<stdio.h>
int main(void)
{
	int data = 0x12345678;
	char* p;
	p = (char*)&data; // &data는 (int*) 형,
					 // 하지만 이 주소를 저장할 포인터 p가 (char*)라서
					  // 자료형이 맞지 않아 (char*)형 변환으로 type casting.

	for (int i = 0; i < 4; i++)
	{
		printf("p + %d = 0x%x\n", i, *p);  // %x는 16진수 출력
									// p의 값을 (char*)만큼 증가

		// printf("p + %d = %x\n", i, *(p + i)); // p의 값을 (char*)만큼 증가

		// printf("p + %d = %x\n", i, *(p + i)); // 주의 - *p의 값을 1만큼 증가
	}

	return 0;
}*/


/*#include<stdio.h>
void main()
{
	int data = 0x12345678;
	short* p = &data;

	printf("변경 전 data의 값은 0x%x 입니다\n", data);

	// 여기에 코드를 입력



	*p = 0x0412;




	printf("변경 후 data의 값은 0x%x 입니다 \n", data);
}*/


/*#include<stdio.h>
int main(void)
{
	int nData = 0x12345678;
	char* p = &nData;
	printf("변경 전 nData의 값은 0x%x 입니다 \n", nData);

	// 여기에 코드를 입력

	*(p + 1) = 0x34;
	 *(p + 2) = 0x77;

	printf("변경 후 nData의 값은 0x%x 입니다\n", nData);

	return 0;

}*/

/*#include<stdio.h>
int main(void)
{
	char a = 0x12;
	char b = 0x34;
	short c = 0x5678;

	int t = 0x00000000;

	// 여기에 코드를 입력

	char* pData = &t;
	char* p;
	p = &c;

	*pData = *p;
	pData++;
	p++;

	*pData = *p;
	pData++;
	p = &b;

	*pData = *p;
	pData++;
	p = &a;

	*pData = *p;

	p = NULL;
	pData = NULL;



	printf("완성된 t의 값은 0x%x입니다.\n", t);

	return 0;
}*/

/*
   ㅁ void* 형 포인터
	   ㅇ void : 정해져 있지 않다.
		ㅇ 대상의 크기가 정해져 있지 않은 void* 형 포인터
		ㅇ 포인터 변수가 가리키는 대상의 크기를 모를 때 void* 형을 사용
		ㅇ 주소를 받을 때 type casting 필요 x
		ㅇ 대상을 가리킬때 type casting 필요 ㅇ
	  ㅇ
*/

/*#include<stdio.h>
// 어떤 형식의 주소값이 전달될지 모르기 때문에 해당 예시 처럼 여러 개의 포인터를 매개변수에 추가해야 한다.
// 만약 doVoidPointer로 전달되는 주소의 형식이 더 많아진다면, 매개변수가 더 많아져야 한다.
void doVoidPointer(char* pChar, short* pShort, int* pInt)
{
	if (pChar != NULL)
	{
		*pChar = 1;
	}
	else if (pShort != NULL)
	{
		*pInt = 1;
	}
}
int main(void)
{
	short data = 5;

	// data 변수는 short형 이기 때문에 short*를 사용하는 두 번째 매개변수에 주소를 넘겨준다.
	doVoidPointer(NULL, &data, NULL);

	printf("data = %d\n", data);
	return 0;
}*/

/*#include<stdio.h>
void doVoidPointer(void* p, char flag)
{
	// flag에 전달된 값에 따라 type casting하여 전달된 주소에 1을 대입함
	if (flag == 0)  // flag가 0이면 char* 형
	{
		*(char*)p = 1;
	}
	else if (flag == 1) // flag가 1이면 short* 형
	{
		*(short*)p = 1;
	}
	else // flag가 0과 1이 아니면 int* 형
	{
		*(int*)p = 1;
	}
}
int main(void)
{
	short data = 5;

	// data 변수는 short형 이기 때문에 short*를 의미하는 1을 같이 전달함
	// 사용자 관점에서 더 편함
	doVoidPointer(&data, 1);
	printf("data = %d\n", data);
	return 0;

}*/


/*#include<stdio.h>
int GetData(void* pData, char type)
{
	int nResult = 0;

	// type 변수에 저장된 값을 기준으로 형 변환을 다르게 함
	if (type == 1)
	{
		nResult = *(char*)pData;
	}
	else if (type == 2)
	{
		nResult = *(short*)pData;
	}
	else if (type == 4)
	{
		nResult = *(int*)pData;
	}

	return nResult;
}
void main()
{
	int data = 0x12345678;

	printf("0x%x\n", GetData(&data, 2)); // data 변수에서 2byte 크기만 출력함
}*/

//#include<stdio.h>
//int main(void)
//{
//	int data = 0x12345678;
//
//	char* p = (char*)&data; // 서로 자료형이 맞지 않아서 (char*)로 형 변환
//
//	*p = 5;                // data 변수의 시작 1 byte에 값 5를 넣으면 data는 0x12345605로 변경됨
//
//	printf("data = 0x%08x\n", data);
//
//	*(short*)p = 0;  // data 변수의 시작 2byte에 값 0을 넣으면 data는 0x12340000로 변경됨.
//	printf("data = 0x%08x\n", data);
//
//	return 0;
//}