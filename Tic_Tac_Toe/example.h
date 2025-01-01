// file: 
//

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
#include <iostream>




using namespace std;

struct Board{
  char** data;
  int rows;
  int cols;


  Board(int r, int c);


  ~Board();

};

void printBoard(Board& array);
void addBoard(Board& array, int row, int col, char value);



// end of include file
//
#endif
