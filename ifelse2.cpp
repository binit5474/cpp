#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter the age";
    cin>>age;
    if(age<12){
        cout<<"you are a child";
    }
    else if(age<18){
        cout<<"you are a teenager";

    }
    else{
        cout<<"you are a adult";
    }
    return 0;
}