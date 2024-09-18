#include <iostream>
#include <string>
using namespace std;

int main() {
    // variables
    int a,b,c;
    string op;
    
    while (true) {
        // inputs
        cout << "Enter the first number: ";
        cin >> a;
        cout << "Enter the second number: ";
        cin >> b;
        cout << "What operation do you want to use: " << endl;
        cout << "(+, -, /, *, %) ";
        cin >> op;
        
        // operations
        if (op == "+") {
            cout << a << " + " << b;
            c = a+b;
        }
        else if (op == "-") {
            cout << a << " - " << b;
            c = a-b;
        }
        else if (op == "/") {
            cout << a << " / " << b;
            c = a/b;
        }
        else if (op == "*") {
            cout << a << " * " << b;
            c = a*b;
        }
        else if (op == "%") {
            cout << a << " % " << b;
            c = a%b;
        }
        
        // output
        cout << "\nThe answer is: " << c << endl;
    }
    return 0;
}
