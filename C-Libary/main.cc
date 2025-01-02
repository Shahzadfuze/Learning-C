// This is a test for my C libary
//


#include "mylib.h"

int main(){
  fprintf(stdout,"Hello World\n");

  struct ListNode* head = createNode(10);
  (*head).next = createNode(20);
  (*(*head).next).next = createNode(30);
  fprintf(stdout, "Linked List\n----------------\n");
  printList(head);

  fprintf(stdout, "Reversed List\n--------------\n");
  printList(reverseList(head));

  freeList(head);
  return 0;
}
