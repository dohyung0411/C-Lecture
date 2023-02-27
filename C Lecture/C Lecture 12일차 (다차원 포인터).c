/*
<������ ������(Pointer)>

   �� ������ ������
      �� ���������� ���� �� ����� ����Ű�� ������
      �� ������ �ڽ��� ����ų �� �ִ� ����� ������ŭ ����
      �� ������ ���� ���� �� '*' Ű���带 �߰��� ������ ������ �ϳ��� ����
      �� '*' Ű���带 �� �� �̻� ����� �����Ͱ� '������ ������'
      �� '*" Ű����� �ִ� 7�� ��� ����
      �� ������ ���� ���� �� �����'*' Ű���� ������ŭ �����͸� ����� �� '*'������ ��� ����
         {
            char* p1; // 1���� ������, ǥ��(���)������ ���� : p1, *p1
            char** p2; // 2���� ������, ǥ��(���)������ ���� : p2, *p2, **p2
            char*** p3; // 3���� ������, ǥ��(���)������ ���� : p3, *p3, **p3, ***p3
         }

   �� 2���� �������� ����� ���
      �� '*' �����ڸ� �ִ� 2�� ���� ��� ����(pp, *pp, **pp)
      �� 2���� �����ʹ� �ּ� �̵��� �� �� �� �� �ִ�.
         {
            short** pp; // 2���� ������ ���� pp�� ����
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

   printf("___[sData�� ��]___\n");
   printf("sData = %d\n", sData);
   printf("*p    = %d\n", *p);
   printf("*pp   = %d\n", **pp);


   printf("\n___[sData�� �ּҰ�]___\n");
   printf("&sData   =%p\n", &sData);
   printf("&p       =%p\n", p);
   printf("*pp      =%p\n", *pp);
   printf("&(**pp)  =%p\n", &(**pp));

   printf("\n___[p�� �ּҰ�]___\n");
   printf("&p       =%p\n", &p);
   printf("&(*pp)   =%p\n", &(*pp));
   printf("pp       =%p\n", pp);

   printf("\n___[pp�� �ּҰ�]___\n");
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

   printf("\n___[sizeof(������ ����, �ּҰ�)]___\n");
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
    �� �Ϲ� ������ �Ѱ�
    {
       short sData = 0;
       int pData   = (int)&sData; // 4byte ũ���� ������� ������ ������ �ƴϴ��� �ּ� ���尡��
       *pData = 3;                // eErr ! - ������ ������ �ƴϱ� ������ '*'������ ��� �Ұ�
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



   printf("___[sData�� ��]___\n");
   printf("sData = %d\n", sData);
   printf("p    = %d\n", p);
   printf("**pp   = %d\n", **pp);

   printf("\n___[**pp�� ���]___\n");
   printf("**pp ���� �� = %d\n", **pp);

   **pp = 7;
   printf("**pp ���� �� = %d\n", **pp);
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

   printf("___[sData�� ��]___\n");
   printf("sData = %d\n", sData);
   printf("**pp   = %d\n", **pp);

   printf("___[sData�� �ּҰ�]___\n");
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
