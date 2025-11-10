                     //University Management System//
Aim:
  //To demonstrate constructors, destructors, and nested objects in C++.//
Algorithm:
  1. Start the program.
  2. Define class Department with data members and constructor.
  3. Define class University that contains a Department object.
  4. Initialize data using constructors.
  5. Display data.
  6. Use destructor to indicate object destruction.
  7. Stop the program.
Program:
  #include <iostream>
  using namespace std;
  class Department {
  public:
   string deptName;
   Department(string d) {
   deptName = d;
   cout<<"Department "<<deptName<<" created."<<endl;
   }
   ~Department() {
   cout<<"Department "<<deptName<<" destroyed."<<endl;
   }
  };
  class University {
   string uniName;
   Department dept;
  public:
   University(string u, string d) : uniName(u), dept(d) {
   cout<<"University "<<uniName<<" initialized."<<endl;
   }
   void display() {
   cout<<"University: "<<uniName<<", Department: "<<dept.deptName<<endl;
   }
   ~University() {
   cout<<"University "<<uniName<<" closed."<<endl;
   }
  };
  int main() {
   University u1("SCSVMV University","Computer Science");
   u1.display();
   return 0;
  }
