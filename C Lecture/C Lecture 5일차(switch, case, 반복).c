/*
#include<stdio.h>
int main(void)
{
	int nScore = 0;

	// ������ ���� ����� ������ ������ ������
	char cGrade;

	printf("Input score =");
	scanf_s("%d", &nScore);

	if (nScore >= 90) // 90�� �̻��� ���
	{
		cGrade = 'A';
	}
	else // 90�� �̸��� ���
	{
		if (nScore >= 70) // 80�� �̸��̸鼭 70���� ���
		{
			cGrade = 'C';
		}
		else // 70�� �̸��ΰ��
		{
			if (nScore >= 60) // 70�� �̸��̸鼭 60�� �̻��� ���
			{
				cGrade = 'D';
			}
			else //60�� �̸��� ���
			{
				cGrade = 'F';
			}
		}

	}
	printf("����� ������ %d���̰� ����� %c�Դϴ�\n", nScore, cGrade);

	return 0;
}*/

/*#include<stdio.h>
int main(void)
{
	int E = 0;
	int M = 0;
	int L = 0;
	int  total = 0;
	printf("������ ���� �Է�");
	scanf_s("%d%d%d", &L, &E, &M);
	total = E + M + L;
	if (L >= 40  && E >= 40 && M >= 40)
	{
		if (total / 3 >= 60)
		{
			printf("�հ��Դϴ�");

		}
		else
		{
			printf("���հ��Դϴ�");
		}
	}
	return 0;

}*/


// switch

/*//switch (���� �Ǵ� ������ ����)
{
case ���1:
	��ɹ�1;
	break;

case ���2:
		��ɹ�2;
		break;

case ��� 3:
	  ��ɹ�3;
		break;

default:
	��ɹ�4;
	break;

}*/

/*#include<stdio.h>
int main(void)
{
	int nData = 0;
	printf("���� �Է� : ");
	scanf_s("%d", &nData);

	switch (nData)

	case 1:
		printf("1�� �Է��ϼ̽��ϴ�\n");
		break;
	case 2:
		printf("2�� �Է��ϼ̽��ϴ�");
		break;
	case 3:
		printf("3�� �Է��ϼ̽��ϴ�");
		break;
	default:
		printf("�� ���� ���� �Է��ϼ̽��ϴ�\n");
		break;

	}

	printf("switch�� ����\n");

	return 0;


}*/


//goto
//goto���� break��ó�� Ư����ġ�� ���α׷��� �帧�� '���'�����Ѵ�
// break���� ����� �� �ִ°��� ���������� ��������(loop, switch ��)
// �ݸ� goto���� ����ڰ� ���̺�(Label)�� ����ϸ� �����ġ�� ��밡���ϴ�.



/*#include<stdio.h>
int main(void)
{
	int a = 0;
	printf("���� �Է��ϼ���.");
	scanf_s("%d", &a);

	switch (a)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ��Դϴ�");
		break;

	case 3:
	case 4:
	case 5:
		printf("���Դϴ�");
		break;

	case 6:
	case 7:
	case 8:
		printf("�����Դϴ�");
		break;
	case 9:
	case 10:
	case 11:
		printf("�����Դϴ�");
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

// �ݺ��� (while, for)
// ���������� �ڵ带 ���������� �ݺ��� �����ϴ� ���

//while (true)
//{
	//�ݺ� �����ϰ��� �ϴ� ����;
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

	//for (�ʱⰪ; ����; ������)
	//{
		//�ݺ� �����ϰ��� �ϴ� ����;
	//}
	//while (nData <= 10)
	//{

		//nTotal = nTotal + nData;
		//nData++;
	//}
	printf("1���� 10������ �� : %d", nTotal);

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
	printf("1���� %d������ ���� %d�Դϴ�", Input, Total);
	return 0;
}*/

/*#include<stdio.h>
int main(void)
{
	// ���� �ʱ⿡��,
	// 1. �ʱⰪ ����
	// 2. ���� �˻�

	//�ι�° ���ʹ�
	// 1. ����
	// 2. ���� �˻�

	int Total = 0;
	int Input = 0;

	printf("Input?");
	scanf_s("%d", &Input);

	for (int nData = 1; nData <= Input; nData++)
	{
		Total = Total + nData;

	}
	printf("1���� %d������ ������ %d�Դϴ�",Input,  Total);
	return 0;
}*/