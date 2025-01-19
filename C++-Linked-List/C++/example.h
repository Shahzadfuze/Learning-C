// file: 
//k


#ifndef MYLIB_H
#define MYLIB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <iostream>

using namespace std;



class person{

  // This allows for variables to be basiclly private
  // but still be accessable by inherited classes
  //
protected:
  string name;

public:
  // A constructor for the class 
  //
  person(string n = "");
  void display();
  void set_name(string n);
  void displayAsians();
  
};

#endif
