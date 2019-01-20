#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

struct Student {
    string lastname;
    string firstname;
    float exams[MAX_EXAMS];
    float avg;
    char letterGrade;
};

const int MAX_STU = 5;
const int MAX_EXAMS = 3;
ofstream outfile;
ifstream inFile;
string path;

Student classroom[MAX_STU];

void menu();
void display();
void errorWithPathOpening();
void printStudent(Student kid);


int main() {
    menu();


    return 0;
}

void printStudent(Student kid) {
    cout << "Name: " << kid.firstname[0] << ". " << kid.lastname << endl;
    cout << "Grade: " << kid.letterGrade << endl;
    cout << "Exam Avg: " << kid.avg << endl;

}

void display() {
    string choice;
    cout << "*********** Student Portal ************" << endl;
    cout << "The world's first student data management software." << endl;
    cout << "Here you can load data on students and manage your classroom." << endl;
    cout << "Student Data Path Directory: ";
    getline(cin, path);
    cout << "Are you sure this is the correct file" << endl;
    cout << "[y] = yes" << endl;
    cout << "> ";
    cin >> choice;
    while(choice != "y") {
        cout << "Student Data Path Directory: ";
        cin >> path;
        cout << "***Reading File***" << endl;
        inFile.open(path);
        errorWithPathOpening();
    }  
    cout << "Now that the data is loaded you can\nmove on to the menu" << endl;
}

void updateStudents(){
    for(int i = 0; i < sizeof(inFile); i++){

    }
}

void errorWithPathOpening(){
    if (!inFile) {
        cerr << "Unable to open file";
        exit(1);   // call system to stop
    }
}


void menu() {
    cout << "";
}

