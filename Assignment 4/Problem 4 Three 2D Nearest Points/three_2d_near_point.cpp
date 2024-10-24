#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

// Distance Formula
double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void qfour(int D[][2], int size, int nearest[][3]) {
    for (int i = 0; i < size; i++) {
        pair<double, int> distArr[10];
        for (int j = 0; j < size; j++) {
            if (i != j) {
                distArr[j] = {distance(D[i][0], D[i][1], D[j][0], D[j][1]), j};
            } 
            else {
                distArr[j] = {1e9, j};
            }
        }
        
        sort(distArr, distArr + size);

        // store the product in an array
        for (int k = 0; k < 3; k++) {
            nearest[i][k] = distArr[k].second;
        }
    }
}

int main() {
    // variables
    int D[10][2] = {{2, 3}, {4, 2}, {5, 1}, {3, 3}, {6, 2}, {2, 8}, {5, 4}, {7, 7}, {8, 4}, {5, 6}};
    int size = 10;
    int nearest[10][3];
    
    // process
    qfour(D, size, nearest);

    // output
    cout << "Q4: Nearest 3 points in a 2D Array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "{" << D[i][0] << ", " << D[i][1] << "} to ";
        for (int j = 0; j < 3; j++) {
            cout << "{" << D[nearest[i][j]][0] << ", " << D[nearest[i][j]][1] << "}";
            if (j < 2) cout << ", ";
        }
        cout << endl;
    }

    return 0;
}
