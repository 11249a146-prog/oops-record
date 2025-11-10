              //Employee Salary Calculation//
Aim:
  //To demonstrate constructors with default arguments and member functions in C++.//
Algorithm:
  1. Start the program.
  2. Define class Employee with members: id, name, salary.
  3. Create constructor with default arguments.
  4. Define calcBonus() to calculate 10% bonus.
  5. Display salary and bonus.
  6. Stop the program.
Program:
  #include <iostream>
  using namespace std;
  class Employee {
   int id;
   string name;
   float salary;
  public:
   Employee(int i=0, string n="Unknown", float s=0.0) {
   id=i; name=n; salary=s;
   }
   void calcBonus() {
   float bonus = 0.1 * salary;
   cout<<"ID: "<<id<<", Name: "<<name
   <<", Salary: "<<salary
   <<", Bonus: "<<bonus<<endl;
   }
  };
  int main() {
   Employee e1(101,"Ravi",50000);
   Employee e2(102,"Priya",60000);
   Employee e3; // default
   e1.calcBonus();
   e2.calcBonus();
   e3.calcBonus();
   return 0;
  }
