#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Number : ";
    cin>>num;
    int rem,rev=0;
    while(num!= 0){
        rem = num % 10;
        num = num / 10;
        rev = rev * 10 + rem;
    }
   
    cout<<"Reversed Number : "<<rev;
    return 0;
}