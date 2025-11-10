                                     // Car Showroom//

Aim:
    //To develop a class Car that stores and displays details of cars.//
Algorithm:
    1. Start the program.
    2. Define a class Car with model, company, and price.
    3. Define a function display() to print details.
    4. In main(), create three objects.
    5. Assign values to data members.
    6. Display details using display().
    7. Stop the program.
Program:
    #include <iostream>
    using namespace std;
    class Car {
    public:
     string model;
     string company;
     float price;
     void display() {
     cout << "Company: " << company
     << ", Model: " << model
     << ", Price: Rs." << price << endl;
     }
    };
    int main() {
     Car c1, c2, c3;
     c1.company = "Toyota"; c1.model = "Innova"; c1.price = 2000000;
     c2.company = "Honda"; c2.model = "City"; c2.price = 1200000;
     c3.company = "Hyundai";c3.model = "i20"; c3.price = 800000;
     c1.display();
     c2.display();
     c3.display();
     return 0;
    }
