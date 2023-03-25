#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter the number : ";
    cin>>m;

    if(m%3 == 0 && m%5 == 0){
        cout<<"Good Number";
    }
    else if(m%3 == 0 && m%5 != 0){
        cout<<"Bad Number";
    }
    else if(m%5 == 0 && m%3 != 0){
        cout<<"Poor Number";
    }
    else{
        cout<<-1;
    }
    return 0;
}