// file: 
//

// local include files
//
#include "example.h"

// function: main
//
// Program Function: Tic Tac Toe
//
//





int main(int argc, const char** argv) {

  // char board[3][3] = { {' ', ' ', ' '},
  // 		       {' ', ' ', ' '},
  // 		       {' ', ' ', ' '}
  // };


  // // Printing out the board
  // //
  // for(int i =0; i < 3; i++){
  //   for(int j = 0; j < 3; j++){
  //     fprintf(stdout, "%c", board[i][j]);
  //   }
  //   fprintf(stdout, "\n");
  // }

  

  int rows = 3;
  int cols = 3;

  Board array(rows, cols);

  printBoard(array);

  //Return Gracefully
  //
  return 0;
}
