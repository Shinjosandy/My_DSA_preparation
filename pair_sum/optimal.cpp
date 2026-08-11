//finding the pair of element which sum equals target, where array is sorted 
//this is more optimal approach having (n) time complexity 

#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int i=0, j=nums.size()-1;
  
    while(i < j){
        int sum = nums[i] + nums[j];
      
        if(sum > target){ 
            j--;     //reducing higher number 
        } else if(sum < target){
            i++;      //increasing smaller number 
        } else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;
}

int main(){
    vector<int> nums;

    nums = { 2, 6, 18, 21}; //must be sorted ascendingly 
    vector<int> pair = pairSum(nums, 27);
    cout<<pair[0]<<", "<<pair[1]<<endl;
    return 0;
}
