// file: 
//

// local include files
//
#include "example.h"

// function: main
//
// Program Function: Solving Leet code problem two Adding Two Numbers 
// 
//


/*
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
  


}
*/


int main(int argc, const char** argv) {

  // Creating the Nodes
  //
  struct ListNode* first_head = createNode(2);
  struct ListNode* first_second = createNode(4);
  struct ListNode* first_tail = createNode(3);

  struct ListNode* second_head = createNode(5);
  struct ListNode* second_second = createNode(6);
  struct ListNode* second_tail = createNode(4);
  


  // Linking each of them
  //


  (*first_head).next = first_second;
  (*first_second).next = first_tail;

  (*second_head).next = second_second;
  (*second_second).next = second_tail;




  fprintf(stdout, "Reversed First\n");
  first_head = reverseList(first_head);
  printList(first_head);



  fprintf(stdout, "Reversed Seccond\n");
  second_head = reverseList(second_head);
  printList(second_head);

  
  // TODO Figure out why the first and last variables are dupilcating 
  //

 
  int x = (*second_head).data;
  int y = (*second_second).data;
  int z = (*second_tail).data;
  fprintf(stdout, "%d\n", x);

  
  fprintf(stdout, "%d\n", concatenate(x, y, z));

  freeList(first_head);
  freeList(second_head);
  /*  
  fprintf(stdout, "First Linked List\n\n");
  printList(first_head);
  fprintf(stdout, "First_head: \n %d" ,(*first_head).data);

  


  fprintf(stdout, "\n\n Second List\n\n");
  printList(second_head);
  

  */
  
  
  // Reversing the List
  //
  
  

  
  //Return Gracefully
  //
  return 0;
}
