#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter 2 Numbers"<<endl;
    cout<<"a : ";
    cin>>a;
    cout<<"b : ";
    cin>>b;

    a = b+a;
    b=a-b;
    a=a-b;
    cout<<"a : "<<a<<endl<<"b : "<<b;
    return 0;
}