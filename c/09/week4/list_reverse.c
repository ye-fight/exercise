#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

Node *createLinkedList()
{
	Node *pHead = 0;
	for (int i = 0; i < 5; ++i)
	{
		Node *p = (Node*)malloc(sizeof(Node));
		p->data = i;
		p->next = pHead;
		pHead = p;
	}

	return pHead;
}

void freeLinkedList(Node *p)
{
	while (p)
	{
		Node *pToBeDeleted = p;
		p = p->next;

		free(pToBeDeleted);
	}
}

void printLinkedList(const Node *p)
{
	printf("Linked list:\n");
	while (p)
	{
		if (p->next)
			printf(" %d -->", p->data);
		else
			printf(" %d\n", p->data);

		p = p->next;
	}
}

void reverseLinkedList(Node* &pHead)
{
	if (pHead == 0)
		return;

	Node *pCur = pHead;
	Node *pNext = pCur->next;
	while (pNext)
	{
		Node *pNextNext = pNext->next; // 保存未逆置的链表
		pNext->next = pCur;
		pCur = pNext;
		pNext = pNextNext;
	}

	pHead->next = 0;
	pHead = pCur;
}

int main()
{
	Node *p = createLinkedList();
	printLinkedList(p);

	reverseLinkedList(p);
	printLinkedList(p);

	freeLinkedList(p);

	return 0;
}