/*
   �� �迭�� ������ ǥ����� ����

                             �迭                        ������
         ǥ���          char data[5];                  char* p;
         ������               []                            *
                        �迭�� ����ϴ�               ������ ������ ����Ű��
                   �޸� �׷��� ���� �ּ� ����       �޸��� ���� �ּ� ����

      �� �迭�� �����ʹ� ǥ�⸸ �ٸ� �� ���� ������ �����ϴ�
      �� �迭�� �����ʹ� ǥ����� ���� �ٲ� ��� �����ϴ�


*/

/*#include<stdio.h>
void main()
{
   char data[5];
   data[1] = 7;

   printf("data[1] = %d\n", data[1]);
   printf("*(data + 1) = %d\n", *(data + 1)); // *(data + 1)�� data[1]�� ����.
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

// [���� - �迭 ǥ����� �Ѱ�]
/*#include<stdio.h>
int main(void)
{
   int nData[2] = { 0x12345678, 0x12345678 };

   nData[0] = 0x77; //nData �迭 �׸��� ũ�Ⱑ 4byte �̹Ƿ� 0x00000077�� ���Ե�.

   printf("nData[0] = 0x%08x\n", nData[0]);
   printf("nData[1] = 0x%08x\n", nData[1]);

   return 0;
}*/

// [���� - �迭 ǥ����� �Ѱ�(�ذ���) - ������ ���]
/*#include<stdio.h>
int main(void)
{
   int nData[2] = { 0x12345678, 0x12345678 };

   //nData[0] = 0x77; // nData �迭 �׸��� ũ�Ⱑ 4byte �̹Ƿ� 0x00000077�� ���Ե�.

   *(char*)nData = 0x77; // �Ͻ��� int* ���� char* ������ type casting.

   printf("nData[0] = 0x%08x\n", nData[0]);

   *(char*)(nData + 1) = 0x99; // �Ͻ��� int* ���� char* ������ type casting.

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


// [���� - ������ ������ ���� -> �迭 ǥ������� ����]
/*#include<stdio.h>
int main(void)
{
   int nData = 0x12345678;
   int nTotal = 0;
   char* pData;

   pData = (char*)&nData;

   nTotal = *(pData + 0) + *(pData + 1) + *(pData + 2) + *(pData + 3);
   printf("�� ���� %d �Դϴ�\n", nTotal);

   // *(p + 0)�� p[0]�� ���� ǥ���̴�.
   nTotal = pData[0] + pData[1] + pData[2] + pData[3];
   printf("�� ���� %d �Դϴ�\n", nTotal);

   // �ش� ����ó�� ������ ǥ����� �迭 ǥ������� �ٲٸ� ������ �ܼ��� ���°��� �´�.
   // ������, ������ �����ڴ� ǥ����� ���� �ش� ������ � ������ ����Ǿ����� �Ǵ��Ѵ�.
   // ������ ǥ����� ���Ƿ� �ٲٸ� ��ȣ���� �򰥸� �� �ִ�.

   return 0;
}*/

// [���� - �迭�� �ּ� 1]
/*
#include<stdio.h>
int main(void)
{
   char cData[4];
   char* p = &cData[0];

   printf("�迭�� ���� �ּ� &cData = %p\n", &cData);

   // �迭�� ù��° �׸��� �ּҰ� �迭 ��ü�� ���� �ּҿ� ����.
   printf("�迭�� ù��° index�� �ּ� &cData[0] = %p\n", &cData[0]);

   return 0;

}
*/

/*

char *p = & cData[0];
char *p = & *(cData + 0); // �迭 ǥ����� ������ ǥ������� ����
char *p = & *cData;       // 0 ����, ��ȣ ����.
char *p = & (*cData);     // & : ���� �ּҸ� ��� ������, * : ���� �ּҸ� �����ϴ� ������
                          // �� �������� �켱������ ����.
                          // �������� �켱������ ������ ���ʿ��� �������� ���� ����.
char *p = cData;          // �ᱹ & (*cData)��� ����, cData�� ����Ű�� ����� �ּҸ�
                          // ��ڴ� ��� ���� ����.
                          // �ᱹ �迭 ������ �̸� = �迭�� ���� �ּ�.


*/

