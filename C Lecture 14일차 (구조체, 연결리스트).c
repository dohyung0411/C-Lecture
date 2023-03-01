/*
     ㅁ 구조체 멤버 정렬 기준
        ㅇ 구조체의 요소를 일정한 크기로 정렬하여 실행 속도를 높이기 위해
           C컴파일러가 구조체 멤버 정렬(Struct Member Alignment) 기능을 제공
        ㅇ 1, 2, 4, 8 Byte 단위로 정렬 가능
        ㅇ 컴파일러에 설정된 구조체 정렬 기준에 따라 구주체 크기가 달라짐
        ㅇ 기본설정은 8Byte 단위 정렬이나 요소중에서 8Byte가 없을 시,
           해당 구조체 요소 중에서 가장 큰 요소의 크기 정렬로 결정됨.
*/
/*
    ㅁ 구조체를 활용한 연결리스트
       ㅇ 여러개의 숫자를 입력 받아서 합산하는 '더하기 프로그램'을 만든다.
          - 배열       : 정해진 숫자만큼 배열을 선언
          - 동적할당   : 사용자에게 숫자의 개수를 입력 받아 그 개수만큼 메모리를 동적할당
          - 연결리스트 : 사용자가 입력한 숫자를 모두 저장하고 합산 가능
                        즉, 사용자에게 묻지 않고 프로그램이 알아서 동적 메모리 할당 가능

       ㅇ 연결리스트(Linked-List)
          - 사용자가 입력한 모든 데이터를 저장하는 방법
             1) 숫자를 저장하는 동적 메모리를 하나씩 늘려야 함
             2) 동적으로 할당된 메모리의 주소값을 저장하려면 숫자 개수만큼 포인터가 필요
             3) 포인터가 늘어나면 '포인터 1'과 '포인터 2'도 연결이 필요
             4) '숫자 1'과 '포인터 2'를 하나의 메모리로 묶어서(=Node) 동적으로 할당하면 문제 해결
             5) '숫자 2'가 추가로 입력되면 다음 '숫자 2'값을 저장할 메모리와
                그 다음 숫자를 가리킬 '포인터 3'이 함계 사용하는 동적 메모리를 할당해서 그 시작주소를 '포인터 2'에 저장

       ㅇ 노드(NODE) : 연결 리스트에서 숫자와 포인터를 함께 저장하기 위해 할당한 메모리
       [
         typedef struct ListNode
         {
            int             nData; // 숫자를 저장할 변수
            struct ListNode* pNext; // 다음 노드를 가리킬 포인터
         } ListNode;

       ]

       1) 연결리스트의 시작 상태
          - 동적으로 할당되는 첫 노드의 주소 값을 저장해야 하기 때문에 포인터가 필요
          - 연결리스트의 시작점이 되는 포인터가 헤드 포인터(Head Pointer)
          [
             ListNode* pHead = NULL;
          ]

       2) 숫자 1을 저장하기 위한 새 노드 추가
          - 사용자가 입력한 숫자 1을 저장하기 위해 새로운 노드를 추가
          - 새로운 노드를 위한 메모리를 malloc 함수를 사용해 동적으로 할당
          - 할당된 새 노드의 주소 값은 헤드포인터에 저장
          - 할당된 노드의 nData에는 1을 저장하고, pNext = NULL을 대입
          [
             pHead = (ListNode*)malloc(sizeof(ListNode));
             pHead->nData = 1;    // 노드의 nData에 값을 1을 저장
             pHead->pNext = NULL; // 다음 노드가 없음을 명시

          ]

       3) 숫자 2를 저장하기 위한 새 노드 추가
          - 사용자가 입력한 숫자 2를 저장하기 위해 새로운 노드를 추가
          - 새로운 노드를 위한 메모리를 malloc 함수를 사용해 동적으로 할당
          - 할당된 새 노드의 주소 값은 첫 노드의 pNext 포인터에 저장
          - 할당된 노드의 nData에는 1을 저장하고, pNext = NULL을 대입
          [
             pHead->pNext        = (ListNode*)malloc(sizeof(ListNode));
             pHead->pNext->nData = 2; // 노드의 nData에 값 3을 저장
             pHead->pNext->pNext = NULL; // 다음 노드가 없음을 명시

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

   printf("노드1 nData = %d\n",  pHead->nData);

   pHead->pNext = (struct ListNode*)malloc(sizeof(ListNode));
   printf("노드1 pNext(노드2 주소) = %p\n\n", pHead->pNext);


   pHead->pNext->nData = 2;
   pHead->pNext->pNext = NULL;

   printf("노드2 nData = %d\n", pHead->pNext->nData);

   pHead->pNext->pNext = (struct ListNode*)malloc(sizeof(ListNode));
   printf("노드2 pNext(노드3 주소) = %p\n\n", pHead->pNext->pNext);

   pHead->pNext->pNext->nData = 3;
   pHead->pNext->pNext->pNext = NULL;
   printf("노드3 nData = %d\n", pHead->pNext->pNext->nData);

   printf("노드3 pNext(NULL) = %p\n\n", pHead->pNext->pNext->pNext);

   printf("___[pHead(첫 번째 노드)]___\n");
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
//    printf("___[연결리스트 출력]___\n");
//    printf("___Use for\n");
//    // 여기에 코드를 입력
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
//    // 여기에 코드를 입력
//
//
//
//    printf("___[pHead(첫 번째 노드)]___\n");
//    printf("pHead->nData = %d\n", pHead->nData);
//    printf("pHead->pNext = %p\n", pHead->pNext);
//
//    printf("\n___[pTail(마지막 노드)]___\n");
//    printf("pTail->nData = %d\n", pTail->nData);
//    printf("pTail->pNext = %p\n", pTail->pNext);
//
//
//
//}
