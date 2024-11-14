#include <iostream>
using namespace std;

class Shape {
    private:
    float lenght, breadth, height;
    
    public:
    Shape(float x, float y, float z) {
        this->lenght = x;
        this->breadth = y;
        this->height = z;
    }
    
    float square() {
        return (lenght*lenght); 
    }
    float triangle() { 
        return (lenght*lenght*0.5); 
    }
    float trapezoid() { 
        return (0.5*(lenght+breadth)*height); 
    }
    float square() { 
        return (lenght*lenght); 
    }
    float square() {
        return (lenght*lenght); 
    }
    float square() { 
        return (lenght*lenght); 
    }
    float square() { 
        return (lenght*lenght); 
    }
    float square() {
        return (lenght*lenght); 
    }
};

int main() {
    int op, lenght, breadth, height;
    
    cout << "Shapes: " << endl;
    cout << "1. Square" << endl;
    cout << "2. Triange" << endl;
    cout << "3. Trapezoid" << endl;
    cout << "4. Circle" << endl;
    cout << "5. Rectangle" << endl;
    cout << "6. Cube" << endl;
    cout << "7. Cuboid" << endl;
    cout << "8. Tube" << endl;
    
    cout << "What shape you want to calculate: ";
    cin >> op;
    
    if (op == 1) {
        cout << "Enter the lenght: ";
        cin >> lenght;
        Shape X(lenght,0,0);
        cout << X.square();
    }
    else if (op == 2) {
        cout << "Enter the lenght: ";
        cin >> lenght;
        cout << "Enter the height: "
        Shape X(lenght,height,0);
        cout << triangle();
    }
    else if (op == 3) {
        cout << trapezoid();
    }
    else if (op == 4) {
        cout << circle();
    }
    else if (op == 5) {
        cout << rectangle();
    }
    else if (op == 6) {
        cout << cube();
    }
    else if (op == 7) {
        cout << cuboid();
    }
    else if (op == 8) {
        cout << tube();
    }
    else
        cout << "Shape not valid";
}
