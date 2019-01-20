#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

// variables need for later in code
const int class_size = 5;
const int MAX_EXAMS = 3;
ofstream outfile;
ofstream infile;

//data object to represent a student
struct Student {
 string lastname;
 float exams[MAX_EXAMS];
 float avg;
 char letterGrade;
};
//load initial menu
void menu();
// look for user input like searchbar
void readKeyboard();
// read studet data 
void readStuData();
// get mean of the exam scores arr
void calcAvg();
// display that avg
void displayAvg();
// convert grade to its letter representation
char lettergrade(float avg);
// toString for student object
void writeStudata(ofstream& outfile, Student stu[]);
int main() {
    //array to hold all students
 Student classroom[class_size];
 int option;
 menu();
 switch (option) {
 case 1:
 //read data from input
  readKeyboard();
  break;
 case 2:
 //read data from file, by user
  break;
 case 3:
 // calculate and display student avg
  break;
 case 4:
 // calculate and display class average
  break;
 // write student data to file
 case 5:
  break;
 }
 system("pause");
}
void menu() {
    int option;
    cout << "Please select a option:" << endl;
    cout << "1) Read data from the keyboard" << endl;
    cout << "2) read student data from a file, specified by the user" << endl;
    cout << "3) calculate and display student averages and lettergrades" << endl;
    cout << "4) calculate and display class averages" << endl;
    cout << "5)  write student data and results to a file, specified by user" << endl;
    cout << "6) exit" << endl;
    cout << "enter:";
    cin >> option;
}

void readKeyboard() {
 
}


void readStuData() {

}

void calcAvg() {

}

void displayAvg() {

}

char lettergrade(float avg) {


}