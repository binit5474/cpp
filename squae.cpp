#include<iostream>
using namespace std;
int main(){
    int i,n, sum=0,d;
    cout<<"enter the nnumber";
        cin>>n;
    for(i=1;i<=n;i++){
        d= i*i;
        sum=sum+d;
        
    }
    cout<<sum<<endl;
    return 0;
}