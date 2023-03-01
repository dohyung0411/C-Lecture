/*
     �� ����ü ��� ���� ����
        �� ����ü�� ��Ҹ� ������ ũ��� �����Ͽ� ���� �ӵ��� ���̱� ����
           C�����Ϸ��� ����ü ��� ����(Struct Member Alignment) ����� ����
        �� 1, 2, 4, 8 Byte ������ ���� ����
        �� �����Ϸ��� ������ ����ü ���� ���ؿ� ���� ����ü ũ�Ⱑ �޶���
        �� �⺻������ 8Byte ���� �����̳� ����߿��� 8Byte�� ���� ��,
           �ش� ����ü ��� �߿��� ���� ū ����� ũ�� ���ķ� ������.
*/
/*
    �� ����ü�� Ȱ���� ���Ḯ��Ʈ
       �� �������� ���ڸ� �Է� �޾Ƽ� �ջ��ϴ� '���ϱ� ���α׷�'�� �����.
          - �迭       : ������ ���ڸ�ŭ �迭�� ����
          - �����Ҵ�   : ����ڿ��� ������ ������ �Է� �޾� �� ������ŭ �޸𸮸� �����Ҵ�
          - ���Ḯ��Ʈ : ����ڰ� �Է��� ���ڸ� ��� �����ϰ� �ջ� ����
                        ��, ����ڿ��� ���� �ʰ� ���α׷��� �˾Ƽ� ���� �޸� �Ҵ� ����

       �� ���Ḯ��Ʈ(Linked-List)
          - ����ڰ� �Է��� ��� �����͸� �����ϴ� ���
             1) ���ڸ� �����ϴ� ���� �޸𸮸� �ϳ��� �÷��� ��
             2) �������� �Ҵ�� �޸��� �ּҰ��� �����Ϸ��� ���� ������ŭ �����Ͱ� �ʿ�
             3) �����Ͱ� �þ�� '������ 1'�� '������ 2'�� ������ �ʿ�
             4) '���� 1'�� '������ 2'�� �ϳ��� �޸𸮷� ���(=Node) �������� �Ҵ��ϸ� ���� �ذ�
             5) '���� 2'�� �߰��� �ԷµǸ� ���� '���� 2'���� ������ �޸𸮿�
                �� ���� ���ڸ� ����ų '������ 3'�� �԰� ����ϴ� ���� �޸𸮸� �Ҵ��ؼ� �� �����ּҸ� '������ 2'�� ����

       �� ���(NODE) : ���� ����Ʈ���� ���ڿ� �����͸� �Բ� �����ϱ� ���� �Ҵ��� �޸�
       [
         typedef struct ListNode
         {
            int             nData; // ���ڸ� ������ ����
            struct ListNode* pNext; // ���� ��带 ����ų ������
         } ListNode;

       ]

       1) ���Ḯ��Ʈ�� ���� ����
          - �������� �Ҵ�Ǵ� ù ����� �ּ� ���� �����ؾ� �ϱ� ������ �����Ͱ� �ʿ�
          - ���Ḯ��Ʈ�� �������� �Ǵ� �����Ͱ� ��� ������(Head Pointer)
          [
             ListNode* pHead = NULL;
          ]

       2) ���� 1�� �����ϱ� ���� �� ��� �߰�
          - ����ڰ� �Է��� ���� 1�� �����ϱ� ���� ���ο� ��带 �߰�
          - ���ο� ��带 ���� �޸𸮸� malloc �Լ��� ����� �������� �Ҵ�
          - �Ҵ�� �� ����� �ּ� ���� ��������Ϳ� ����
          - �Ҵ�� ����� nData���� 1�� �����ϰ�, pNext = NULL�� ����
          [
             pHead = (ListNode*)malloc(sizeof(ListNode));
             pHead->nData = 1;    // ����� nData�� ���� 1�� ����
             pHead->pNext = NULL; // ���� ��尡 ������ ���

          ]

       3) ���� 2�� �����ϱ� ���� �� ��� �߰�
          - ����ڰ� �Է��� ���� 2�� �����ϱ� ���� ���ο� ��带 �߰�
          - ���ο� ��带 ���� �޸𸮸� malloc �Լ��� ����� �������� �Ҵ�
          - �Ҵ�� �� ����� �ּ� ���� ù ����� pNext �����Ϳ� ����
          - �Ҵ�� ����� nData���� 1�� �����ϰ�, pNext = NULL�� ����
          [
             pHead->pNext        = (ListNode*)malloc(sizeof(ListNode));
             pHead->pNext->nData = 2; // ����� nData�� �� 3�� ����
             pHead->pNext->pNext = NULL; // ���� ��尡 ������ ���

          ]
*/

