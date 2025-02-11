#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i,count=0,n;
    cout<<"enter the number";
    cin>>n;
    for(i=2;i<14;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>=2){
        cout<<"this is not prime number"<<endl;
    }
    else{
        cout<<"this is prime number"<<endl;
    }
}