/*
This program takes three scores entered by the user, calculates their average using a function, and displays the
final result. The calculation is handled separately to make the code more organised and reusable.

Skills Used
- User input and output (cin and cout)
- Variables
- Functions
- Function parameters
- Returning values (return)
- Mathematical calculations
- Basic code organisation and reusability
*/

#include <iostream>
using namespace std;

double average (double score1, double score2, double score3){
    double result = (score1+ score2 +score3)/3;
    return result;
}

int main() {
    double score1, score2, score3;
    cin >> score1 >> score2 >> score3;
    
    double result = average(score1, score2, score3);
    cout << "The average score is: " << result;
}