/*
#include<stdio.h>
#include<malloc.h>
typedef struct ListNode
{
   int nData;
   struct ListNode* pNext;
}ListNode;
void main()
{
   ListNode* pHead = NULL;

   pHead = (ListNode*)malloc(sizeof(ListNode));
   pHead->nData = 1;
   pHead->pNext = NULL;

   printf("���1 nData = %d\n",  pHead->nData);

   pHead->pNext = (struct ListNode*)malloc(sizeof(ListNode));
   printf("���1 pNext(���2 �ּ�) = %p\n\n", pHead->pNext);


   pHead->pNext->nData = 2;
   pHead->pNext->pNext = NULL;

   printf("���2 nData = %d\n", pHead->pNext->nData);

   pHead->pNext->pNext = (struct ListNode*)malloc(sizeof(ListNode));
   printf("���2 pNext(���3 �ּ�) = %p\n\n", pHead->pNext->pNext);

   pHead->pNext->pNext->nData = 3;
   pHead->pNext->pNext->pNext = NULL;
   printf("���3 nData = %d\n", pHead->pNext->pNext->nData);

   printf("���3 pNext(NULL) = %p\n\n", pHead->pNext->pNext->pNext);

   printf("___[pHead(ù ��° ���)]___\n");
   printf("pHead->nData = %d\n", pHead->nData);
   printf("pHead->pNext = %p\n", pHead->pNext);
}
*/

//#include<stdio.h>
//#include<malloc.h>
//typedef struct ListNode
//{
//    int nData;
//    struct ListNode* pNext;
//
//}ListNode;
//void main()
//{
//
//    ListNode* pHead = NULL;
//    ListNode* pTail = NULL;
//    ListNode* pCur = NULL;
//
//    pHead = (ListNode*)malloc(sizeof(ListNode));
//    pTail = pHead;
//
//    pTail->nData = 1;
//    pTail->pNext = NULL;
//
//
//
//    pTail->pNext = (ListNode*)malloc(sizeof(ListNode));
//    pTail = pTail->pNext;
//    pTail->nData = 2;
//    pTail->pNext = NULL;
//
//    pTail->pNext = (ListNode*)malloc(sizeof(ListNode));
//    pTail = pTail->pNext;
//    pTail->nData = 3;
//    pTail->pNext = NULL;
//
//    pTail->pNext = (ListNode*)malloc(sizeof(ListNode));
//    pTail = pTail->pNext;
//    pTail->nData = 4;
//    pTail->pNext = NULL;
//
//    pTail->pNext = (ListNode*)malloc(sizeof(ListNode));
//    pTail = pTail->pNext;
//    pTail->nData = 5;
//    pTail->pNext = NULL;
//
//    printf("___[���Ḯ��Ʈ ���]___\n");
//    printf("___Use for\n");
//    // ���⿡ �ڵ带 �Է�
//    for (int i = 1; i < 6; i++)
//    {
//        int nData = 1;
//        pCur = pHead;
//        pCur = pCur->nData;
//        printf("[%d] ->", pCur);
//        nData++;
//    }
//    printf("NULL\n");
//    printf("___Use while\n");
//    // ���⿡ �ڵ带 �Է�
//
//
//
//    printf("___[pHead(ù ��° ���)]___\n");
//    printf("pHead->nData = %d\n", pHead->nData);
//    printf("pHead->pNext = %p\n", pHead->pNext);
//
//    printf("\n___[pTail(������ ���)]___\n");
//    printf("pTail->nData = %d\n", pTail->nData);
//    printf("pTail->pNext = %p\n", pTail->pNext);
//
//
//
//}
