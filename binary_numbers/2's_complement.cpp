//finding 1's and 2's complement of a number

#include <iostream>
using namespace std;

int bin(int n){
    if (n == 0) return 0; 

    int i = 1;       // place value
    int rem = 0;     // remainder
    int result = 0;  // binary result
    
    while (n > 0){
        rem = n % 2;
        result += rem * i;
        n /= 2;
        i *= 10;
    }
    return result;
}

int ones(int n){
    n=bin(n);
    int i=1;
    int result=0;
    int temp;
    int rem=0;
    while(n>0){
        rem=n%10;
        rem==1? temp=0: temp=1;
        result+=temp*i;
        i*=10;
        n/=10;
    }
    return result;
}

int twos(int n){
    n=ones(n);
    int carry=1, rem = 0, result=0, i=1;
    while(n>0||carry>0){
        rem=n%10;
        result+=i*(rem^carry);
        carry=carry&rem;
        i*=10;
        n/=10;
    }
    return result;
}

int main() {
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Binary equivalent: "<<bin(n)<<endl;
    cout<<"1's complement: "<<ones(n)<<endl;
    cout<<"2's complement: "<<twos(n);
    
    return 0;
}
