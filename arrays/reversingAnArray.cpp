#include <iostream>
using namespace std;

void reverse(int arr[], int size){
    for(int i=0, j=size-1; i<=j; i++, j--){
        swap(arr[i], arr[j]);  //swapping the opposite numbers from the middle of an array
    }
}

int main(){
    int size=5;
    int arr[size] = {56, 986, 5654, 23, 4};
    
    reverse(arr, 5);    // Call the reverse function
    
    // Print the reversed array
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
