//Converting decimal numbers to binary numbers

#include <iostream>
using namespace std;

int bin(int n){
    // Edge case: handle 0 explicitly
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

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    
    int binary = bin(n);
    cout << "Equivalent binary number: " << binary << endl; 

    return 0;
}
