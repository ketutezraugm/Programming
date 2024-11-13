#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    // variables
    string students[6] = {  
        "Agus 24/278763/PA/15637",
        "Santi 24/25763/SPA/6765",
        "Rida 24/1564/DPA/2873",
        "Rio 24/287678/PA/17876",
        "Farhan 24/277874/PA/16762",
        "Merry 24/24533/SPA/7676"
    };
    int ug_count = 0;
    string rida_data;
    string facultyid_24536_data;
    bool found_rida = false;
    bool found_faculty_id = false;
    string line;

    // input the original student data to the file
    ofstream students_file("students.txt");
    for (int i = 0; i < 6; i++) 
        students_file << students[i] << endl;
    students_file.close();

    // output the original student data
    cout << "Original Student Data:" << endl;
    for (int i = 0; i < 6; i++) 
        cout << students[i] << endl;
    cout << endl;

    // read the file
    ifstream input_file("students.txt");

    // add the new student to the data file
    ofstream students_file_append("students.txt", ios::app);
    string new_student = "Agung 24/8989/DPA/4352";
    students_file_append << new_student << endl;
    students_file_append.close();

    cout << "New student data added: " << new_student << endl << endl;;

    // output updated file
    cout << "Updated Student Data:";
    
    // read the updated file
    ifstream updated_file("students.txt");
    while (getline(updated_file, line)) {
        // full id
        cout << "\n" << line;
        
        // seperate name & id
        int space = line.find(' ');

        // name
        cout << "\nName          : " << line.substr(0, space) << endl;

        // academic year
        cout << "Academic Year : " << line.substr(space + 1, 2) << endl;
        
        // id sections seperations
        int slash1 = line.find('/', space + 1);
        int slash2 = line.find('/', slash1 + 1);
        int slash3 = line.find('/', slash2 + 1);
        
        // univ id
        cout << "Univ ID       : " << line.substr(slash1 + 1, slash2 - slash1 - 1) << endl;

        // status
        string faculty_code = line.substr(slash2 + 1, slash3 - slash2 - 1);
        if (faculty_code == "PA") 
            cout << "Status        : Undergraduate" << endl;
        else if (faculty_code == "SPA") 
            cout << "Status        : Postgraduate" << endl;
        else if (faculty_code == "DPA") 
            cout << "Status        : Doctoral" << endl;
        
        // faculty code
        cout << "Faculty       : MIPA" << endl;
        
        // faculty id
        cout << "Faculty ID    : " << line.substr(slash3 + 1) << endl;
        
        cout << endl;
    }
    
    // answer the problems
    while (getline(input_file, line)) {
        // seperate name & id
        int space = line.find(' ');
        string name = line.substr(0, space);

        // check if name is "Rida"
        if (name == "Rida") {
            rida_data = line;
            found_rida = true;
        }

        // id sections seperations
        int slash1 = line.find('/', space + 1);
        int slash2 = line.find('/', slash1 + 1);
        int slash3 = line.find('/', slash2 + 1);
        string faculty_id = line.substr(slash3 + 1);

        // check if faculty id is "24536"
        if (faculty_id == "24536") {
            facultyid_24536_data = line;
            found_faculty_id = true;
        }

        // count the undergraduate students
        string faculty_code = line.substr(slash2 + 1, slash3 - slash2 - 1);
        if (faculty_code == "PA") {
            ug_count++;
        }
    }

    input_file.close();

    // output answers to the problems
    cout << "Answers to the Problems:" << endl;
    // finding "Rida"
    if (found_rida) 
        cout << "Found student with name 'Rida': " << rida_data << endl;
    else 
        cout << "No student found with name 'Rida'." << endl;

    // finding "24536"
    if (found_faculty_id) 
        cout << "Found student with faculty ID '24536': " << facultyid_24536_data << endl;
    else 
        cout << "No student found with faculty ID '24536'." << endl;

    // counting the undergraduate students
    cout << "Total number of undergraduate students: " << ug_count << endl << endl;

    updated_file.close();
    return 0;
}
