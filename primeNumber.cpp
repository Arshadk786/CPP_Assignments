#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    int i = 1;
    int count = 0;
    while(i<=num){
        if(num%i == 0){
            count += 1;
        }
        i += 1;
    }
    if(count == 2){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime Number";
    }
    return 0; 
}