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
/*
  
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
*/


// So I was originally using regular functions without a struct (class) but I realize
// a struct would be a lot easier becuase I have a lot of variables that are appart of
// the same thing but I would have to call them each seperatly
// Plus it gives me practise with structs 
//

// This will handle our defining and freeing of memoery
//


  Board::Board(int r, int c) : rows(r), cols(c){
    data = new char*[rows];
    for(int i = 0; i < rows; i++){
      data[i] = new char [cols];

    }


  // Creating empty 3x3 array;
  //
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols;  j++){
	  data[i][j] = ' ';

    }
  }
  }

  
  // Destructor basiclly freeing all the memoery 
  //
  Board::~Board(){
    for(int i = 0; i < rows; i++){
      delete[] data[i];
    }
    delete data;
  }






// Here we are using a reference to the struct which allows us to load it into
// memoery without actually copying all the data over; aka more efficent;
//

void printBoard(Board& array){
  for(int i = 0; i < array.rows; i++){
    for(int j = 0; j < array.cols; j++){
      fprintf(stdout, "%c", array.data[i][j]);
    }
    fprintf(stdout, "\n");
  }

}
