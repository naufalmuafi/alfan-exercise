#include "Person.h"

class Teacher : public Person
{
  private:
    int salary;
  
  public:
    Teacher();
    Teacher(string name, int age, int salary);
    int getSalary();
    void setSalary(int salary);    
};

Teacher::Teacher() : Person()
{
  salary = 0;
}

Teacher::Teacher(string name, int age, int salary)
{
  this->salary = salary;
}

int Teacher::getSalary()
{
  return salary;
}

void Teacher::setSalary(int salary)
{
  this->salary = salary;
}
