// file: 
//

// local include files
//
#include "example.h"

// function: main
//
// Program Function: Solving Leet code problem two Adding Two Numbers 
// TODO: I made this way to complex (also bad)  simple it down a bit; But fornow its good
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


  // Getting the first list
  //
  
  int x = (*first_head).data;
  int y = (*first_second).data;
  int z = (*first_tail).data;
  fprintf(stdout, "First List\n");
  fprintf(stdout, "%d\n%d\n%d\n", x, y, z);

  fprintf(stdout, "\n Reversed \n");
  first_head = reverseList(first_head);

  
  ListNode* temp = first_head;
  while ((*temp).next != NULL) {
    temp = (*temp).next;
  }
  first_tail = temp; // Now first_tail points to the actual tail of the reversed list

  

   x = (*first_head).data;          // First node in the reversed list
   y = (*first_head->next).data;    // First node in the reversed list
   z = (*first_tail).data;          // Last node in the reversed list


  int list_1 = concatenate(x, y, z);

  fprintf(stdout, "%d\n", list_1);
    

  int a = (*second_head).data;
  int b = (*second_second).data;
  int c = (*second_tail).data;
    
  fprintf(stdout, "Second List\n");
  fprintf(stdout, "%d\n%d\n%d\n", a, b, c);


  fprintf(stdout, "\n Reversed \n");
  second_head = reverseList(second_head);



  ListNode* temp2 = second_head;
  while ((*temp2).next != NULL) {
    temp2 = (*temp2).next;
  }
  second_tail = temp2; // Now second_tail points to the actual tail of the reversed list



   a = (*second_head).data;          // Second node in the reversed list
   b = (*second_head->next).data;    // Second node in the reversed list
   c = (*second_tail).data;          // Last node in the reversed list




  
  int list_2 = concatenate(a, b, c);

  fprintf(stdout, "%d\n", list_2);

  int final = list_1 + list_2;

  fprintf(stdout, "\n\n%d\n\n", final);
  
  freeList(first_head);
  freeList(second_head);
  
 

  
  

  
  //Return Gracefully
  //
  return 0;
}
