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
    // variables
    struct data mahasiswa[10];
    int i=0,j;
    int m=0,f=0;
    string input, choice;
    
    cout << "do you want to enter a new student? (y/n) ";
    cin >> input;
    
    if (input == "y") {
        while (true) {
            // input
            cout << "Enter name: ";
            cin >> mahasiswa[i].name;
            cout << "Enter nim: ";
            cin >> mahasiswa[i].nim;
            cout << "Enter gender: (m/f) ";
            cin >> mahasiswa[i].gender;

            // genders counter
            if (mahasiswa[i].gender == 'm')
                m++;
            else if (mahasiswa[i].gender == 'f')
                f++;
            i++;
            
            // restart
            cout << "do you want to input again? (y/n) ";
            cin >> choice;
            if (choice == "y")
                continue;
            else {
                j=i;
                break;
            }
        }
    }
    
    else
        return 0;
        
    cout << endl;
    
    // output data mahasiswa
    for (i=0; i<j; i++)
        cout << mahasiswa[i].name << " with nim " << mahasiswa[i].nim << " wih gender " << mahasiswa[i].gender << endl;
    
    // output genders
    cout << "\nNumber of male students: " << m << endl;
    cout << "Number of female students: " << f << endl;
    
    return 0;
}
