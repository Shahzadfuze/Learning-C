// file: 
//

// local include files
//
#include "example.h"

// function: main
//
//  Function: Tic-Tac-toe
// 
//

char** empty_board(int rows, int cols){


  // Using Dynamic memory allocation to the board
  // cause it cooler

  
  // Starting with our rows then inside the for loop
  // allocating the cols inside each row
  //
  char** array = new char*[rows];
  // Also using new instead of malloc becuase we are compiling with c++
  //
  for(int i = 0; i < rows; i++){
    array[i] = new char[cols];
  }


  // Now putting actual things inside the board; in this case just empty space
  //

  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      array[i][j] = ' ';
    }
  }

  return array;
  
}

