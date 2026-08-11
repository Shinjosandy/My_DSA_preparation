//finding the pair of element which sum equals target, where array may not be sorted 
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    for ( int i=0; i<nums.size(); i++ ){
        for ( int j=i; j<nums.size(); j++ ){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    return ans;
}

int main(){
    vector<int> nums;

    nums = { 2, 6, 8, 11};
    vector<int> pair = pairSum(nums, 13);
    cout<<pair[0]<<", "<<pair[1]<<endl;  
    return 0;
}
