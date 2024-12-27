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


  
  // TODO Figure out why the first and last variables are dupilcating 
  // FIXED Basiclly what was going on is that the last values where not
  // changing correctly when I called it with .data I'm guessing this is because
  // the last one still points to the NULL so it was tweaking out



  int x = (*first_head).data;
  int y = (*first_second).data;
  int z = (*first_tail).data;
  fprintf(stdout, "%d\n%d\n%d\n", x, y, z);

  
  fprintf(stdout, "%d\n", concatenate(x, y, z));
   
  printf("\n-----------------------------------\n");
  
  first_head = reverseList(first_head);
  
  printList(first_head);


  
  ListNode* temp = first_head;
  while ((*temp).next != NULL) {
    temp = (*temp).next;
  }
  first_tail = temp; // Now first_tail points to the actual tail of the reversed list

  

   x = (*first_head).data;          // First node in the reversed list
   y = (*first_head->next).data;    // First node in the reversed list
   z = (*first_tail).data;          // Last node in the reversed list


  
  
  fprintf(stdout, "%d\n%d\n%d\n", x, y, z);
  fprintf(stdout, "%d\n", concatenate(x, y, z));


  
  
  
  
  freeList(first_head);
  freeList(second_head);
  
 

  
  // Reversing the List
  //
  
  

  
  //Return Gracefully
  //
  return 0;
}
