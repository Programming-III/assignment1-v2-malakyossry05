#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class Person{

private:
    string name;
    int id;
public:
   void display();
    l ~Person();
Person roleinfo(string major,int experienceyears,string department ,int yearlevel):public Student,Instructor{
 Student.major=major;
 Instructor.experienceyears=experienceyears;
 Student.yearlevel=yearlevel;
 Instructor.department=department;
 cout<<"student,major:"<<major;<<endl;
 cout<<"Instructor,department:"<<department<<endl;
 cout<<"Student,yearlevel:"<<yearlevel<<endl;
 cout<<"Instructor,experienceyears:"<<experienceyears<<endl;
} 
};
#endif

   














