/*
Description:
This program asks the user to choose a mode and enter their name. It uses a function to display either a 
welcome or goodbye message depending on the selected mode. If an invalid mode is entered, the program 
repeatedly asks the user to try again.

Skills Used
- User input and output (cin and cout)
- Variables
- Functions
- Function parameters
- if and else if statements
- while loops
- Input validation
- Basic program flow control
*/

#include <iostream>
using namespace std;

void bot(int mode, string name){
    if (mode == 1){
        cout << "Welcome, " << name << "!";
    }else if (mode == 2){
        cout << "Goodbye, " << name << "!";
    }

}

int main() {
    int mode;
    cout << "Please select the mode: ";
    cin >> mode;
    
    // Keep asking while the mode is invalid
    while(mode != 1 && mode != 2) {
        cout << "Try again.\n";
        cout << "Please select the mode: ";
        cin >> mode;
    }
    
    string name;
    cout << "Please enter your name: ";
    cin >> name;
    
    bot(mode, name);
}
