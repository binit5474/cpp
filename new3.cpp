#include<iostream>
using namespace std;
int main(){
    int n,rem,ans=0;
    cin>>n;
    while(n>0){
        rem=n%10;
        n=n/10;
        ans=ans*10+rem;
    }
    cout<<ans;
    return 0;
}