#include "Person.h"

int main()
{
  Person person1("Juna", 19);
  cout << "Person 1: " << person1.getName() << " is " << person1.getAge() << " years old." << endl;
  
  cin.get();
  return 0;
}