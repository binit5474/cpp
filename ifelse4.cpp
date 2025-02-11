#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    if(number%3==0||number%5==0){
        cout<<"divisible by both";
    }
    else{
        cout<<"not divisible";
    }
    return 0;
}