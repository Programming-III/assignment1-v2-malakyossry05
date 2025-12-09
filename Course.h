#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class Course
{
   private:
       string courseCode;
       string courseName;
       int maxStudent;
       Student* students;
       int currentStudents;
   public:
       Course(string coursecode,string course name,int maxStudent,Student* students,int currentStudents);
       course();
    addStudent(const Student& s);
    displayCourseInfo();
    ~course();
friend ostream operator<<(ostream &out,Course &c){
 out<<"Course"<<endl;
 return out;
}
#endif











#endif
