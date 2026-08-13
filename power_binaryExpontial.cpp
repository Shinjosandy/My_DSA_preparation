//this the one of the most efficient way of finding the power of a number
//this approach uses binary exponentials
//having O(logn) time complexity 
#include <iostream>

using namespace std;

double power(int a, int n){
    double ans=1.0;
    double x=a;
    
    //base cases
    if(x == 0) return 0;
    if(n == 0) return 1;
    
    //for -ve powers
    if(n<0){
        x=1.0/x;
        n=-n;
    }
    
    //decide which powers of x to multiply by using binary exponentials
    while(n > 0){
        if( n % 2 == 1){
            ans *= x;
        }
        x *= x;
        n /= 2;
    }
    
    return ans;
}

int main(){
    int a, n;
    cin>>a>>n;
    double pr = power(a, n);
    cout<<pr;
    return 0;
}
