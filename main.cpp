#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person::Person(string name ,int id){
    this->name=name;
    this->id=id;
}
Person::Person(string name ,int id){
    name="alice";
    id=0;
Person::void display(){
cout<<"name:"<<name<<endl;
cout<<"id"<<id<<endl;
   


Person::~Person()
{
    delete();
     
   
}








// ==================== Student Class Implementation ====================

Person:Student(string name ,int id){
    this->name=name;
    this->id=id;
    
}
Student::Student(string department,int experienceYears){
    this->department=department;
    this ->experienceYears=experienceYears;
    this->yearlevel=yearlevel;
    this->major=major;
}
Student::Student(){
    department="Computer Science";
    experienceYears=5;
    yearlevel=2;
    major="Informatics";
}
Student::void display(){
cout<<'department"<<department<<endl;
cout<<"Experience"<<experienceYears<<"years"<<endl;
cout<<"Year:"<<yearlevel<<endl;
cout<<"Major:"<<major<<endl

 Student::~Student() {
delete();
    





// ==================== Instructor Class Implementation ====================
Instructor::Instructor(string name,string department,int experienceYears){
this->name=name;
this->department=department;
this->experienceYears=experienceYears;

Instructor::Instructor(){
name="Dr.lina khaled";
experienceYears=5;
department=Computer Science;

}
Instructor::void display(){
cout<<"Name"<<name<<endl;
cout<<"Department"<<department<<endl;
cout<<"Experience"<<experienceYears<<endl;

}
Instructor::~Instructor(){
delete():
    }

// ==================== Course Class Implementation ====================
Course::Course(string courseCode,string courseName,int maxStudent,Student*students,int currentStudents){
    this->courseCode=courseCode;
    this->courseName=courseName;
    this->maxStudent=maxStudent;
    Student* student=nullptr;
    this->currentStudent=currentStudents;
}
Course::Course(){
    coursecode="CS-101";
    coursename="Introduction to programming";
    maxStudents=3;
    currentStudents=2;
}
Course::addStudent(const Student& s){
    Course::addStudent(const Student& s){
    Students=student[Students+1];
    for(int i=0;i<student;i++){
        Students[i]=student[i];
        maxStudent++;
    }
        Course::void displayCourseInfo(){
        cout<<"Course:"<<coursecode<<"-"<<coursename<<endl;
        cout<<"MaxStudents:"<<maxStudents<<endl;
        

}

   

Course::~Course()
{
  delete Student[]students
}







// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
