// �����͸� �������� �� 2���� �迭

/*#include<stdio.h>
void main()
{
	char cData[3][5] = { 0, };
	char(*p)[5]; // char[5] ũ���� ����� ����ų �� �ִ� �����͸� ����

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


	//printf("���� 5�� �Է� : ");


	//return 0;
//}


// �޸� �Ҵ�(Memory Allocation)�� ���μ���(Process) 

/*
1. ���� �޸� �Ҵ�
 - ���α׷��� ����� �� �޸��� ũ�Ⱑ �̹� �����Ǹ�, ����Ǵ� �߿��� ũ�⸦ ������ �� ����.

*/

// �����޸� �Ҵ� - ��(Heap)
// Heap      Mbyte X          Gbyte O
// malloc�Լ� (Memory Allocation)
// malloc �Լ��� ����ڰ� ������ ũ�⸸ŭ �� ������ �޸𸮸� �Ҵ��ϰ�,
// �� �Ҵ�� �ּҸ� void* �������� ��ȯ�� �ش�.

// �Լ� ���� :" void* malloc(size_t size); // size_t�� unsigned int�� ���� �ڷ���
// �Լ� ��� ���� : void* p = malloc(100)  // 100Byte�� �޸𸮸� �Ҵ��Ͽ� ������ p�� ������.

// 100Byte �޸� �Ҵ� �� �� �޸𸮸�, 2byte*50������, 4byte*25������ ���� �� �� ����.
// �׷��� malloc�Լ��� �޸��� �������� ���� ������ ���� �ʱ� ������, void* �������� �ּҸ� ��ȯ�� �ݴϴ�.
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
	if (pShort == NULL) // NULL CHECK ���� 2 �ſ� �ſ� �ſ� �ſ� �߿�!!!!
	{                   // �ѹ��� 2Gbyte�̻� ��û�� ��, Heap�� ����(�޸�)�� �����Ҷ�
		printf("Memory allocation Eerr !\n");
	}
	free(pShort); // �ſ� �ſ� �ſ� �ſ� �߿��� ����!!!!
}
*/

// ���� �޸� �Ҵ��� ����Ͽ� �Է� �� ����ϱ�
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


// ���� - �������� �Ҵ�� �޸� ���� �Ұ�
/*#include<stdio.h>
#include<malloc.h>
int main(void)
{
	int iData = 5;
	int* p = &iData;

	free(p); // p�� ���� �Ҵ�� �ּҰ� �ƴϹǷ� ���� �߻�

	return 0;
}*/

// �Ҵ�� �޸� �ߺ� ������ ���� �߻�.

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

// ���� - ���� �޸� ���� ���
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
//	printf("���� 5�� �Է� :");
//	for (int i = 0; i < 5; i++)
//	{
//		scanf_s("%d", &(*(p + i)));
//		iTotal = iTotal + *(p + i);
//
//	}
//	iAvg = iTotal / 5;
//
//	printf("�� : %d\n", iTotal);
//	printf("���: %d\n", iAvg);
//
//	free(p);
//
//	return 0;
//}