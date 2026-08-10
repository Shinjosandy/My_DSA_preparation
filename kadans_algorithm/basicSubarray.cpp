//Basics of subarray
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n=5;
    for( int start=0; start<n; start++){   //to change the start
        for( int end=start; end<n; end++){   //to change the end
            for(int i=start; i<=end; i++){   //loop from start to end
                cout<<arr[i];       //sub-array 
            }
            cout<<" ";         //space in 2 sub arrays
        }
        cout<<endl;         //next sub array from different start
    }
    
    return 0;
}

/* Output

1 12 123 1234 12345 
2 23 234 2345 
3 34 345 
4 45 
5 

*/
