#include<iostream>
using namespace std ; 
int main(){

    cout<<"Calculator Functions"<<endl; 
    int a ; 
    cout<<"Enter first number : "<<endl;
    cin>>a ;
    int b ; 
    cout<<"Enter second number: "<<endl;
    cin>> b ; 
    cout<<a+ b<< endl;
    cout<<a - b <<endl;
    cout<<a * b <<endl ;
    if(b!= 0 )
    {
        int c = a/b ; 
        cout<<c<<endl; 
    }
    else 
    {
        cout<<"Division not possible"<<endl;
    
    }
}