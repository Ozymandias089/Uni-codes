#include<stdio.h>
#include<stdlib.h>
#include"DoubleLinkedList.h"

int main(void){
	linkedList_h* DL;
	listNode *p;

	DL = createLinkedList_h();
	printf("(1) Create Double Linked List! \n");
	printList(DL);

	printf("\n(2) Insert [Mon]node into Double Linked List! \n");
	insertNode(DL, NULL, "Mon");
	printList(DL);

	printf("\n(3) Insert [Wed] node after [Mon] node in Double Linked List! \n");
	p = searchNode(DL, "Mon"); insertNode(DL, p, "Wed");
	printList(DL);

	printf("\n(4) Insert [Fri] node after [Wed] node in Double Linked List! \n");
	p = searchNode(DL, "Wed");  insertNode(DL, p, "Fri");
//	printf("%p", p);
	printList(DL);

	
	printf("\n(5) Delete [Wed] node in Double Linked List! \n");
	p = searchNode(DL, "Wed"); deleteNode(DL, p);
	printList(DL);

	getchar(); return 0;
}
