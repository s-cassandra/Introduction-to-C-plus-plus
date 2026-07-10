/*
This program stores a 7×7 two-dimensional array and allows the user to enter a row and column index. It then displays
the value stored at that position in the array.

Skills Used
- User input and output (cin and cout)
- Variables
- Two-dimensional arrays
- Array indexing
- Retrieving data from a specific array position
*/

#include <iostream>
using namespace std;

int main() {
    int map[7] [7] = {
        {0,0,1,1,0,1,0},
        {1,0,0,1,1,0,1},
        {0,1,0,1,0,0,0},
        {0,0,0,0,0,1,0},
        {0,1,1,0,0,1,0},
        {0,0,1,0,0,0,1},
        {0,1,0,0,0,0,1}
    };
    int num1, num2;
    cin >> num1 >> num2;
    
    cout << map[num1][num2];
}
