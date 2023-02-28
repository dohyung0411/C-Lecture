//�迭�� �Ѱ�
//
//- �迭�� ũ�Ⱑ ���� �����͸� �׷����� ���� �� �ִ�.
//
//- ����, Ű, ������ ���� �׷��� ������ �ͺ��� Ư�� ����� ������ ��Ƽ� �׷����� ����� ���� ȿ������.


//1. ����ü
//
//- ����� ���� �ڷ��� �� �Ѱ���
//
//- C���� ũ�⳪ ������ �ٸ� �����͸� �׷����� ���� ����� �� �ֵ��� ����ü(Structure) ������ ����
//
//- �⺻ �ڷ����̳� ����ڰ� ������ �ڷ����� �׷����� ���� ���ο� �ڷ����� ���� �� �ִ�.
//
//- ����ü �⺻ ����


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
typedef unsigned short US;  // unsigned short���� US��� ���ο� �̸����� ����
void main()
{
   unsigned short sData = 7; // ���� �ڷ��� ����
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
       �� typedef�� ����
           �� ������ ���̴� ������ ���� ǥ���� �� �ִ�
                - typedef�� �迭, �����Ϳ� ���� ���ĵ� ������ ����
                   [
                      typedef int USER_DATA[7];
                      USER_DATA arr; // int arr[7]; ��� ������ �Ͱ� ����
                       USER_DATA* p; // int (*p)[7]; ��� ������ �Ͱ� ����
                   ]

*/

/* 1)
#include<stdio.h>
typedef struct People Person;
struct People
{
   char  szName[22];    // �̸�   22Byte
   short age;           // ����    2Byte
   double height;       // Ű      8Byte
   double weight;       // ������  8Byte
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
   char  szName[22];    // �̸�   22Byte
   short age;           // ����    2Byte
   double height;       // Ű      8Byte
   double weight;       // ������  8Byte
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
   char  szName[22];    // �̸�   22Byte
   short age;           // ����    2Byte
   double height;       // Ű      8Byte
   double weight;       // ������  8Byte
}Person;
void main()
{
   // struct People stPeopleData; // eErr ! - ����ü �̸�(People) ����
   Person        stPersonData;
}
*/

/*
   �� ����ü�� ������ ������ ��� ����ϱ�
      �� ����ü�� ������ ������ '.'(��� ���� ������)�� �ڽ��� ����� ����� �̸��� �Բ� ��� ���
         - ����ü ���� �̸�.����� ���
            [
               typedef struct People
               {
                  char  szName[22];    // �̸�   22Byte
                  short age;           // ����    2Byte
                  double height;       // Ű      8Byte
                  double weight;       // ������  8Byte
               }Person;

               void main()
               {
                  Person stPersonData;          // Person �ڷ������� stPersonData ������ ����

                  stPersonData.age    = 21;     // stPersonData ���� ����    age�� ��   21�� ����
                  stpersonData.height = 178.3   // stPersonData ���� ���� height�� �� 178.3�� ����


*/


/*
#include<stdio.h>
typedef struct
{
   char  szName[22];    // �̸�   22Byte
   short age;           // ����    2Byte
   double height;       // Ű      8Byte
   double weight;       // ������  8Byte
}Person;
void main()
{
   // ����ü ���ο� ������ ����(����ü ���)�� ������ �ʱⰪ�� ������ �����ؾ���
   Person stPersonData = { "ȫ�浿", 20, 180, 70 };

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
   char  szName[22];    // �̸�   22Byte
   int age;           // ����    2Byte
   double height;       // Ű      8Byte
   double weight;       // ������  8Byte
}Person;
void main()
{
   Person stPersonData;

   printf("___[���������� �Է��ϼ���]___\n");
   printf("�̸� : ");

   scanf_s("%s", stPersonData.szName, sizeof(stPersonData.szName));

   printf("���� :");
   scanf_s("%d", &stPersonData.age);

   printf("Ű : ");
   scanf_s("%lf", &stPersonData.height);

   printf("������ :");
   scanf_s("%lf", &stPersonData.weight);

   printf("___[��������]___\n");
   printf("�̸� : %s\n", stPersonData.szName);
   printf("���� : %d\n", stPersonData.age);
   printf("Ű : %.1lf\n", stPersonData.height);
   printf("������ : %.1lf\n", stPersonData.weight);

}
*/

/*
#include<stdio.h>
typedef struct
{
   char  szName[22];    // �̸�   22Byte
   int age;           // ����    2Byte
   double height;       // Ű      8Byte
   double weight;       // ������  8Byte
}Person;
void main()
{
   Person stPersonData;  // Person �ڷ������� stPersonData ������ ����
   Person* pst;          // Person �������� ������ �޸𸮿� ������ �� �ִ� ������ ����

   pst = &stPersonData; // ������ ���� pst�� stPersonData ������ �ּҰ��� ����

   (*pst).age = 20; // pst�� ����� �ּҿ� ���� age ��ҿ� �� 20�� ����

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
   char  szName[22];    // �̸�   22Byte
   int age;           // ����    2Byte
   double height;       // Ű      8Byte
   double weight;       // ������  8Byte
}Person;
void main()
{
   Person stPersonData;
   Person* pst;

   pst = &stPersonData;

   //(*pst).age = 20;
   pst->age = 20; // ������ �켱���� ������ �ذ��ϴ� '->'������
                  // (*pst).age = 20; �� ������.

   printf("pst->age = %d\n", pst->age);
   printf("sizeof(pst->age) = [%5d Byte]\n", sizeof(pst->age));
}
*/