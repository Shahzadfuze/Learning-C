// file: 
//k


#ifndef MYLIB_H
#define MYLIB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>



// Linked List Stuff
//

struct ListNode{
  int data;
  struct ListNode *next;
  
};

struct ListNode* createNode(int data);
struct ListNode* reverseList(struct ListNode* head);
void printList(struct ListNode* head);
void freeList(struct ListNode* head);



// Binary Search stuff
//
int binary_search(int array[],int lower, int n, int goal);
// Function to concatinate numbers, can use it with any amount
// really cool
//
unsigned concatenate(unsigned x, unsigned y, unsigned z);
// end of include file
//

#endif
