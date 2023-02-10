#include "Person.h"

class Student : public Person
{
  private:
    int studentID;
  
  public:
    Student();
    Student(string name, int age, int studentID);
    int getStudentID();
    void setStudentID(int studentID);
};

Student::Student() : Person()
{
  studentID = 0;
}

Student::Student(string name, int age, int studentID) : Person(name, age)
{
  this->studentID = studentID;
}

int Student::getStudentID()
{
  return studentID;
}

void Student::setStudentID(int studentID)
{
  this->studentID = studentID;
}