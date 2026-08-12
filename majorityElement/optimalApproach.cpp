//An Optimal approach to find the majority element with O(nlogn) time complexity 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    vector <int> nums = { 3, 2, 3, 2, 3};

  //sorting the array in an increasing order.
  //tkaes O(nlogn) time complexity 
    sort(nums.begin(), nums.end());    
    int freq = 1, n=nums.size(), ans = nums[0];

    if (n == 1) 
      return nums[0];  //if only 1 element present in an array 

    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){  
            freq++;
        }else{
            freq=1;
            ans = nums[i];
        }
        if(freq > n/2){
            // return ans;
            cout<<ans;
        }
    }

    
    return -1;
}
