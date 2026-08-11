//Kadan's theorem for maximum subarray sum with O(n) time complexity 

#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int arr[7] = { 3, -2, 8, 9, -4, 0, -2};
    int n = 7;
    int sum=0, max_sum = INT_MIN;
    
    for( int i=0; i<n; i++){
        sum += arr[i];
        
        max_sum = max(sum , max_sum);   //finding max_sum before going for next subarray
        
        //if sum becomes -ve initialize sum = 0 start for next subarray
        if (sum < 0){
        sum = 0;
        }
    }
    
    cout<<"Maximum subarray sum: "<<max_sum;
    
    return 0;
}

/* Output:

Maximum subarray sum: 18 */
