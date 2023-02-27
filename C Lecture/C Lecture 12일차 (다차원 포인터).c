/*
<다차원 포인터(Pointer)>

   ㅁ 다차원 포인터
      ㅇ 간접적으로 여러 번 대상을 가리키는 포인터
      ㅇ 차원은 자신이 가리킬 수 있는 대상의 개수만큼 증가
      ㅇ 포인터 변수 선언 시 '*' 키워드를 추가할 때마다 차원이 하나씩 증가
      ㅇ '*' 키워드를 두 개 이상 사용한 포인터가 '다차원 포인터'
      ㅇ '*" 키워드는 최대 7개 사용 가능
      ㅇ 포인터 변수 선언 시 사용한'*' 키워드 개수만큼 포인터를 사용할 때 '*'연산자 사용 가능
         {
            char* p1; // 1차원 포인터, 표현(사용)가능한 변수 : p1, *p1
            char** p2; // 2차원 포인터, 표현(사용)가능한 변수 : p2, *p2, **p2
            char*** p3; // 3차원 포인터, 표현(사용)가능한 변수 : p3, *p3, **p3, ***p3
         }

   ㅁ 2차원 포인터의 선언과 사용
      ㅇ '*' 연산자를 최대 2개 까지 사용 가능(pp, *pp, **pp)
      ㅇ 2차원 포인터는 주소 이동을 두 번 할 수 있다.
         {
            short** pp; // 2차원 포인터 변수 pp를 선언
         }

*/


/*
#include<stdio.h>
void main()
{
   short sData = 7;
   short* p; // p, *p
   short** pp; // pp, *pp, **pp

   p = &sData;
   pp = &p;

   printf("___[sData의 값]___\n");
   printf("sData = %d\n", sData);
   printf("*p    = %d\n", *p);
   printf("*pp   = %d\n", **pp);


   printf("\n___[sData의 주소값]___\n");
   printf("&sData   =%p\n", &sData);
   printf("&p       =%p\n", p);
   printf("*pp      =%p\n", *pp);
   printf("&(**pp)  =%p\n", &(**pp));

   printf("\n___[p의 주소값]___\n");
   printf("&p       =%p\n", &p);
   printf("&(*pp)   =%p\n", &(*pp));
   printf("pp       =%p\n", pp);

   printf("\n___[pp의 주소값]___\n");
   printf("&pp      =%p\n", &pp);
}
*/

/*
#include<stdio.h>
void main()
{
   short sData = 7;
   short* p; // p, *p
   short** pp; // pp, *pp, **pp

   p = &sData;
   pp = &p;

   printf("___[sizeof(sData)]___\n");
   printf("sizeof(sData) = %dByte\n", sizeof(sData));
   printf("sizeof(*p)    = %dByte\n", sizeof(*p));
   printf("sizeof(*pp)   = %dByte\n", sizeof(*pp));

   printf("\n___[sizeof(포인터 변수, 주소값)]___\n");
   printf("sizeof(p)   = %dByte\n", sizeof(p));
   printf("sizeof(pp)  = %dByte\n", sizeof(pp));
   printf("sizeof(*pp) = %dByte\n", sizeof(*pp));
}
*/


/*
#include<stdio.h>
void main()
{
   short sData = 7;
   short* p = &sData;
   short** pp = &p;

   printf("[Before  ] sData = %d\n", sData);

   *p = 4;
   printf("[Use *p  ] sData = %d\n", sData);

   *pp = 5;
   printf("[Use **pp] sData = %d\n", sData);

}
*/

/*
#include<stdio.h>
void main()
{
   int iData = 7;
   int* p1;
   int* p2;

   p1 = &iData;
   p2 = (int*)&p1;
}
*/


/*
    ㅁ 일반 변수의 한계
    {
       short sData = 0;
       int pData   = (int)&sData; // 4byte 크기의 변수라면 포인터 변수가 아니더라도 주소 저장가능
       *pData = 3;                // eErr ! - 포인터 변수가 아니기 때문에 '*'연산자 사용 불가
    }

*/

/*
#include<stdio.h>
void main()
{
   short sData = 7;
   int p = 0; // p, *p
   short** pp; // pp, *pp, **pp

   p = &sData;
   pp = &p;



   printf("___[sData의 값]___\n");
   printf("sData = %d\n", sData);
   printf("p    = %d\n", p);
   printf("**pp   = %d\n", **pp);

   printf("\n___[**pp의 사용]___\n");
   printf("**pp 변경 전 = %d\n", **pp);

   **pp = 7;
   printf("**pp 변경 후 = %d\n", **pp);
}
*/

/*
#include<stdio.h>
void main()
{
   short sData = 3;
   short** pp;

   pp = (short**)malloc(4);
   // pp = (short**)malloc(sizeof(short*));

   *pp = &sData;

   printf("___[sData의 값]___\n");
   printf("sData = %d\n", sData);
   printf("**pp   = %d\n", **pp);

   printf("___[sData의 주소값]___\n");
   printf("sData = %p\n", sData);
   printf("*pp   = %p\n", *pp);

}
*/


/*
#include<stdio.h>
void main()
{
   short** pp;

   pp = (short**)malloc(sizeof(short*));
   *pp = (short*)malloc(sizeof(short));

   **pp = 10;

   printf("**pp = %d\n", **pp);

   printf("**pp = %d\n", &(**pp));
   printf("*pp = %d\n", *pp);
   printf("&(*pp) = %d\n", &(*pp));
   printf("pp = %d\n", pp);
}
*/


/*
#include<stdio.h>
#include<malloc.h>
void main()
{
   short** pp;

   pp = (short**)malloc(sizeof(short*) * 3);
   if (pp == NULL);
   {
      printf("malloc eErr !\n");
   }
   else
   {
      printf("[pp]malloc success = [%p], _msize() = %d\n", pp, _msize(pp));
   }

   *pp = (short*)malloc(sizeof(short) * 2);
   if (pp == NULL);
   {
      printf("malloc eErr !\n");
   }
   else
   {
      printf("[*pp]malloc success = [%p], _msize() = %d\n", *pp, _msize(*pp));
   }

   free(*pp);
   free(pp);
}
*/


/*
#include<stdio.h>
#include<malloc.h>
void main()
{
   int* p = (int*)malloc(sizeof(int) * 2);
   if (p == NULL);
   {
      printf("malloc eErr !\n");
   }

   free(p);
}
*/

//#include<stdio.h>
//#include<malloc.h>
//void doMalloc(int** q)
//{
//    *q = (int*)malloc(sizeof(int) * 2);
//    **q = 7;
//
//
//}
//void main()
//{
//    int* p = NULL;
//
//    doMalloc(&p);
//
//    printf("*p = %d\n", *p);
//
//    free(p);
//}
