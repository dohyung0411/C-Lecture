//배열의 한계
//
//- 배열은 크기가 같은 데이터만 그룹으로 묶을 수 있다.
//
//- 나이, 키, 몸무게 별로 그룹을 나누는 것보다 특정 사람의 정보를 모아서 그룹으로 만드는 것이 효율적임.


//1. 구조체
//
//- 사용자 정의 자료형 중 한가지
//
//- C언어는 크기나 형식이 다른 데이터를 그룹으로 묶어 사용할 수 있도록 구조체(Structure) 문법을 제공
//
//- 기본 자료형이나 사용자가 정의한 자료형을 그룹으로 묶어 새로운 자료형을 만들 수 있다.
//
//- 구조체 기본 형식


/*
#include<stdio.h>
struct People
{
   char  szName[22];
   short age;
   double height;
   double weight;
};
void main()
{
   struct People stPeopleData;
   struct People stPeopleArr[10];
   struct People* pstPeoplePointer;

   printf("___[sizeof()___\n");
   printf("sizeof(stPeopleData) = [% 5d Byte]\n", sizeof(stPeopleData));
   printf("sizeof(stPeopleArr[10]) = [% 5d Byte]\n", sizeof(stPeopleArr[10]));
   printf("sizeof() = [% 5d Byte]\n", sizeof(stPeopleData));
}
*/


/*
#include<stdio.h>
typedef unsigned short US;  // unsigned short형을 US라는 새로운 이름으로 정의
void main()
{
   unsigned short sData = 7; // 기존 자료형 선언
   US typedefData = 0;

   printf("___[sizeof()___\n");
   printf("sizeof(sData) = [% 5d Byte]\n", sizeof(sData));
   printf("sizeof(typedefData) = [% 5d Byte]\n", sizeof(typedefData));
   printf("\n");

   typedefData = sData;

   printf("typedefData = %d\n", typedefData);
}
*/

/*
       ㅁ typedef의 장점
           ㅇ 복잡해 보이는 문법을 쉽게 표현할 수 있다
                - typedef는 배열, 포인터와 같은 형식도 재정의 가능
                   [
                      typedef int USER_DATA[7];
                      USER_DATA arr; // int arr[7]; 라고 선언한 것과 같음
                       USER_DATA* p; // int (*p)[7]; 라고 선언한 것과 같음
                   ]

*/

/* 1)
#include<stdio.h>
typedef struct People Person;
struct People
{
   char  szName[22];    // 이름   22Byte
   short age;           // 나이    2Byte
   double height;       // 키      8Byte
   double weight;       // 몸무게  8Byte
};
void main()
{
   struct People stPeopleData;
   Person        stPersonData;
}
*/


/* 2)
#include<stdio.h>

typedef struct People
{
   char  szName[22];    // 이름   22Byte
   short age;           // 나이    2Byte
   double height;       // 키      8Byte
   double weight;       // 몸무게  8Byte
}Person;
void main()
{
   struct People stPeopleData;
   Person        stPersonData;
}
*/

/* 3)
#include<stdio.h>

typedef struct
{
   char  szName[22];    // 이름   22Byte
   short age;           // 나이    2Byte
   double height;       // 키      8Byte
   double weight;       // 몸무게  8Byte
}Person;
void main()
{
   // struct People stPeopleData; // eErr ! - 구조체 이름(People) 생략
   Person        stPersonData;
}
*/

/*
   ㅁ 구조체로 선언한 변수의 요소 사용하기
      ㅇ 구조체로 선언한 변수는 '.'(요소 지정 연산자)과 자신이 사용할 요소의 이름을 함께 적어서 사용
         - 구조체 변수 이름.사용할 요소
            [
               typedef struct People
               {
                  char  szName[22];    // 이름   22Byte
                  short age;           // 나이    2Byte
                  double height;       // 키      8Byte
                  double weight;       // 몸무게  8Byte
               }Person;

               void main()
               {
                  Person stPersonData;          // Person 자료형으로 stPersonData 변수를 선언

                  stPersonData.age    = 21;     // stPersonData 변수 안의    age에 값   21을 대입
                  stpersonData.height = 178.3   // stPersonData 변수 안의 height에 값 178.3을 대입


*/


/*
#include<stdio.h>
typedef struct
{
   char  szName[22];    // 이름   22Byte
   short age;           // 나이    2Byte
   double height;       // 키      8Byte
   double weight;       // 몸무게  8Byte
}Person;
void main()
{
   // 구조체 내부에 선언한 변수(구조체 요소)의 순서와 초기값의 순서가 동일해야함
   Person stPersonData = { "홍길동", 20, 180, 70 };

   printf("___[stPersonData display]___\n");

   printf("stPersonData.szName = %s\n ", stPersonData.szName);
   printf("stPersonData.age = %d\n ", stPersonData.age);
   printf("stPersonData.height = %.1lf\n ", stPersonData.height);
   printf("stPersonData.weight = %.1lf\n ", stPersonData.weight);
}
*/

/*
#include<stdio.h>
typedef struct
{
   char  szName[22];    // 이름   22Byte
   int age;           // 나이    2Byte
   double height;       // 키      8Byte
   double weight;       // 몸무게  8Byte
}Person;
void main()
{
   Person stPersonData;

   printf("___[인적사항을 입력하세요]___\n");
   printf("이름 : ");

   scanf_s("%s", stPersonData.szName, sizeof(stPersonData.szName));

   printf("나이 :");
   scanf_s("%d", &stPersonData.age);

   printf("키 : ");
   scanf_s("%lf", &stPersonData.height);

   printf("몸무게 :");
   scanf_s("%lf", &stPersonData.weight);

   printf("___[인적사항]___\n");
   printf("이름 : %s\n", stPersonData.szName);
   printf("나이 : %d\n", stPersonData.age);
   printf("키 : %.1lf\n", stPersonData.height);
   printf("몸무게 : %.1lf\n", stPersonData.weight);

}
*/

/*
#include<stdio.h>
typedef struct
{
   char  szName[22];    // 이름   22Byte
   int age;           // 나이    2Byte
   double height;       // 키      8Byte
   double weight;       // 몸무게  8Byte
}Person;
void main()
{
   Person stPersonData;  // Person 자료형으로 stPersonData 변수를 선언
   Person* pst;          // Person 형식으로 선언한 메모리에 접근할 수 있는 포인터 선언

   pst = &stPersonData; // 포인터 변수 pst는 stPersonData 변수의 주소값을 저장

   (*pst).age = 20; // pst에 저장된 주소에 가서 age 요소에 값 20을 대입

   printf("(*pst).age = %d\n", (*pst).age);

   printf("\n___[sizeof()___\n");
   printf("sizeof(pst ) = [% 5d Byte]\n", sizeof(pst));
   printf("sizeof(*pst) = [% 5d Byte]\n", sizeof(*pst));
   printf("sizeof((*pst).age) = [% 5d Byte]\n", sizeof((*pst).age));


}
*/

/*
#include<stdio.h>
typedef struct
{
   char  szName[22];    // 이름   22Byte
   int age;           // 나이    2Byte
   double height;       // 키      8Byte
   double weight;       // 몸무게  8Byte
}Person;
void main()
{
   Person stPersonData;
   Person* pst;

   pst = &stPersonData;

   //(*pst).age = 20;
   pst->age = 20; // 연산자 우선순위 문제를 해결하는 '->'연산자
                  // (*pst).age = 20; 와 동일함.

   printf("pst->age = %d\n", pst->age);
   printf("sizeof(pst->age) = [%5d Byte]\n", sizeof(pst->age));
}
*/