#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    n>>1;
  
  //A power of 2 has exactly one set bit in binary. 
  //ex: 2=10, 4=100, 8=1000, 16=10000, .. etc,
  
  //Subtracting 1 flips all bits after that set bit.
  //ex: 3=011, 7=0111, ... etc,
  
    if(((n-1) & n) ==0){                     
        cout<<"Number is power of 2"<<endl;
    }
    else{
        cout<<"Number is not a power of 2";
    }

    return 0;
}
