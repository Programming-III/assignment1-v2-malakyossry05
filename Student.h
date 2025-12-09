#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
private:
    int yearlevel;
    string major;
     void display();
public:
    Student(string department,int experienceYears);
    Student();
        void display();
        ~Student();
friend ostream  operator<<(ostream &out,Student &s){
   out<<"Student"<<endl;
   return out;
}






#endif
