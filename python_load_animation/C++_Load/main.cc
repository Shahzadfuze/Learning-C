// file: 
//

// local include files
//
#include "example.h"

// function: main
//
// Program Function: Making a cool little loading function and using tools from
//                   mutli-threading to have it so I am able to exit out of the
//                   animation anytime without somthing going wrong
// 
//
//
//
int main(int argc, const char** argv) {

  char ascii_art[] = 
  "              / _)\n"
  "     _.----._/ /\n"
  "    /         /\n"
  " __/ (  | (  |\n"
  "/__.-'|_|--|_|\n";

  signal(SIGINT, handle_signal);

  cout << "Press C+c to stop\n";

  printf("%s", ascii_art);
  
  dots_loading("Fuzing");

  cout << "DONE" << endl;



  

 //Return Gracefully
  //
  return 0;
}
