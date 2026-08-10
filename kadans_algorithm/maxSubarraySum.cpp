//Maximum subarray sum
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n=5;
    int max_sum=INT_MIN;
    for( int start=0; start<n; start++){
        int sum=0;                            //initializing sum = 0 for each subarray 
        for( int end=start; end<n; end++){
            sum+=arr[end];
            max_sum=max(max_sum, sum);          //maximum of max_sum and sum of subarray
        }
    }
    
    cout<<max_sum;
    
    return 0;
}
