                                  //Hospital Patient Record//
Aim:
  //To demonstrate defining functions inside and outside a class using patient records.//
Algorithm:
  1. Start the program.
  2. Define a class Patient with members: patientID, name, disease.
  3. Define setPatient() inside the class.
  4. Declare and define showPatient() outside the class.
  5. Create two patient objects.
  6. Assign and display details.
  7. Stop the program.
Program:
  #include <iostream>
  using namespace std;
  class Patient {
  public:
   int patientID;
   string name;
   string disease;
   void setPatient(int id, string n, string d) {
   patientID = id;
   name = n;
   disease = d;
   }
   void showPatient();
  };
  void Patient::showPatient() {
   cout << "Patient ID: " << patientID
   << ", Name: " << name
   << ", Disease: " << disease << endl;
  }
  int main() {
   Patient p1, p2;
   p1.setPatient(301, "Arjun", "Fever");
   p2.setPatient(302, "Meena", "Diabetes");
   p1.showPatient();
   p2.showPatient();
   return 0;
  }