// [���� - �迭�� �ּ� 2]
/*#include<stdio.h>
int main(void)
{
   char cData[4];
   char* p = &cData[0]; // �迭�� ù���� �׸��� �ּҰ� �迭 ��ü�� ���� �ּҿ� ����.

   printf("�迭�� �ּ� &cData[0]      = %p\n", &cData[0]);
   printf("�迭�� �ּ� &*(cData + 0) = %p\n", &*(cData + 0);
   printf("�迭�� �ּ� &*cData = %p\n", &*cData;
   printf("�迭�� �ּ� &(*cData) = %p\n", &(*cData);
   printf("�迭�� �ּ� cData = %p\n", cData ;
   printf("�迭�� �ּ� p = %p\n", p;
}*/


// [���� - �迭�� �̸��� ���ȭ�� �ּ�]
/*#define ADDR 100 // ��� 100�� #define ��ó���⸦ ����Ͽ� ADDR�� ġȯ
#include<stdio.h>
void main()
{
   int nData = ADDR; // ġȯ�� ADDR�� nData�� ����.
                     // int nData = 100; �� ���� ǥ��.
   ADDR = ADDR + 1;  // ADDR�� ����̱� ������ ���� �Ұ���.
                     // 100 = 100 + 1; �� ���� ǥ��.

   char cData[7];
   cData = cData + 1;  // �迭 �̸��� ����ó�� ����ϰ� ������, �����Ϸ��� �迭 �̸��� ���ȭ�� �ּҷ� ġȯ�� �ش�.
                       // ���� �迭 �̸� ��ü�� ���ȭ �Ǿ� �ֱ� ������ �̿� ���� ǥ���� ����� �� ����.
}*/

// [���� - �迭�� �������� ����]
/*#include<stdio.h>
int main(void)
{
   int data = 7;
   data = data + 1;
   char cData[4];
   char* p;
   p = cData;


   p = p + 1;        // �����ʹ� �ּҰ��� ������ �� ������, �ش� �ּҰ��� ������ �� �ִ�.
   cData = cData + 1; // �迭�� ���ȭ�� �ּ��̱� ������ ������ü�� �Ұ��� �ϴ�.

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



   printf("cData �迭�� �� ����� ���� %d �Դϴ�\n", iResult);
}*/


// �迭�� �������� �� ������
// ���� 1) �迭�� �������� �� ������ 1
/*#include<stdio.h>
void main()
{
   char* p[5]; // char*�� ������ 5�� �����
               // ��, char* p[0], char* p[1], ...
   char* p1;
   char* p2;
   char* p3;

   printf("size of p = %d\n", sizeof(p)); // ������ ������ �ּҸ� ����(32bit ���α׷������� 4byte), ��, 4byte�� *p�� 5�� �������.
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

   char* p[5] = { &cData1, &cData2, &cData3, &cData4, &cData5 }; // �����͵� ������ �迭�� �̿��Ͽ� �׷����� ���� �� �ִ�.
                                                                 // []�����ڰ� *������ ���� �켱������ ����.
                                                                 // ���� �ᱹ char* p[5]�� char* (p[5])��� ������ �Ͱ� ����.

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
   char(*p)[5]; // (*p)�� ����

   printf("size of p = %d\n", sizeof(p)); // ������ ������ �ּҸ� ����(32bit ���α׷������� 4byte), �� 4byte
   printf("size of *p = %d\n", sizeof(*p)); // *p�� ����ų �� �ִ� ����� ũ��� char��*(1byte) * 5, �� 5byte

   return 0;
}
*/


/*#include<stdio.h>
int main(void)
{
   char(*p)[5] = (char*)100; // (*p)�� ����

   printf("p�� �ּ� = %d\n", p);

   p++;

   printf("p++�� p�� �ּ� = %d\n", p);

   return 0;

}*/
