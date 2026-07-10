/*
This program takes a user's numeric input and uses a switch statement to display the corresponding coffee type. If the input is not between 1 and 4, it displays "Invalid choice".

Skills Used:
- User input and output (cin and cout)
- Variables
- switch statement
- case, break, and default
- Basic decision making
*/
#include <iostream>
using namespace std;

int main() {
    int choice;
    cin >> choice;
    
    /* Coffee Types:
    1. Espresso
    2. Americano
    3. Cappuccino
    4. Latte
    */
    
    switch(choice) {
        case 1:
            cout << "Espresso";
            break;
        case 2:
            cout << "Americano";
            break;
        case 3:
            cout << "Cappuccino";
            break;
        case 4:
            cout << "Latte";
            break;
        default:
            cout << "Invalid choice";
    }
}
