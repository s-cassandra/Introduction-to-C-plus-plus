/*
This program creates a dynamic array based on the size entered by the user, stores a series of integers, and then searches the array to find and display the largest value. It frees the allocated memory after use to prevent memory leaks.

Skills Used
- User input and output (cin and cout)
- Variables
- Dynamic memory allocation (new and delete[])
- Pointers
- Arrays
- for loops
- Conditional statements (if)
- Finding the maximum value in an array
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; //size of the array
    
    // Create a pointer (stores memory address) that will have
    // enough space to store "n" integers in an array.
    int *nums = new int[n];
    for (int i=0; i<n; i++){
        int element;
        cin>>element;
        nums[i] = element;
    }
    
    int max = nums[0];
    for(int i=0; i<n; i++) {
        if (nums[i]>max){
            max = nums[i];
        }
    }
    cout << "The highest number in the array is: " << max;
    
    // Free the memory to avoid memory leaks
    delete[] nums;
}
