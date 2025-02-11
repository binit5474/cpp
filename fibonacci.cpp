#include<iostream>
using namespace std;
int main(){
    int n,i,t1=0,t2=1,t3;
    cout<<"enter the number";
    cin>>n;
    cout<<t1<<t2;
    for(i=2;i<n;i++){
        
        t3=t1+t2;
        t1=t2;
        t2=t3;
        cout<<t3;
    }
    return 0;
}