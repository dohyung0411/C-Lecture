/*

	�� ������ ������ �ּ� ����
		�� ����� �޸��� ������ ����ϴ� ���
			1) ���� �ּҿ� �� �ּҸ� ����ϴ� ��
				- ���� �ּҿ� �� �ּҷ� �޸� ������ ����Ϸ��� �� 8Byte �ʿ�
		  2) ���� �ּҿ� ����� ũ�⸦ ����ϴ� ��
				- ���� �ּҿ� ����� ũ��� �޸� ������ ����Ϸ��� �� 8Byte �ʿ�
				 - ����� �޸� ũ��� ��ɹ�(�ڷ���)�� ���ԵǾ� �ֱ� ������
				 �ڽ��� ����� �޸��� ���� �ּҸ� ����ϸ� �ȴ�
					int nData = 0;
					 int *pData = &nData;
					 *pData = 5;
		 �� ������ ������ �ּ� ����
			short sData = 0;
			 short* pData = &sData;
			 pData = pData + 1; // ������ ������ ����� �ּ� ���� 1��ŭ ����
				- ������ ������ ����� �ּҵ� �Ϲ� ����ó�� ���� ����
				 - �ּҸ� 1��ŭ ������Ų�ٴ� �ǹ̰� �Ϲ� ���� ����� �ٸ���
				 - �����Ϳ��� +1�� �ǹ̴� �� ���� �������� �ּҸ� �ǹ�
				 - ������ ������ ���� �ּҸ� �����ϸ� �ڽ��� ����Ű�� ����� ũ�⸸ŭ ����

*/


/*#include<stdio.h>
void main()
{
	short sData = 0;
	short* pData = &sData;

	printf("pData�� �� : %d\n", pData);

	pData = pData + 1;

	printf("pData�� �� : %d\n", pData);
}*/


/*#include<stdio.h>
int main(void)
{
	char* p1 = (char*)100;   // p1�� 1200������ ������
	short* p2 = (short*)100; // p2�� 100������ ������
	int* p3 = (int*)100;     // p3�� 100������ ������
	double* p4 = (double*)100; // p4�� 100������ ������


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
	p = (char*)&data; // &data�� (int*) ��,
					 // ������ �� �ּҸ� ������ ������ p�� (char*)��
					  // �ڷ����� ���� �ʾ� (char*)�� ��ȯ���� type casting.

	for (int i = 0; i < 4; i++)
	{
		printf("p + %d = 0x%x\n", i, *p);  // %x�� 16���� ���
									// p�� ���� (char*)��ŭ ����

		// printf("p + %d = %x\n", i, *(p + i)); // p�� ���� (char*)��ŭ ����

		// printf("p + %d = %x\n", i, *(p + i)); // ���� - *p�� ���� 1��ŭ ����
	}

	return 0;
}*/


/*#include<stdio.h>
void main()
{
	int data = 0x12345678;
	short* p = &data;

	printf("���� �� data�� ���� 0x%x �Դϴ�\n", data);

	// ���⿡ �ڵ带 �Է�



	*p = 0x0412;




	printf("���� �� data�� ���� 0x%x �Դϴ� \n", data);
}*/


/*#include<stdio.h>
int main(void)
{
	int nData = 0x12345678;
	char* p = &nData;
	printf("���� �� nData�� ���� 0x%x �Դϴ� \n", nData);

	// ���⿡ �ڵ带 �Է�

	*(p + 1) = 0x34;
	 *(p + 2) = 0x77;

	printf("���� �� nData�� ���� 0x%x �Դϴ�\n", nData);

	return 0;

}*/

/*#include<stdio.h>
int main(void)
{
	char a = 0x12;
	char b = 0x34;
	short c = 0x5678;

	int t = 0x00000000;

	// ���⿡ �ڵ带 �Է�

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



	printf("�ϼ��� t�� ���� 0x%x�Դϴ�.\n", t);

	return 0;
}*/

/*
   �� void* �� ������
	   �� void : ������ ���� �ʴ�.
		�� ����� ũ�Ⱑ ������ ���� ���� void* �� ������
		�� ������ ������ ����Ű�� ����� ũ�⸦ �� �� void* ���� ���
		�� �ּҸ� ���� �� type casting �ʿ� x
		�� ����� ����ų�� type casting �ʿ� ��
	  ��
*/

/*#include<stdio.h>
// � ������ �ּҰ��� ���޵��� �𸣱� ������ �ش� ���� ó�� ���� ���� �����͸� �Ű������� �߰��ؾ� �Ѵ�.
// ���� doVoidPointer�� ���޵Ǵ� �ּ��� ������ �� �������ٸ�, �Ű������� �� �������� �Ѵ�.
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

	// data ������ short�� �̱� ������ short*�� ����ϴ� �� ��° �Ű������� �ּҸ� �Ѱ��ش�.
	doVoidPointer(NULL, &data, NULL);

	printf("data = %d\n", data);
	return 0;
}*/

/*#include<stdio.h>
void doVoidPointer(void* p, char flag)
{
	// flag�� ���޵� ���� ���� type casting�Ͽ� ���޵� �ּҿ� 1�� ������
	if (flag == 0)  // flag�� 0�̸� char* ��
	{
		*(char*)p = 1;
	}
	else if (flag == 1) // flag�� 1�̸� short* ��
	{
		*(short*)p = 1;
	}
	else // flag�� 0�� 1�� �ƴϸ� int* ��
	{
		*(int*)p = 1;
	}
}
int main(void)
{
	short data = 5;

	// data ������ short�� �̱� ������ short*�� �ǹ��ϴ� 1�� ���� ������
	// ����� �������� �� ����
	doVoidPointer(&data, 1);
	printf("data = %d\n", data);
	return 0;

}*/


/*#include<stdio.h>
int GetData(void* pData, char type)
{
	int nResult = 0;

	// type ������ ����� ���� �������� �� ��ȯ�� �ٸ��� ��
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

	printf("0x%x\n", GetData(&data, 2)); // data �������� 2byte ũ�⸸ �����
}*/

//#include<stdio.h>
//int main(void)
//{
//	int data = 0x12345678;
//
//	char* p = (char*)&data; // ���� �ڷ����� ���� �ʾƼ� (char*)�� �� ��ȯ
//
//	*p = 5;                // data ������ ���� 1 byte�� �� 5�� ������ data�� 0x12345605�� �����
//
//	printf("data = 0x%08x\n", data);
//
//	*(short*)p = 0;  // data ������ ���� 2byte�� �� 0�� ������ data�� 0x12340000�� �����.
//	printf("data = 0x%08x\n", data);
//
//	return 0;
//}