// ���� �̸��� �ѱ۷� �Է¹ް�,
// ���� �̸��� ������ ����ϼ���

/*#include<stdio.h>
int main(void)
{
	char name[10] = { NULL };



	printf("����� �̸��� ����? ");
		scanf_s("%s", name, sizeof(name));

		printf("�̸��� : %s�Դϴ�.\n", name);

		printf("���� %c%c�Դϴ�.\n", name[0], name[1]);
		printf("�̸��� %c%c%c%c.�Դϴ�\n", name[2], name[3], name[4], name[5]);


	return 0;
}*/
//�ڷ���
	// ������ �޸𸮳����� ���α׷��� �����ϴ¼���

	//���� : int (=integer)
	//�Ǽ� : double
	//(��)���� : char
	//

/*#include<stdio.h>
int main(void)
{
	int kor = 0;
	int math = 0;
	int eng = 0;

	int total = 0;
	double avg = 0;


	printf("����� : ");
	scanf_s("%d", &kor);

	printf("���м��� : ");
	scanf_s("%d", &math );

	printf("����� : ");
	scanf_s("%d", &eng );

	total = kor + math + eng;
	avg = total / 3.0;

	printf("���� : %d ��� : %.1lf\n", total, avg);


	return 0;
}*/

// ������
//1. ��� ������
//2. ���� ������
//3. ���� ���� ������
//4. ���� ������(�� ������)
//5. �� ������
//6. ���� ������
//7. ���� ������
//8. ��Ʈ / ����Ʈ ������


/*#include <stdio.h>

int main(void)
{
	int num1 = 7, num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);//%�� �������� ���ϴ� ��ȣ

	printf("%d\n", -num1);

	return 0;
}*/


// < 2. ���� ������ >

// '=' : ���Կ������� ����(l-value)�� '����'���� ������(r-value)�� '��'���� �ؼ��Ѵ�
//       r-value ���� ó���� ���� �ѵ�(����) 1-value�� ����
//       l-value ���� ��������� �̸�(������) �� ��õȴ�, locator(��ġ������)
/*#include<stdio.h>
int main(void)
{
	int x = 0;
	int nInput = 0;

	printf("x = %d\n", x);

	printf("Input? : ");
	scanf_s("%d", &nInput);

	//nInput ������ ����� ����ڰ� �Է��� ���� x�� �����Ѵ�.
	// x�� ����ִ� ���� Overwrite�ǰ� �������

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

// 3. ���� ���� ������ -> �ᵵ�ǰ� �Ƚᵵ �˴ϴ�. ��, �˰� ��ø� �˴ϴ�.
// ���Կ����� + ���������

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


// 4. ���� ������(�� ������)

// Ư�� �ǿ����ڵ��� ���Ͽ� ��/������ ���� ��ȯ�Ѵ�
// �� : ���α׷��Ӱ� ���ϴ� ������� ������ �� : 0 �̾ƴ� ��簪(��ǥ��:1)
// ���� : ������ ������ : 0

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
// AND����(&&) : �� �ǿ����� ��ΰ� ���̸� ���� ��ȯ
// OR����(!!) : �� �ǿ����� �� �ϳ��� ���̶� ���� ��ȯ
// ��������(!) : �� �������� ���� ���̸� ����, �����̸� ���� ��ȯ



// < 6. ���� ������ >
// - ������ ���� 1��ŭ ������Ű�ų� ���� ��ų �� ���Ǵ� ������
// ����(Prefix) : �ǿ����� �տ� ���� �����ڰ� ����, �������� ���� �� ������ ���� ó�� ����
// ����(Postfix) : �ǿ����� �ڿ� ���� �����ڰ� ����, ��� ���� ó�� �� �������� ����
// '++'��, '--'�� ǥ�õǴ� ������


// 7. ���� ������
// ���� ? ��� 1 : ��� 2
// ������ ���̸� ��� 1�� ����, ������ �����̸� ��� 2�� ����
// ���� �ڸ��� ���� EXEM06-02