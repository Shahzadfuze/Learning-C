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

  
  if(argc > 2){
    fprintf(stdout, "Please use the correct fomat %s -help\n", argv[0]);
    return 1;
  }

  if(argc > 1 && strcmp(argv[1], "-help") == 0){
    printHelp();
    return 1;
  }

  
  const int rows = 3;
  const int cols = 3;

  Board array(rows, cols);

 
  
  //  Now What I want to do is get inputs from the terminal weather it be q to exit or the number they want the X or O to be in
    
  //  addBoard(array, 1,2,'X');
  //addBoard(array, 1,1,'O');
  //printBoard(array);


  char currentPlayer = 'X';
  char input;
  fprintf(stdout, "Welcome to \n\n------------Tic-Tac-Toe------------\n\n");

  
  
  printBoard(array);



  while(true){
    int placement;
    fprintf(stdout, "Please pick a spot 1-9 or q to exit\n");

    cin >> input;
    
    if(input == 'q'){
      fprintf(stdout, "Bye Bye");
      break;
    }

    
    // Converting the char to an int
    //
    placement = input - '0';

    if(placement < 1 || placement > 9){
      fprintf(stdout, "Please use a correct input\n 1-9\n");
      // Like the complete opposide of break just keeps on going 
      //
      continue;
    }

    int row = (placement - 1) / cols;
    int col = (placement - 1) % cols;


    addBoard(array ,row, col, currentPlayer);
    printBoard(array);
    

    

    
    SWITCH_PLAYER(currentPlayer);
    


  }
  
  



  

  
  
  // printBoard(array);
  




  
  //Return Gracefully
  //
  return 0;
}
