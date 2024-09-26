#include <iostream>
#include <string>
using namespace std;

struct data {
    string name;
    int nim;
    char gender;
    int *p;
};

int main() {
    struct data mahasiswa[10];
    int i,j;
    int input, choice;
    
    cout << "do you want to enter a new student? (yes=1, no=0) ";
    cin >> input;
    if (input == 1) {
        for (i=0; i<100; i++) {
            cout << "Enter name: ";
            cin >> mahasiswa[i].name;
            cout << "Enter nim: ";
            cin >> mahasiswa[i].nim;
            cout << "Enter gender: ";
            cin >> mahasiswa[i].gender;
            
            cout << "do you want to continue? (yes=1, no=0) ";
            cin >> choice;
            if (choice == 1)
                continue;
            else {
                j=i;
                i=101;
            }
        }
    }
    
    for (i=0; i<=j; i++)
        cout << mahasiswa[i].name << " with nim " << mahasiswa[i].nim << " wih gender " << mahasiswa[i].gender << endl;
    
}
