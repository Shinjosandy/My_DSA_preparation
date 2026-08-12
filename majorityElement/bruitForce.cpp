//Bruit Force approach for finding majority element with O(n^2) time complexity 
#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector <int> nums = { 1, 2, 1, 2, 1};
    
    for (int i: nums){
        int freq = 0;        
        for (int j: nums){
            if( i == j){     
                freq += 1;   //increasing the frequency of element if occured again 
            }
        }
        if(freq > nums.size() / 2){    //if frequency is more that the half of the size of array
            return i;
        }
    }
    
    return -1;
}
