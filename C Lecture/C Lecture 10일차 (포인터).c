/*
   ㅁ 배열과 포인터 표기법의 관계

                             배열                        포인터
         표기법          char data[5];                  char* p;
         연산자               []                            *
                        배열이 사용하는               포인터 변수가 가리키는
                   메모리 그룹의 사작 주소 기준       메모리의 시작 주소 기준

      ㅇ 배열과 포인터는 표기만 다를 뿐 문법 구조가 유사하다
      ㅇ 배열과 포인터는 표기법을 서로 바꿔 사용 가능하다


*/

/*#include<stdio.h>
void main()
{
   char data[5];
   data[1] = 7;

   printf("data[1] = %d\n", data[1]);
   printf("*(data + 1) = %d\n", *(data + 1)); // *(data + 1)과 data[1]은 같다.
}*/

/*#include<stdio.h>
void main()
{
   char data;
   char* p = &data;

   *p = 7;

   printf("*p = %d\n", *p);
   printf("p[0] = %d\n", p[0]);
}*/

// [예제 - 배열 표기법의 한계]
/*#include<stdio.h>
int main(void)
{
   int nData[2] = { 0x12345678, 0x12345678 };

   nData[0] = 0x77; //nData 배열 항목의 크기가 4byte 이므로 0x00000077이 대입됨.

   printf("nData[0] = 0x%08x\n", nData[0]);
   printf("nData[1] = 0x%08x\n", nData[1]);

   return 0;
}*/

// [예제 - 배열 표기법의 한계(해결방안) - 포인터 사용]
/*#include<stdio.h>
int main(void)
{
   int nData[2] = { 0x12345678, 0x12345678 };

   //nData[0] = 0x77; // nData 배열 항목의 크기가 4byte 이므로 0x00000077이 대입됨.

   *(char*)nData = 0x77; // 일시적 int* 형을 char* 형으로 type casting.

   printf("nData[0] = 0x%08x\n", nData[0]);

   *(char*)(nData + 1) = 0x99; // 일시적 int* 형을 char* 형으로 type casting.

   printf("nData[1] = 0x%08x\n", nData[1]);

   return 0;
}*/

/*
#include<stdio.h>
int main(void)
{
   int nData[2] = { 0x12345678, 0x12345678 };

   *(char*)((char*)nData + 1) = 0x33;
   *(char*)((char*)nData + 6) = 0x99;

   printf("nData[0] = 0x%08x\n", nData[0]);


   printf("nData[1] = 0x%08x\n", nData[1]);

   return 0;
}
*/


// [예제 - 복잡한 포인터 수식 -> 배열 표기법으로 변경]
/*#include<stdio.h>
int main(void)
{
   int nData = 0x12345678;
   int nTotal = 0;
   char* pData;

   pData = (char*)&nData;

   nTotal = *(pData + 0) + *(pData + 1) + *(pData + 2) + *(pData + 3);
   printf("총 합은 %d 입니다\n", nTotal);

   // *(p + 0)과 p[0]는 같은 표현이다.
   nTotal = pData[0] + pData[1] + pData[2] + pData[3];
   printf("총 합은 %d 입니다\n", nTotal);

   // 해당 예제처럼 포인터 표기법을 배열 표기법으로 바꾸면 문장이 단순해 지는것은 맞다.
   // 하지만, 보통의 개발자는 표기법을 보고 해당 변수가 어떤 변수로 선언되었는지 판단한다.
   // 때문에 표기법을 임의로 바꾸면 상호간에 헷갈릴 수 있다.

   return 0;
}*/

// [예제 - 배열의 주소 1]
/*
#include<stdio.h>
int main(void)
{
   char cData[4];
   char* p = &cData[0];

   printf("배열의 시작 주소 &cData = %p\n", &cData);

   // 배열의 첫번째 항목의 주소가 배열 전체의 시작 주소와 같음.
   printf("배열의 첫번째 index의 주소 &cData[0] = %p\n", &cData[0]);

   return 0;

}
*/

/*

char *p = & cData[0];
char *p = & *(cData + 0); // 배열 표기법을 포인터 표기법으로 변경
char *p = & *cData;       // 0 생략, 괄호 생략.
char *p = & (*cData);     // & : 번지 주소를 얻는 연산자, * : 번지 주소를 지정하는 연산자
                          // 두 연산자의 우선순위는 같다.
                          // 연산자의 우선순위가 같으면 뒤쪽에서 앞쪽으로 연산 수행.
char *p = cData;          // 결국 & (*cData)라는 말은, cData가 가리키는 대상의 주소를
                          // 얻겠다 라는 말과 동일.
                          // 결국 배열 변수의 이름 = 배열의 시작 주소.


*/

