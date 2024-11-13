#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    // Initial student IDs stored in an array
    string students[5] = {
        "24/HK/175778/09516",
        "24/TK/190278/09717",
        "24/PA/191217/09929",
        "23/PPA/2717/01235",
        "22/SPA/4515/03757"
    };

    // Write each student ID to the file
    ofstream students_file("students.txt");
    for (int i = 0; i < 5; i++) {
        students_file << students[i] << endl;
    }
    students_file.close();

    // Open the file for reading
    ifstream input_file("students.txt");
    if (!input_file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;
    while (getline(input_file, line)) {
        cout << "Full ID       : " << line << endl;
        cout << "Academic Year : " << line.substr(0, 2) << endl;

        // Differentiate undergrad and postgrad based on string length
        if (line.size() == 18) {
            cout << "Status        : Under Graduate" << endl;

            // Faculty parsing for undergraduates
            if (line.substr(3, 2) == "HK")
                cout << "Faculty       : Hukum" << endl;
            else if (line.substr(3, 2) == "PA")
                cout << "Faculty       : MIPA" << endl;
            else if (line.substr(3, 2) == "TK")
                cout << "Faculty       : Teknik" << endl;

            cout << "Faculty ID    : " << line.substr(13, 5) << endl;
            cout << "Univ ID       : " << line.substr(6, 6) << endl;
        } else if (line.size() == 17) {
            // Status and faculty parsing for postgraduates and doctoral
            if (line.substr(3, 3) == "SPA") {
                cout << "Status        : Post Graduate" << endl;
                cout << "Faculty       : MIPA" << endl;
            } else if (line.substr(3, 3) == "PPA") {
                cout << "Status        : Doctoral" << endl;
                cout << "Faculty       : MIPA" << endl;
            }

            cout << "Faculty ID    : " << line.substr(12, 5) << endl;
            cout << "Univ ID       : " << line.substr(7, 4) << endl;
        }
        cout << endl;
    }

    input_file.close();
    return 0;
}

