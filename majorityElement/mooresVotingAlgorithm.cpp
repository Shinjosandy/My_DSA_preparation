// Moore's Voting Algorithm to find the majority element in an array
// Time Complexity: O(n), Space Complexity: O(1)

#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector <int> nums = {2, 2, 2, 5, 7, 2, 9};
    
    int n= nums.size();
    
    int freq = 0;  // Stores the vote/count for the current candidate
    int ans = 0;   // Stores the current majority candidate
    
    for(int i: nums){
        
        // If frequency becomes 0, the old candidate is cancelled out.
        // So, choose the current element as the new candidate.
        
        if(freq == 0){
            ans = i;
        }
        
        // Same element as candidate → give it +1 vote
        // Different element → cancel one vote using -1
        
        if(ans == i){
            freq++;
        } else {
            freq--;
        }
    }
    
    // 'ans' is the final candidate after cancelling different elements.

    // Count the actual occurrences of the candidate
    // to verify whether it is a true majority element.    
    int count = 0;

    for (int i : nums) {
        if (i == ans) {
            count++;
        }
    }

    // A majority element must appear more than n/2 times.
    if (count > nums.size() / 2)
        cout << ans;
    else
        cout << -1;

    return 0;
}