// [예제 - 배열의 주소 2]
/*#include<stdio.h>
int main(void)
{
   char cData[4];
   char* p = &cData[0]; // 배열의 첫번재 항목의 주소가 배열 전체의 시작 주소와 같음.

   printf("배열의 주소 &cData[0]      = %p\n", &cData[0]);
   printf("배열의 주소 &*(cData + 0) = %p\n", &*(cData + 0);
   printf("배열의 주소 &*cData = %p\n", &*cData;
   printf("배열의 주소 &(*cData) = %p\n", &(*cData);
   printf("배열의 주소 cData = %p\n", cData ;
   printf("배열의 주소 p = %p\n", p;
}*/


// [예제 - 배열의 이름은 상수화된 주소]
/*#define ADDR 100 // 상수 100을 #define 전처리기를 사용하여 ADDR로 치환
#include<stdio.h>
void main()
{
   int nData = ADDR; // 치환된 ADDR을 nData에 대입.
                     // int nData = 100; 과 같은 표현.
   ADDR = ADDR + 1;  // ADDR은 상수이기 때문에 대입 불가능.
                     // 100 = 100 + 1; 과 같은 표현.

   char cData[7];
   cData = cData + 1;  // 배열 이름을 변수처럼 사용하고 있지만, 컴파일러가 배열 이름을 상수화된 주소로 치환해 준다.
                       // 따라서 배열 이름 자체가 상수화 되어 있기 때문에 이와 같은 표현은 사용할 수 없다.
}*/

// [예제 - 배열과 포인터의 차이]
/*#include<stdio.h>
int main(void)
{
   int data = 7;
   data = data + 1;
   char cData[4];
   char* p;
   p = cData;


   p = p + 1;        // 포인터는 주소값을 저장할 수 있으며, 해당 주소값을 연산할 수 있다.
   cData = cData + 1; // 배열은 상수화된 주소이기 때문에 연산자체가 불가능 하다.

   return 0;
}*/

/*#include<stdio.h>
int main(void)
{
   char cData[5] = { 1, 2, 3, 4, 5 };
   int iResult = 0;
   char* p = cData;

   for (int i = 0; i < 5; i++)
   {
      *p = cData[i];
      iResult = iResult + *p;
   }



   printf("cData 배열의 각 요소의 합은 %d 입니다\n", iResult);
}*/


// 배열을 기준으로 한 포인터
// 예제 1) 배열을 기준으로 한 포인터 1
/*#include<stdio.h>
void main()
{
   char* p[5]; // char*형 변수가 5개 선언됨
               // 즉, char* p[0], char* p[1], ...
   char* p1;
   char* p2;
   char* p3;

   printf("size of p = %d\n", sizeof(p)); // 포인터 변수는 주소를 저장(32bit 프로그램에서는 4byte), 즉, 4byte의 *p가 5개 만들어짐.
                                          // 4byte * 5 = 20byte
   printf("size of *p = %d\n", sizeof(*p));

}*/

/*#include<stdio.h>
int main(void)
{
   char cData1;
   char cData2;
   char cData3;
   char cData4;
   char cData5;

   char* p[5] = { &cData1, &cData2, &cData3, &cData4, &cData5 }; // 포인터도 변수라서 배열을 이용하여 그룹으로 묶을 수 있다.
                                                                 // []연산자가 *연산자 보다 우선순위가 높다.
                                                                 // 따라서 결국 char* p[5]는 char* (p[5])라고 선언한 것과 같다.

   for (int i = 0; i < 5; i++)
   {
      *p[i] = 0;
      printf("*p[%d] = %d\n", i, *p[i]);
   }

   return 0;
}*/

/*#include<stdio.h>
int main(void)
{
   char(*p)[5]; // (*p)가 기준

   printf("size of p = %d\n", sizeof(p)); // 포인터 변수는 주소를 저장(32bit 프로그램에서는 4byte), 즉 4byte
   printf("size of *p = %d\n", sizeof(*p)); // *p가 가리킬 수 있는 대상의 크기는 char형*(1byte) * 5, 즉 5byte

   return 0;
}
*/


/*#include<stdio.h>
int main(void)
{
   char(*p)[5] = (char*)100; // (*p)가 기준

   printf("p의 주소 = %d\n", p);

   p++;

   printf("p++후 p의 주소 = %d\n", p);

   return 0;

}*/
