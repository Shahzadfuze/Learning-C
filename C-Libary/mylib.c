// file: 
//k


#include "mylib.h"


// Linked List Stuff
//



struct ListNode* createNode(int data){

  struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
  if (newNode == NULL){
    fprintf(stdout, "Memoery Allocation Failed");
    exit(1);
  }

  (*newNode).data = data;
  (*newNode).next = NULL;
  return newNode;
    
}

void printList(struct ListNode* head){
  struct ListNode* current = head;
  while(current != NULL){
    fprintf(stdout, "%d ->", (*current).data);
    current = (*current).next;

  }
  fprintf(stdout, "NULL\n");
}

void freeList(struct ListNode* head){
  struct ListNode* current = head;
  struct ListNode* nextNode;

  while(current != NULL){
    nextNode = (*current).next;
    free(current);
    current = nextNode;
  }

}

struct ListNode* reverseList(struct ListNode* head){
  struct ListNode* current = head, *prev = NULL, *next;

  while(current !=NULL){
    next = (*current).next;
    (*current).next = prev;

    prev = current;
    current = next;     
  }

  return prev;

}

unsigned concatenate(unsigned x, unsigned y, unsigned z){
  unsigned pow = 10;

  while(y >= pow){

    pow *= 10;


  }
   unsigned fuze =  x * pow + y;

   while(z >= pow){
     pow *= 10;
   }
   return fuze * pow + z;
}


/* // Binary Search stuff */
/* // */


/* // We get the array we want to search as well as the start point of the array */
/* // and then the size of the array as well as what number we want */
/* // */
/* int binary_search(int array[],int lower, int n, int goal) */
/* { */
/*   // Then define the midpoint as well as the high point to make sure it is the last element */
/*   // */
/*   int mid; */
/*   int high = n-1; */
  


/*   // Making sure the list isn't just one element */
/*   // */
/*   clock_t begin = clock(); */
/*   while(lower <=high){ */
    
/*     mid = (lower + high)/2; */
/*     // If  */
/*     // */
/*     if (goal < array[mid]){ */
/*       high = mid - 1; */
/*     } */
/*     else if(goal > array[mid]){ */
/*       lower = mid + 1; */
/*     } */
/*     else */
/*       return mid; */
      
/*   } */
/*   return -1; */
/* } */


// Function to concatinate numbers, can use it with any amount
// really cool
//




// end of include file
//





