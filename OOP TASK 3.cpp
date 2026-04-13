#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;

public:
    // Default Constructor
    Employee() {
        id = 0;
        name = "Maryam";
        salary = 245,000.;
    }

    // Display method
    void displayDetails() {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;  // object using default constructor
    emp.displayDetails();

    return 0;
}
