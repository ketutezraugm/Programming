#include <iostream>
using namespace std;

class Shape {
    // variables
    private:
    float length, breadth, height;
    
    // constuctor
    public:
    Shape(float x, float y, float z) {
        this->length = x;
        this->breadth = y;
        this->height = z;
    }
    
    // methods
    float square() {
        return (length*length); 
    }
    float triangle() { 
        return (length*height*0.5); 
    }
    float trapezoid() { 
        return (0.5*(length+breadth)*height); 
    }
    float circle() { 
        return ((3.14)*length*length); 
    }
    float rectangle() {
        return (length*breadth); 
    }
    float cube() { 
        return (length*length*length); 
    }
    float cuboid() { 
        return (length*breadth*height); 
    }
    float tube() {
        return ((3.14)*length*length*height); 
    }
};

int main() {
    // variables
    int op, reset;
    float length, breadth, height;
    
    // program info
    cout << "Area of Shape Calculator" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Shapes: " << endl;
    cout << "1. Square" << endl;
    cout << "2. Triange" << endl;
    cout << "3. Trapezoid" << endl;
    cout << "4. Circle" << endl;
    cout << "5. Rectangle" << endl;
    cout << "6. Cube" << endl;
    cout << "7. Cuboid" << endl;
    cout << "8. Tube" << endl;
        
    while (true) {
        cout << "---------------------------------------" << endl;
        // shape input
        cout << "What area shape you want to calculate (1-8): ";
        cin >> op;
        
        // square
        if (op == 1) {
            cout << "Enter the length: ";
            cin >> length;
            Shape X(length,0,0);
            cout << "Area of square: " << endl;
            cout << "Area = length x length" << endl;
            cout << "     = " << length << " x " << length << endl;
            cout << "     = " << X.square();
        }
        // triangle
        else if (op == 2) {
            cout << "Enter the length: ";
            cin >> length;
            cout << "Enter the height: ";
            cin >> height;
            Shape X(length,0,height);
            cout << "Area of triangle: " << endl;
            cout << "Area = 1/2 x length x height" << endl;
            cout << "     = 1/2 x " << length << " x " << height << endl;
            cout << "     = " << X.triangle();
        }
        // trapezoid
        else if (op == 3) {
            cout << "Enter the long base length: ";
            cin >> length;
            cout << "Enter the short base length: ";
            cin >> breadth;
            cout << "Enter the height: ";
            cin >> height;
            Shape X(length,breadth,height);
            cout << "Area of trapezoid: " << endl;
            cout << "Area = 1/2 x (long base + short base) x height" << endl;
            cout << "     = 1/2 x (" << length << " + " << breadth << ") x " << height << endl;
            cout << "     = " << X.trapezoid();
        }
        // circle
        else if (op == 4) {
            cout << "Enter the radius: ";
            cin >> length;
            Shape X(length,0,0);
            cout << "Area of circle: " << endl;
            cout << "Area = π x radius x radius" << endl;
            cout << "     = π x " << length << " x " << length << endl;
            cout << "     = " << X.circle();
        }
        // rectangle
        else if (op == 5) {
            cout << "Enter the length: ";
            cin >> length;
            cout << "Enter the breadth: ";
            cin >> breadth;
            Shape X(length,breadth,0);
            cout << "Area of rectangle: " << endl;
            cout << "Area = length x breadth" << endl;
            cout << "     = " << length << " x " << breadth << endl;
            cout << "     = " << X.rectangle();
        }
        // cube
        else if (op == 6) {
            cout << "Enter the length: ";
            cin >> length;
            Shape X(length,0,0);
            cout << "Area of cube: " << endl;
            cout << "Area = length x length x length" << endl;
            cout << "     = " << length << " x " << length << " x " << length << endl;
            cout << "     = " << X.cube();
        }
        // cuboid
        else if (op == 7) {
            cout << "Enter the length: ";
            cin >> length;
            cout << "Enter the breadth: ";
            cin >> breadth;
            cout << "Enter the height: ";
            cin >> height;
            Shape X(length,breadth,height);
            cout << "Area of cuboid: " << endl;
            cout << "Area = length x breadth x height" << endl;
            cout << "     = " << length << " x " << breadth << " x " << height << endl;
            cout << "     = " << X.cuboid();
        }
        // tube
        else if (op == 8) {
            cout << "Enter the radius: ";
            cin >> length;
            cout << "Enter the height: ";
            cin >> height;
            Shape X(length,0,height);
            cout << "Area of tube: " << endl;
            cout << "Area = π x radius x radius x height" << endl;
            cout << "     = π x " << length << " x " << length << " x " << height << endl;
            cout << "     = " << X.tube();
        }
        // else (1-8)
        else {
            cout << "Shape not valid!" << endl;
            continue;
        }
        
        // reset
        cout << "\nDo you want to continue (1/0): ";
        cin >> reset;
        if (reset == 1) {
            continue;
        }
        else
            return 0;
    }
}
