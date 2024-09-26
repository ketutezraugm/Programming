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
    int i;
    int input;
    
    cout << "do you want to enter a new student? (yes=1, no=0) ";
    cin >> input;
    if (input == 1) {
        for (i=0; i<10; i++) {
            cout << "Enter name: ";
            cin >> mahasiswa[i].name;
            cout << "Enter nim: ";
            cin >> mahasiswa[i].nim;
            cout << "Enter gender: ";
            cin >> mahasiswa[i].gender;
        }
    }
    else
        return 0;
    }
    
    cout << mahasiswa[0].name << " with nim " << mahasiswa[0].nim << " wih gender " << mahasiswa[0].gender << endl;
    
}
