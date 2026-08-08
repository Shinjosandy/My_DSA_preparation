#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vect = {69, 5, 0, 33, 90};
    
    //for each loop
    for (int i: vect){
        cout<<i<<endl;
    }
    
    return 0;
