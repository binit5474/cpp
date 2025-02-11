#include<iostream>
using namespace std;
bool prime(int n){
    for(int i=0;i<n;i++){
        if(n%2==0){
           
           return 1;
        }
        return 0;
    }
}
    int fact(int n){
        int ans=1;
        for(int i=1;i<=n;i++){
            ans=ans*i;
            
        }
        return ans;
    }
    int main(){
        int a,b;
        cin>>a>>b;
        cout<<prime(a)<<endl;
        cout<<prime(b)<<endl;
        cout<<fact(a)<<endl;
        cout<<fact(b)<<endl;
    }
