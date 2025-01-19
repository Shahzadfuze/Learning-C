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

  p1.display();

  person p2;
  p2.set_name("Mason");
  person p3("Goose");
  person p4("Gotmilk");
  
  p2.display();

  person* BrackAsians[5];

  BrackAsians[0] = &p1;
  BrackAsians[1] = &p2;
  BrackAsians[2] = &p3;
  BrackAsians[3] = &p4;


  for(int i = 0; i < 5; i++){
    BrackAsians[i]->display();
  }


  
  //Return Gracefully
  //
  return 0;
}
