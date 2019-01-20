#include <algorithm>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main ()
{
  bool invalid = true;
  string password;
  while(invalid) {
    cout << "\nPlease enter your password: ";
    cin >> password;
    if(password.length() < 6) {
        cout << password << " is less than 6 characters\n";
    } 
    if (!count_if(password.begin(), password.end(), [](char ch) { return std::islower(ch); }) == 1) {
        cout << password << " does not contain a lowercase character\n";
    }
    if (!count_if(password.begin(), password.end(), [](char ch) { return std::isupper(ch); }) == 1) {
        cout <<  password << " does not contain an uppercase character\n";
    }
    if (!count_if(password.begin(), password.end(), [](char ch) { return std::isdigit(ch); }) == 1) {
        cout << password << " does not contain a digit\n";
    } 
    // if passes all the test cases then invalid = false
    if(password.length() > 5) {
        if(count_if(password.begin(), password.end(), [](char ch) { return std::islower(ch); }) == 1) {
            if(count_if(password.begin(), password.end(), [](char ch) { return std::isupper(ch); }) == 1) {
                if(count_if(password.begin(), password.end(), [](char ch) { return std::isdigit(ch); }) == 1) {
                    cout << password << " is a valid password\n";
                    invalid = false;
                }
            }
        }
    }
  }
  return 0;
}