#include <iostream>
#include <cmath>
using namespace std;

int qone(int value, int A[], int size) {
    int nearest = A[0];
    int minDiff = abs(value - A[0]);

    for (int i = 1; i < size; i++) {
        if (A[i] != value) { 
            int diff = abs(value - A[i]);
            if (diff < minDiff) {
                minDiff = diff;
                nearest = A[i];
            }
        }
    }

    return nearest;
}

int main() {
    // variables
    int A[] = {5, 12, 7, 9, 6, 10, 4, 2};
    int size = sizeof(A) / sizeof(A[0]);
    
    // output
    cout << "Q1 : Nearest point in a 1D Array: {";
    for (int i = 0; i < size; i++) {
        int near = qone(A[i], A, size);
        cout << near;
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;

    return 0;
}
