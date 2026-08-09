//functions in Vector
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> vect = {69, 5, 0, 33, 90};
    
    cout<<"vector: ";
    for (int i: vect){
        cout<<i<<" ";
    }
    
    //size() function
    cout<<"\nSize of vector: "<<vect.size()<<endl;
    
    //push 20 in a vector
    vect.push_back(20);
    
    cout<<"vector after push() function: ";
    for (int i: vect){
        cout<<i<<" ";
    }
    
    //front() function
    cout<<"\nFront of a vector: "<<vect.front();
    
    //back() functio
    cout<<"\nBack of a vector: "<<vect.back();
    
    //at() function
    cout<<"\nVector element at 2nd index: "<<vect.at(2)<<endl;
    
    //pop() function
    vect.pop_back();
    cout<<"vector after pop() function: ";
    for (int i: vect){
        cout<<i<<" ";
    }
    
    return 0;
}


/* Output:
vector: 69 5 0 33 90 
Size of vector: 5
vector after push() function: 69 5 0 33 90 20 
Front of a vector: 69
Back of a vector: 20
Vector element at 2nd index: 0
vector after pop() function: 69 5 0 33 90 */
