                                      //Library Book Details//

Aim:
    //To create a class that represents books and displays their details.//
Algorithm:
    1. Start the program.
    2. Define a class Book with title, author, and price.
    3. Define display() to print details.
    4. In main(), create two objects.
    5. Assign values to each object.
    6. Display using display().
    7. Stop the program.
Program:
    #include <iostream>
    using namespace std;
    class Book {
    public:
     string title;
     string author;
     float price;
     void display() {
     cout << "Title: " << title
     << ", Author: " << author
     << ", Price: Rs." << price << endl;
     }
    };
    int main() {
     Book b1, b2;
     b1.title = "C++ Programming"; b1.author = "Bjarne Stroustrup"; b1.price =
    750.50;
     b2.title = "Data Structures"; b2.author = "Mark Allen Weiss"; b2.price =
    600.75;
     b1.display();
     b2.display();
     return 0;
    }
