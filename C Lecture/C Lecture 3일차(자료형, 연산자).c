// 본인 이름을 한글로 입력받고,
// 성과 이름을 나누어 출력하세요

/*#include<stdio.h>
int main(void)
{
	char name[10] = { NULL };



	printf("당신의 이름은 무엇? ");
		scanf_s("%s", name, sizeof(name));

		printf("이름은 : %s입니다.\n", name);

		printf("성은 %c%c입니다.\n", name[0], name[1]);
		printf("이름은 %c%c%c%c.입니다\n", name[2], name[3], name[4], name[5]);


	return 0;
}*/
//자료형
	// 한정된 메모리내에서 프로그램을 개발하는수업

	//정수 : int (=integer)
	//실수 : double
	//(한)문자 : char
	//

/*#include<stdio.h>
int main(void)
{
	int kor = 0;
	int math = 0;
	int eng = 0;

	int total = 0;
	double avg = 0;


	printf("국어성적 : ");
	scanf_s("%d", &kor);

	printf("수학성적 : ");
	scanf_s("%d", &math );

	printf("영어성적 : ");
	scanf_s("%d", &eng );

	total = kor + math + eng;
	avg = total / 3.0;

	printf("총합 : %d 평균 : %.1lf\n", total, avg);


	return 0;
}*/

// 연산자
//1. 산술 연산자
//2. 대입 연산자
//3. 복합 대입 연산자
//4. 관계 연산자(비교 연산자)
//5. 논리 연산자
//6. 증감 연산자
//7. 삼항 연산자
//8. 비트 / 시프트 연산자


/*#include <stdio.h>

int main(void)
{
	int num1 = 7, num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);//%는 나머지를 구하는 기호

	printf("%d\n", -num1);

	return 0;
}*/


// < 2. 대입 연산자 >

// '=' : 대입연산자의 왼쪽(l-value)은 '공간'으로 오른쪽(r-value)은 '값'으로 해석한다
//       r-value 값의 처리를 먼저 한뒤(저장) 1-value로 대입
//       l-value 보통 저장공간의 이름(변수명) 이 명시된다, locator(위치지정자)
/*#include<stdio.h>
int main(void)
{
	int x = 0;
	int nInput = 0;

	printf("x = %d\n", x);

	printf("Input? : ");
	scanf_s("%d", &nInput);

	//nInput 변수에 저장된 사용자가 입력한 값을 x에 복사한다.
	// x에 들어있던 값은 Overwrite되고 사라진다

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

// 3. 복합 대입 연산자 -> 써도되고 안써도 됩니다. 단, 알고만 계시면 됩니다.
// 대입연산자 + 산술연산자

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


// 4. 관계 연산자(비교 연산자)

// 특정 피연산자들을 비교하여 참/거짓의 값을 반환한다
// 참 : 프로그래머가 원하는 결과값이 나왔을 때 : 0 이아닌 모든값(대표값:1)
// 거짓 : 나오지 않을때 : 0

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
// AND연산(&&) : 두 피연산자 모두가 참이면 참을 반환
// OR연산(!!) : 두 피연산자 중 하나만 참이라도 참을 반환
// 부정연산(!) : 피 연산자의 값이 참이면 거짓, 거짓이면 참을 반환



// < 6. 증감 연산자 >
// - 변수의 값을 1만큼 증가시키거나 감소 시킬 때 사용되는 연산자
// 전위(Prefix) : 피연산자 앞에 증감 연산자가 붙음, 증감연산 수행 후 나머지 문장 처리 진행
// 후위(Postfix) : 피연산자 뒤에 증감 연산자가 붙음, 모든 문장 처리 후 증감연산 수행
// '++'와, '--'로 표시되는 연산자


// 7. 삼항 연산자
// 조건 ? 결과 1 : 결과 2
// 조건이 참이면 결과 1을 수행, 조건이 거짓이면 결과 2를 수행
// 예제 코리아 교재 EXEM06-02