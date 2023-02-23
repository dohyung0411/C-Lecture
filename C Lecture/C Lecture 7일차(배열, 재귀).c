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