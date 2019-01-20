#include <iostream>
#include <string>
#include <vector>
using namespace std;

//speaker object 
struct Speaker {
  string name;
  string telephone;
  string topic;
  double fee;
};

Speaker speakers[10];
int now = 0;
void menu();
void printSpeaker(Speaker speaker);
bool invalidFee(double fee);
void updateSpeaker();
void queryTopic();
void addSpeaker();

int main() {
    menu();
  return 0;
}

void addSpeaker(){
    cout << "[" << now << "/10]" << endl;
    cout << "Enter Speaker Name: ";
    cin.ignore(); 
    getline(cin, speakers[now].name);
    cout << "Enter Telephone Number: ";
    getline(cin, speakers[now].telephone);
    cout << "Enter Topic: ";
    getline(cin, speakers[now].topic);
    cout << "Enter Fee: ";
    cin >> speakers[now].fee;
    while(invalidFee(speakers[now].fee)) {
        cout << "[ ERROR ]: Negeative Fees are not allowed\nEnter Fee: ";
        cin >> speakers[now].fee;
    }
    printSpeaker(speakers[now]);
    now++;
    menu();
}

void printSpeaker(Speaker speaker) {
    cout << "\nName: " << speaker.name << endl;
    cout << "Telephone:  " << speaker.telephone << endl;
    cout << "Topic: " << speaker.topic << endl;
    cout << "Fee: " << speaker.fee << endl;
}

void queryTopic() {
    int found = 0;
    Speaker Match;
    string query;
    cout << "Enter topic: ";
    cin >> query;
    for(int n = 0; n < sizeof(speakers); n++){
        if(speakers[n].topic.find(query) != std::string::npos) {
            Match = speakers[n];
            found = 1;
        }
        if(found == 1)
            printSpeaker(Match);
        if(found == 0)
            cout << "No Speaker is currently doing that topic";
    }
    menu();
}

void updateSpeaker(){
    int index;
    cout << "Which speaker would you like to update";
    cout << "\n0 - 9" << endl;
    cin >> index;
    cout << "Current Speaker details" << endl;
    printSpeaker(speakers[index]);
    cout << "\nEnter Speaker Name: ";
    cin.ignore();
    getline(cin,speakers[index].name);
    cout << "Enter Telephone Number: ";
    cin.ignore();
    getline(cin,speakers[index].telephone);
    cout << "Enter Topic: ";
    getline(cin,speakers[index].topic);
    cout << "Enter Updated Fee: ";
    cin >> speakers[index].fee;
    while(invalidFee(speakers[index].fee)) {
        cout << "Negeative Fees are not allowed\nEnter Updated Fee: ";
        cin >> speakers[index].fee;
    }
    cout << "\nUpdate Speaker" << endl;
    printSpeaker(speakers[index]);
    menu();
}

bool invalidFee(double fee){
    return (fee < 0.0);
}

void menu(){
    int choice;
    cout << "\n[1] Add Speaker" << endl;
    cout << "[2] Update Speaker" << endl;  
    cout << "[3] Query topics" << endl;
    cout << "[4] List All Speakers" << endl;
    cout << "Choose Option: ";
    cin >> choice;
    switch(choice){
        case 1:
            addSpeaker();
            break;
        case 2:
            updateSpeaker();
            break;
        case 3:
            queryTopic();
            break;
        case 4:
            cout << "\nList of all Speakers" << endl;
                for(int i = 0; i < sizeof(speakers); i++)
                    printSpeaker(speakers[i]);
    }
}