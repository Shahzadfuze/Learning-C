// file: 
//

// local include files
//
#include "example.h"

// function: main
//
// Program Function: 
// 
//

int main(int argc, const char** argv) {

  person p1("Tyler");
  p1.display();

  p1.set_name("Fize");

  

  person p2;
  p2.set_name("Mason");
  person p3("Goose");
  person p4("Gotmilk");
  person p5("HTTW");
  

  person* BrackAsians[5];

  BrackAsians[0] = &p1;
  BrackAsians[1] = &p2;
  BrackAsians[2] = &p3;
  BrackAsians[3] = &p4;
  BrackAsians[4] = &p5;

  for(int i = 0; i < 5; i++){
    BrackAsians[i]->display();
  }


  
  //Return Gracefully
  //
  return 0;
}
