#include "example.h"



person::person(string name){
  this->name = name;
}

void person::display(){
  fprintf(stdout, "I am a person and my name is %s\n", name.c_str());
}

void person::set_name(string n){
  name = n;
}


