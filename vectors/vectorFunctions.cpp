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
    cout<<"\nSize of vector: "<<vect.size();
    cout<<"\nCapacity of vector: "<<vect.capacity()<<endl;
    
    //push 20 in a vector
    vect.push_back(20);
    
    cout<<"\nvector after push_back() function: ";
    for (int i: vect){
        cout<<i<<" ";
    }
    
    cout<<"\nSize of vector after push_back(): "<<vect.size();
    cout<<"\nCapacity of vector after push_back(): "<<vect.capacity()<<endl;
    
    //front() function
    cout<<"\nFront of a vector: "<<vect.front();
    
    //back() functio
    cout<<"\nBack of a vector: "<<vect.back();
    
    //at() function
    cout<<"\nVector element at 2nd index: "<<vect.at(2)<<endl;
    
    //pop() function
    vect.pop_back();
    cout<<"\nVector after pop_back() function: ";
    for (int i: vect){
        cout<<i<<" ";
    }
    
    cout<<"\nSize of vector after pop_back(): "<<vect.size();
    cout<<"\nCapacity of vector after pop_back(): "<<vect.capacity()<<endl;
    
    return 0;
}

/* Output:
vector: 69 5 0 33 90 
Size of vector: 5
Capacity of vector: 5

vector after push_back() function: 69 5 0 33 90 20 
Size of vector after push_back(): 6
Capacity of vector after push_back(): 10

Front of a vector: 69
Back of a vector: 20
Vector element at 2nd index: 0

Vector after pop_back() function: 69 5 0 33 90 
Size of vector after pop_back(): 5
Capacity of vector after pop_back(): 10 */
