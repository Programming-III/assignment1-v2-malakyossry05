#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
Class Instructor{
  private:
  string name;
string department;
int experienceYears;
public:
Instructor(string name,string department,int experienceYears);
Instructor();
~Instructor();

friend ostream operator<<(ostream &out,Instructor i){
 out<<"Instructor"<<endl;
 return out;
}








#endif
