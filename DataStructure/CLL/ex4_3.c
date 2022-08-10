#include <stdio.h>
#include "CircularLinkedList.h"

int main(void) {
	linkedList_h* CL;
	listNode *p;

	CL = createLinkedList_h();
	printf("(1) Create circular linked list! \n");
	printList(CL);

	printf("\n(2) Insert [Mon] node into CLL! \n");
	insertFirstNode(CL, "Mon");
	printList(CL);

	printf("\n(3) Insert [Wed] node after [Mon] node! \n");
	p = searchNode(CL, "Mon"); insertMiddleNode(CL, p, "Wed");
	printList(CL);

	printf("\n(4) Insert [Fri] node after [Wed] node! \n");
	p = searchNode(CL, "Wed"); insertMiddleNode(CL, p, "Fri");
	printList(CL);

	printf("\n(5) Delete [Wed] node from CLL! \n");
	p = searchNode(CL, "Wed"); deleteNode(CL, p);
	printList(CL);

	getchar(); return 0;
}
