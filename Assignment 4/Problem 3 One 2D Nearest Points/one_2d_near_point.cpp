#include <iostream>
#include <cmath>
using namespace std;

// The distance formula
double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int qthree(int D[][2], int size, int index) {
    int nearest = -1;
    double minDist = 1e9;
    
    for (int i = 0; i < size; i++) {
        if (i != index) { 
            double dist = distance(D[index][0], D[index][1], D[i][0], D[i][1]);
            if (dist < minDist) {
                minDist = dist;
                nearest = i;
            }
        }
    }
    
    return nearest;
}

int main() {
    // variables
    int D[10][2] = {{2,3}, {4,2}, {5,1}, {3,3}, 
    {6,2}, {2,8}, {5,4}, {7,7}, {8,4}, {5,6}};
    int size = 10;
    
    // output
    cout << "Q3 : Nearest point in a 2D Array: " << endl;
    for (int i = 0; i < size; i++) {
        int nearest = qthree(D, size, i);
        cout << "{" << D[i][0] << ", " << D[i][1] << "} to {" 
             << D[nearest][0] << ", " << D[nearest][1] << "}" << endl;
    }

    return 0;
}
