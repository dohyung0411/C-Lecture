// �޸� �뵵�� �з�
// Code ���� : �����ϵ� �ڵ� ���念��

// Steak ���� : {}���� ������ �줷�� ���念�� // ��������
// Heap ���� : �����޸� �Ҵ� ����
// Data ����: ���������� ���� ����           // ��������, static ����


// ��������
// �Լ� ������ ����/�Ҹ�Ǵ� ����
// �Լ��� ȣ��� �� �޸𸮿� ���� ������ ��������ٰ� �Լ� ȣ���� ������ �Բ� �����
// ��, �Լ��� ���� ������ ����

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

	printf("main �Լ��� �������� i = %d\n", i);
	printf("\n");

	for (int i = 1; i < 3; i++)
	{
		printf("for�� ���� �������� i = %d\n", i);
	}

	printf("\n");
	printf("main �Լ��� �������� i = %d\n", i);
	printf("\n");

	for (i = 1; i < 3; i++)
	{
		printf("for�� ���� �������� i = %d\n", i);
	}

	printf("main �Լ��� �������� i = %d\n", i);

	return 0;
}*/

// �������� : global ���� (�� �Ⱦ�)
// �������� : local ����

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


// ����Լ�(Recursive Function)
// �Լ� ������ �Լ� �����θ� ȣ���ϴ� ������ �Լ�
// �ݺ����� ��ü�ϴµ� ���

/*#include<stdio.h>

void sayHello()
{
	printf("Hello!\n");
	sayHello(); //�ڱ� �ڽ��� �ٽ� ȣ���Ѵ�.
}

int main(void)
{
	//���ȣ�� �Լ� ȣ��
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
	printf("1���� 10������ �� : %d\n", Recur(10));
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
	printf("�� ? ");
	scanf_s("%d", &nData);

	printf("%d! = %d\n", nData, Factorial(nData));
}*/


// �迭
// ������ �ڷ����� ���������� �Ҵ��ϴ� ����

/*#include<stdio.h>
void main()
{
	int arr[10] = { 0, };

	//�迭 ��ҿ� �ݺ������� ����
	for (int i = 0; i < 10; i++)
	{
		printf("���� �Է� : ");
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
		printf("���� �Է� : " );
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


	printf("�ִ밪 = %d\n", nMax);
	printf("�ּҰ� = %d\n", nMin);
	printf("���� = %d\n", nTotal);
	printf("��� = %d\n", nAverage);


}*/