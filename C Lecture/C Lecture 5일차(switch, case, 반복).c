/*
#include<stdio.h>
int main(void)
{
	int nScore = 0;

	// 점수에 따른 등급을 저장함 변수를 선언함
	char cGrade;

	printf("Input score =");
	scanf_s("%d", &nScore);

	if (nScore >= 90) // 90점 이상인 경우
	{
		cGrade = 'A';
	}
	else // 90점 미만인 경우
	{
		if (nScore >= 70) // 80점 미만이면서 70점인 경우
		{
			cGrade = 'C';
		}
		else // 70점 미만인경우
		{
			if (nScore >= 60) // 70점 미만이면서 60점 이상인 경우
			{
				cGrade = 'D';
			}
			else //60점 미만인 경우
			{
				cGrade = 'F';
			}
		}

	}
	printf("당신의 점수는 %d점이고 등급은 %c입니다\n", nScore, cGrade);

	return 0;
}*/

/*#include<stdio.h>
int main(void)
{
	int E = 0;
	int M = 0;
	int L = 0;
	int  total = 0;
	printf("국영수 점수 입력");
	scanf_s("%d%d%d", &L, &E, &M);
	total = E + M + L;
	if (L >= 40  && E >= 40 && M >= 40)
	{
		if (total / 3 >= 60)
		{
			printf("합격입니다");

		}
		else
		{
			printf("불합격입니다");
		}
	}
	return 0;

}*/


// switch

/*//switch (수식 또는 정수형 변수)
{
case 상수1:
	명령문1;
	break;

case 상수2:
		명령문2;
		break;

case 상수 3:
	  명령문3;
		break;

default:
	명령문4;
	break;

}*/

/*#include<stdio.h>
int main(void)
{
	int nData = 0;
	printf("정수 입력 : ");
	scanf_s("%d", &nData);

	switch (nData)

	case 1:
		printf("1을 입력하셨습니다\n");
		break;
	case 2:
		printf("2을 입력하셨습니다");
		break;
	case 3:
		printf("3을 입력하셨습니다");
		break;
	default:
		printf("그 외의 값을 입력하셨습니다\n");
		break;

	}

	printf("switch문 종료\n");

	return 0;


}*/


//goto
//goto문은 break문처럼 특정위치로 프로그램의 흐름을 '즉시'변경한다
// break문은 사용할 수 있는곳이 문법적으로 제한적이(loop, switch 등)
// 반면 goto문은 사용자가 레이블(Label)만 명시하면 어느위치든 사용가능하다.



/*#include<stdio.h>
int main(void)
{
	int a = 0;
	printf("월을 입력하세요.");
	scanf_s("%d", &a);

	switch (a)
	{
	case 12:
	case 1:
	case 2:
		printf("겨울입니다");
		break;

	case 3:
	case 4:
	case 5:
		printf("봄입니다");
		break;

	case 6:
	case 7:
	case 8:
		printf("여름입니다");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을입니다");
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

// 반복문 (while, for)
// 일정구간의 코드를 연속적으로 반복해 실행하는 제어문

//while (true)
//{
	//반복 실행하고자 하는 문장;
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

	//for (초기값; 조건; 증감식)
	//{
		//반복 실행하고자 하는 문장;
	//}
	//while (nData <= 10)
	//{

		//nTotal = nTotal + nData;
		//nData++;
	//}
	printf("1부터 10까지의 합 : %d", nTotal);

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
	printf("1부터 %d까지의 합은 %d입니다", Input, Total);
	return 0;
}*/

/*#include<stdio.h>
int main(void)
{
	// 가장 초기에는,
	// 1. 초기값 설정
	// 2. 조건 검사

	//두번째 부터는
	// 1. 증감
	// 2. 조건 검사

	int Total = 0;
	int Input = 0;

	printf("Input?");
	scanf_s("%d", &Input);

	for (int nData = 1; nData <= Input; nData++)
	{
		Total = Total + nData;

	}
	printf("1부터 %d까지의 총합은 %d입니다",Input,  Total);
	return 0;
}*/