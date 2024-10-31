#include <iostream>
#include <string>
using namespace std;

int main() {
    string students[5] = {
        ("24/HK/175778/09516"),
        ("24/TK/190278/09717"),
        ("24/PA/191217/09929"),
        ("23/PPA/2717/01235"),
        ("22/SPA/4515/03757")
    };

    for (int i=0; i<5; i++) {
        
        // academic year
        cout << "Academic Year: " << students[i].substr(0,2) << endl;
        
        // divide under grad & post grad
        // since grad & post grad have different position
        if (students[i].size() == 18) {
            
            // status
            cout << "Status: Under Graduate" << endl;
            
            // faculty
            if (students[i].substr(3,2) == "HK")
                cout << "Faculty: Hukum" << endl;
            else if (students[i].substr(3,2) == "PA")
                cout << "Faculty: MIPA" << endl;
            else if (students[i].substr(3,2) == "TK")
                cout << "Faculty: Teknik" << endl;
                
            // faculty id
            cout << "Faculty ID: " << students[i].substr(13,5) << endl;
            
            // univ id
            cout << "Univ ID: " << students[i].substr(6,6) << endl;
        }

        else if (students[i].size() == 17) {
            
            // status & faculty
            if (students[i].substr(3,3) == "SPA") {
                cout << "Status: Post Graduate" << endl;
                cout << "Faculty: MIPA" << endl;
            }
            else if (students[i].substr(3,3) == "PPA") {
                cout << "Status: Doctoral" << endl;
                cout << "Faculty: MIPA" << endl;
            }
            
            // faculty id
            cout << "Faculty ID: " << students[i].substr(12,5) << endl;
            
            // univ id
            cout << "Univ ID: " << students[i].substr(7,4) << endl;
        }
        cout << endl;
    }
    
    return 0;
}
