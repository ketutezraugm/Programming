#include <iostream>
#include <cmath> 
#include <algorithm>
using namespace std;

void qtwo(int A[], int n, int nearest[][3]) {
    for (int i = 0; i < n; i++) {
        int near[3] = {1000, 1000, 1000};
            
        for (int j = 0; j < n; j++) {
            if (i != j) {
                int distance = abs(A[i] - A[j]);
                if (distance < abs(A[i] - near[0])) {
                    near[2] = near[1];
                    near[1] = near[0];
                    near[0] = A[j];
                }
                else if (distance < abs(A[i] - near[1])) {
                    near[2] = near[1];
                    near[1] = A[j];
                } 
                else if (distance < abs(A[i] - near[2])) {
                    near[2] = A[j];
                }
            }
        }

        // storing the product in an array
        for (int k = 0; k < 3; k++) {
            nearest[i][k] = near[k];
        }
    }
}

int main() {
    // variables
    int A[] = {5, 12, 7, 9, 6, 10, 4, 2};
    int n = sizeof(A) / sizeof(A[0]);
    int nearest[8][3]; 

    // process
    qtwo(A, n, nearest);

    // output
    cout << "Q2 : Nearest 3 points in a 1D Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "{";
        for (int j = 0; j < 3; j++) {
            cout << nearest[i][j];
            if (j < 2) cout << ", ";
        }
        cout << "}" << endl;
    }

    return 0;
}
