// file: 
//;

// make sure definitions are only made once
//
#ifndef ISIP_EXAMPLE
#define ISIP_EXAMPLE

// system include files
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>




struct ListNode{
  int data;
  struct ListNode *next;
  
};




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


ListNode* reverseList(ListNode* head){
  ListNode* current = head;
  ListNode* prev = NULL;
  ListNode* next;
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


// end of include file
//
#endif
