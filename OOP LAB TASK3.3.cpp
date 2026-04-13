#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle() {
        length = 1.0;
        width = 1.0;
    }

    // Parameterized constructor (length, width)
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // Single-parameter constructor (square)
    Rectangle(float side) {
        length = side;
        width = side;
    }

    // Method to calculate area
    float area() {
        return length * width;
    }

    // Display method
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    // Using default constructor
    Rectangle r1;

    // Using parameterized constructor
    Rectangle r2(5.0, 3.0);

    // Using single-parameter constructor (square)
    Rectangle r3(4.0);

    cout << "Rectangle 1 (Default):" << endl;
    r1.display();

    cout << endl;

    cout << "Rectangle 2 (Length & Width):" << endl;
    r2.display();

    cout << endl;

    cout << "Rectangle 3 (Square):" << endl;
    r3.display();

    return 0;
}
