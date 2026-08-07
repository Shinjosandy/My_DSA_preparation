#include <iostream>
#include <climits>   // Required for INT_MAX and INT_MIN
#include <algorithm> // Required for min() and max()
using namespace std;

// Global variables initialized to extreme limits
int smallest = INT_MAX; // Initialized to highest possible integer so any array element will be smaller
int largest = INT_MIN;  // Initialized to lowest possible integer so any array element will be larger

int main(){
    int array[5] = { 20, 6, 8, 90, -4 }; 
    
    for(int i=0; i<5; i++){
        smallest = min(smallest, array[i]); // Updates smallest if the current element is lower
        largest = max(largest, array[i]);   // Updates largest if the current element is higher
    }
    
    cout << "Smallest number in array: " << smallest << endl;
    cout << "Largest number in array: " << largest << endl;
    
    return 0;
}
