#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter the number";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%5==0||i%3==0){
            continue;
            
        }
        cout<<i<<endl;
    }
    return 0;
}