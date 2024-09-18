#include <iostream>
using namespace std;

int main() {
    // variables
    int A[3][3];
    int B[3][3];
    int B_reset[3][3];

    // inputs matrix A
    cout << "Matrix A (i*j) :"  << endl;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            A[i][j] = i*j;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // inputs matrix B
    cout << "\nMatrix B (i+j)" << endl;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            B[i][j] = i+j;
            B_reset[i][j] = i+j;
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    // B = A + B
    cout << "\nB = A + B" << endl;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            B[i][j] += A[i][j];
            cout << B[i][j] << " ";
            B[i][j] = B_reset[i][j];
        }
        cout << endl;
    }

    // A = B - A
    cout << "\nA = B - A" << endl;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            A[i][j] = B[i][j] - A[i][j];
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
