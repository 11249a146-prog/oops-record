                             // Employee Payroll//
Aim:
  //To demonstrate functions defined both inside and outside a class using an employee example.//
Algorithm:
  1. Start the program.
  2. Define a class Employee with members: empID, name, salary.
  3. Define setEmployee() inside the class.
  4. Declare displayEmployee() and define it outside the class.
  5. Create two employee objects.
  6. Call both functions.
  7. Stop the program.
Program:
  #include <iostream>
  using namespace std;
  class Employee {
  public:
   int empID;
   string name;
   float salary;
   void setEmployee(int id, string n, float s) {
   empID = id;
   name = n;
   salary = s;
   }
   void displayEmployee();
  };
  void Employee::displayEmployee() {
   cout << "Employee ID: " << empID
   << ", Name: " << name
   << ", Salary: Rs." << salary << endl;
  }
  int main() {
   Employee e1, e2;
   e1.setEmployee(101, "Ravi", 50000.75);
   e2.setEmployee(102, "Priya", 62000.50);
   e1.displayEmployee();
   e2.displayEmployee();
   return 0;
  }
